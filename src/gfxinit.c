#include <nusys.h>

/*
  The viewport structure 
  The conversion from (-1,-1,-1)-(1,1,1).  The decimal part of 2-bit.
 */
static Vp vp = {
    320*2, 240*2, G_MAXZ/2, 0,	/* The scale factor  */
    320*2, 240*2, G_MAXZ/2, 0,	/* Move  */
};

/*
  The initialization of RDP 
*/
Gfx setup_rdpstate[] = {
  gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_OPA_SURF2),
  gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
  gsDPSetScissor(G_SC_NON_INTERLACE, 0,0, 320,240),
  gsDPSetColorDither(G_CD_NOISE),
  gsSPEndDisplayList(),
};

/*
  The initialization of RSP 
*/
Gfx setup_rspstate[] = {
  gsSPViewport(&vp),
  gsSPClearGeometryMode(0xFFFFFFFF),
  gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK),
  gsSPTexture(0, 0, 0, 0, G_OFF),
  gsSPEndDisplayList(),
};
