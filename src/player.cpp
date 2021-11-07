#include <nusys.h>

#include "player.hpp"
#include "math.hpp"
#include "animator.hpp"
#include "util.hpp"
#include "segment.h"
#include <nusys.h>
#include <nualstl_n.h>
#include "audio.hpp"

#include "../models/static/shadow/shadow.h"

const float PLAYER_GRAVITY = 980.0f * kInterval;
const float PLAYER_WALKSPEED = 1.2f * kInterval;
const float PLAYER_RUNSPEED = 1.2f * kInterval;
const float PLAYER_TURNSPEED = 1.2f * kInterval;

const float PLAYER_RADIUS = 10.0f;

// -------------------------------------------------------------------------- //

TPlayer * gPlayer { nullptr };

// -------------------------------------------------------------------------- //

void TPlayer::init()
{
    TObject::init();

    // set up to start in flight for testing:
    mDirection = TVec3<f32>(0.0f, 0.0f, 0.0f);
    mRotation = TVec3<f32>(0.0f, 0.0f, 0.0f);
    mSpeed = 1.0f;

    //Load model from ROM

    //Set up model animator
    //setAnimation(1, ANIM_IDLE);

    // shadow
    mShadow = new TShadow(mDynList);
    mShadow->init();
    mShadow->setParent(this);
    mShadow->setPosition({0.0f,0.0f,0.0f});
    mShadow->setScale(mScale);

    initCollider(TAG_PLAYER, TAG_PLAYER, 0, 1);
    setCollideRadius(PLAYER_RADIUS);
    setCollideCenter(mPosition);

    mCameraTarget = mPosition;

    mYSpeed = 0.0f;
    mSpeed = 0.0f;

    mGameState = gameplaystate_t::PLAYERGAMESTATE_NORMAL;

    startIdle();
}

void TPlayer::setAnimation(int length, playeranim_t anim, bool loop, float timescale){
}

void TPlayer::startIdle(){
    mState = PLAYERSTATE_IDLE;
}

void TPlayer::checkLateralCollision(){
    TVec3F nrmm = mDirection;
    nrmm.normalize();
    nrmm *= (PLAYER_RADIUS / 2.0f);

    mGroundFace = TCollision::findGroundBelow(mPosition + nrmm, PLAYER_RADIUS);  //recalc ground pos

    //if (mGroundFace != nullptr){
    //    float yPos = mGroundFace->calcYAt((mPosition + nrmm).xz()) + PLAYER_RADIUS;
    //    mPosition.y() = yPos;
    //}

    mClosestFace = TCollision::findClosest(mPosition + nrmm , PLAYER_RADIUS / 2.0f); //use closest face in front of player
}

void TPlayer::checkMeshCollision(const TCollFace * face, float radius){
    TVec3F p;
    face->project(mPosition, &p);
    mPosition = p + face->nrm * radius;
}

void TPlayer::update()
{
    TObject::update();

    /* Ground check */
    TVec3F pt = getPosition();
    mGroundFace = TCollision::findGroundBelow(pt, PLAYER_RADIUS);
    float groundY = -1000.0f;
    if (mGroundFace != nullptr) groundY = mGroundFace->calcYAt(pt.xz());
    else {
        mGroundFace = TCollision::findGroundAbove(pt + TVec3F( 0.0f, 0.0f, 0.0f ), PLAYER_RADIUS); //Jump to ground above
        if (mGroundFace != nullptr) groundY = mGroundFace->calcYAt(pt.xz());
    }

    /* Collision check */
    mClosestFace = TCollision::findClosest(mPosition, PLAYER_RADIUS);

    
    if (mPosition.y() > groundY){
        mYSpeed -= PLAYER_GRAVITY;
        mPosition.y() = mPosition.y() + (mYSpeed * kInterval);
    }
    else if (mYSpeed <= 0.0f) {
        mPosition.y() = groundY;
        mYSpeed = -mYSpeed / 1.5f;
    }
    else{
        mPosition.y() = mPosition.y() + (mYSpeed * kInterval);
    }

    switch (mState){
        // idle. c'mon let's get a move on...
        case playerstate_t::PLAYERSTATE_IDLE:{
            //checkLateralCollision();

            mCameraTarget = mPosition;
            
            if (mPad->getAnalogX() != 0 || mPad->getAnalogY() != 0) {
                mState = playerstate_t::PLAYERSTATE_WALKING;
            }
        }
        break;

        // -------------------------------------------------------------------- //
        // walking on the ground
        case playerstate_t::PLAYERSTATE_WALKING:{
            //checkLateralCollision();

            mCameraTarget = mPosition;  //Target slightly above player and slightly in front of player

            // played moved, change to walking state
            if (mPad->getAnalogX() == 0 && mPad->getAnalogY() == 0) {
                // back to idle
                mState = playerstate_t::PLAYERSTATE_IDLE;
            }
        }
        break;
    }

    //Mesh collision
    //if (mClosestFace != nullptr)
    //    checkMeshCollision(mClosestFace, PLAYER_RADIUS);

    //Object collision
    setCollideCenter(mPosition);

    // set shadow position and rotation to floor
    //if (mGroundFace != nullptr) {
    //    pt = getPosition();
    //    pt.y() = mGroundFace->calcYAt(pt.xz()) + 1.0f;
    //    mShadow->setPosition(pt);
    //    mShadow->setRotation(TVec3<s16>((s16)TSine::atan2(mGroundFace->nrm.z(), mGroundFace->nrm.y()), (s16)0, (s16)-TSine::atan2(mGroundFace->nrm.x(), mGroundFace->nrm.y())));
    //}

    mCameraTarget = mPosition;

    updateBlkMap();
}

void TPlayer::updateMtx()
{
    TMtx44 temp1, temp2, temp3, mPosMtx, mScaleMtx;
    
    mPosMtx.translate(mPosition);
    temp1.rotateAxis(TVec3<f32>(-TSine::scos(mRotation.y()), 0.0f, TSine::ssin(mRotation.y())), -mRotation.x());
    temp2.rotateAxisY(mRotation.y());
    TMtx44::concat(temp1, temp2, temp3);
    temp1.rotateAxis(temp3.mul(TVec3<f32>(0.0f, 0.0f, 1.0f)), mRotation.z());
    TMtx44::concat(temp1, temp3, mRotMtx);
    mScaleMtx.scale(mScale);

    //Combine mtx
    TMtx44::concat(mPosMtx, mRotMtx, temp1);
    TMtx44::concat(temp1, mScaleMtx, temp2);

    TMtx44::floatToFixed(temp2, mFMtx);
    TMtx44::floatToFixed(mRotMtx, mFRotMtx);

    mMtxNeedsUpdate = false;
}

void TPlayer::draw()
{
    //mAnim->draw();

    updateMtx();
    TObject::draw();

    //if (mGroundFace != nullptr) {
    //    mShadow->draw();
    //}
}

// -------------------------------------------------------------------------- //

void TPlayer::onCollide(
    TCollider * const other
) {
    // TODO
}