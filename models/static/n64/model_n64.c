#include <ultra64.h>

Lights1 n64_f3d_material_003_lights = gdSPDefLights1(
	0x7F, 0x74, 0x0,
	0xFE, 0xE8, 0x0, 0x28, 0x28, 0x28);

u64 n64_blue_ci8[] = {
	0x0001020100000304, 0x0405060606060606, 0x0606060604040300, 0x0000000101010100, 0x0001020100000405, 0x0606060607070808, 0x0808070606040404, 0x0000000001020101, 
	0x0906040003040607, 0x08080a0a0a0a0909, 0x0909090808060605, 0x0404040000000001, 0x0b0c080506070a09, 0x0d0d0e0d0d0d0d0d, 0x0d0d0d0d09090a08, 0x0706050403000000, 
	0x0f10090808090d10, 0x11100c0c0c121010, 0x101010120c0d0d0e, 0x0908070604040300, 0x130c0908090d110b, 0x0f0b141111141514, 0x1414141116100c0c, 0x0d0e090706040404, 
	0x1417080809121318, 0x18191314130b0b0b, 0x0b0b0b1314151110, 0x0c0c0d090806060a, 0x140d070609100f18, 0x180f13130f191919, 0x19190f0f0b131a14, 0x160c0d090808080c, 
	0x140e060609110f18, 0x190b130b19181818, 0x181818191919190f, 0x14100c0d09080916, 0x1409050609110f18, 0x190b0b191b1c1b1d, 0x1d1d1d18181d1d18, 0x13160c0d090a0e11, 
	0x1a0906060d151918, 0x190b0f1d1c1e1e1b, 0x1b1b1b1b1b1b1b19, 0x1a16100c0d090d14, 0x1a1709090c141919, 0x190f191b1e1e1e1c, 0x1b1c1c1c1c1c1b19, 0x141111100d0e0d11, 
	0x1a15110c0c1a1918, 0x1919181c1e1e1e1c, 0x1c1e1e1e1e1e1c19, 0x131a0b13100d0d0d, 0x1414150c0d141d1d, 0x18191d1e1e1e1e1c, 0x1c1e1e1e1e1e1e18, 0x0f0f190f11170d07, 
	0x1414110d07151c1c, 0x1b181b1e1e1e1e1c, 0x1c1e1e1e1e1e1e1d, 0x1818180f100d091f, 0x1a05200804161c1c, 0x180f1b1e1e1e1e1b, 0x1c1e1c1c1e1e1e1c, 0x1d1b180b0c080221, 
	0x10212201060c2324, 0x0d0e231e1e1e1e1d, 0x1b1c1d181e1e1e1e, 0x1c1d0f1309020225, 0x262722020410241c, 0x2829191c1e1e1e18, 0x0f1819181e1e1e1c, 0x1d0f19230802001f, 
	0x2a21220204151e1e, 0x1e1813181e1e1c0f, 0x101116291c1e1b15, 0x111b1b1500000221, 0x170802040917092b, 0x1b180f1b1e1e2c16, 0x0c0c0c12122d2e0d, 0x2e1e2f0500002230, 
	0x0811070d0d160208, 0x1429192c2c1e2e12, 0x0d0d0d3104060606, 0x231c080004222125, 0x0a05000605100c00, 0x141a0f00321b0f14, 0x120d0d060a15160c, 0x0d0e022202223025, 
	0x0900000421001a08, 0x07100f0133180b0b, 0x1917160f0d141608, 0x0001002521212525, 0x0400020604210814, 0x3407150d17180f13, 0x140c11120c101209, 0x0008022521212525, 
	0x0702020506043117, 0x160009050a140b10, 0x0c0c0d080a101004, 0x0404212525252525, 0x0702000404020431, 0x0c08020004060c10, 0x0d080a07070d0904, 0x0602302125252525, 
	0x0431020221212221, 0x0006313102300208, 0x0522312202022202, 0x0121212721252525, 0x0022222125252525, 0x2522222525250300, 0x0021020422252521, 0x0122302130252525, 
	0x0222222125252525, 0x253021252525020d, 0x0622222125252525, 0x2225252525252525, 0x0231222125252525, 0x300222252525040d, 0x0900000021212521, 0x0022252525252525, 
	0x0201312730252525, 0x2100222525250408, 0x0e00010031212225, 0x0401222525252121, 0x0200022221212121, 0x2701222525250608, 0x0d04020402222221, 0x0001222125252121, 
	
};

u64 n64_blue_ci8_pal_rgba16[] = {
	0x036b0369032903ab, 0x03ad03ed03ef042f, 0x043104730471063f, 0x04f704b504b3067f, 0x0539057b053705ff, 0x05bd05bb057904f5, 0x06ff06bf05fd077f, 0x07bf073f07ff02a7, 
	0x047502a502e7063d, 0x067b0263057502e5, 0x073d067d03a9063b, 0x06fd06bb05fb05b9, 0x02a30327063905b7, 0x036d000000000000
};

u64 n64_green_ci8[] = {
	0x0001010100000203, 0x0304050505050506, 0x0506050404030200, 0x0000000101010100, 0x0001010100020304, 0x0505050606060607, 0x0707060504030302, 0x0200000001010801, 
	0x0906030203030606, 0x07070a0a0a090909, 0x0909090707050505, 0x0403020000000001, 0x0b0c070505070a0d, 0x0e0d0d0e0e0e0e0e, 0x0e0e0e0e0d090a07, 0x0605040302000000, 
	0x0f10090707091110, 0x1210130c0c101010, 0x101010130c110e0d, 0x0907070504030200, 0x140c09070911120b, 0x0f0f151216151515, 0x1515151612100c0c, 0x110d090705030303, 
	0x1511070709131417, 0x17181414140b0b0b, 0x0b0f0b1414151219, 0x13110d0a0605050a, 0x160e060609100f1a, 0x170f14140f181818, 0x18180f0f0b141415, 0x12130e0d0a06070c, 
	0x140d050509121817, 0x170f140b18171717, 0x171717181818180f, 0x14100c0e09070912, 0x1409040509120f17, 0x180f0b181b1c1b1a, 0x1a1a1a17171a1a17, 0x14120c0e090a0d16, 
	0x140905050e151817, 0x180f181a1d1e1d1c, 0x1b1b1b1b1b1c1b17, 0x1412100c0e090e15, 0x140c09090c151817, 0x1818171b1d1e1d1c, 0x1c1c1c1c1c1d1c17, 0x14121210110d0e12, 
	0x141612130c141717, 0x1718171c1e1e1d1c, 0x1c1d1d1d1d1e1c17, 0x0b140b14100e0e0e, 0x1415160c0e151a1a, 0x17171a1d1e1f1d1c, 0x1c1d1e1d1f1f1d17, 0x0f0f180f120e0e06, 
	0x1514120d07151d1c, 0x1b171c1f20201e1c, 0x1c1e1e1e1f211e1b, 0x1717170f190e0922, 0x14040d0704121d1d, 0x1a0f1c2121201e1c, 0x1c1d1d1d1f211e1c, 0x1b1b170b0c070823, 
	0x19242501050c0b18, 0x0e0d0b2627261e1b, 0x1b1c1a1a1e201f1d, 0x1c1a18140d012823, 0x1222250804101820, 0x1c18181f27261e17, 0x0f1718171f211f1d, 0x1a18180b07080022, 
	0x0322250804162627, 0x261a0b1a20211d0f, 0x1016120f1d201c15, 0x161d1b1500000124, 0x110708030d110d0f, 0x1d1a181c1e1e1712, 0x0c0c1110131a140e, 0x151f160500002523, 
	0x0712060e0e12080a, 0x150f171a1a1e1413, 0x110e0e2803050505, 0x0f1c060202252423, 0x0904020504100c02, 0x14140f000b1c0f15, 0x100e0d040915120c, 0x0e0d082508252429, 
	0x0d0000032400140a, 0x06190f0115170f0b, 0x170c120f11151907, 0x0001002924242929, 0x0300080504240714, 0x0206160e0c170f14, 0x150c16130c191309, 0x0007082924222929, 
	0x0608080505032811, 0x19000d0509140b19, 0x130c0e070a101003, 0x0404242923292929, 0x0508020304080328, 0x0c07080103051310, 0x1107070605110903, 0x0501232323292929, 
	0x0328082824242524, 0x0005082808230807, 0x0428282508082808, 0x0124242524292923, 0x0025282423232929, 0x2925252929290000, 0x0024080228232324, 0x0125232423292923, 
	0x0825252429292929, 0x2923232929290811, 0x0525282429232929, 0x2223292929292929, 0x0828252429292929, 0x230125292929020e, 0x0d00000022242324, 0x0025232929292929, 
	0x2801282229232929, 0x2400282929290307, 0x0d00010008242529, 0x0301252329292423, 0x0102082524242423, 0x2200252929290507, 0x0e03080308222824, 0x0008252329292423, 
	
};

u64 n64_green_ci8_pal_rgba16[] = {
	0x05890549058b05cb, 0x05cd060d060f064f, 0x05470691065107df, 0x0715069306d307e1, 0x075706d507990717, 0x07dd07db079b07e5, 0x07e3075907e707e9, 0x07eb07ed07ef07f1, 
	0x07f307f504c50483, 0x04c3050507f707f9, 0x0507048100000000
};

u64 n64_red_ci8[] = {
	0x0000000000000101, 0x0102020202020304, 0x0304020205010100, 0x0000000000000000, 0x0000000000060102, 0x0202020404040404, 0x0404040202010101, 0x0100000000000700, 
	0x08090106010a0904, 0x0404080808080808, 0x0808080b04030202, 0x0201010c00000000, 0x0d0e04020204080f, 0x0f0f0f0f0f0f0f0f, 0x10100f0f0f080804, 0x04020201010c0000, 
	0x1112080404080e13, 0x1412130e15131313, 0x131313130e160f0f, 0x080b040205010100, 0x170e080b080e140d, 0x18191a141a1a1a1a, 0x1a1a1a1a1413150e, 0x160f0804020a0101, 
	0x1a0e04040813171b, 0x1c1d1717170d0d0d, 0x0d190d17171a141e, 0x130e0f0804020208, 0x1a0f04090812111f, 0x1b111720111d1d1d, 0x1d1d18110d17171a, 0x1413100f0804040e, 
	0x210f020208141d1b, 0x2211170d1d1b1b1b, 0x1b1b1b1d1d1d1d11, 0x21130e0f08040814, 0x170802020823181b, 0x1d110d1d2425241f, 0x1f1f1f1c1b1f1f1b, 0x1714150f08080f1a, 
	0x170802030f1a1d1b, 0x1d11261f27282729, 0x242424242425241b, 0x1714130e0f080f1a, 0x170e2a080e2b1d1b, 0x1d261b2427282725, 0x2525252525272922, 0x171414120e0f0f14, 
	0x201a232c0e171b1b, 0x221d1b2528282725, 0x252727272728251b, 0x0d170d17120f0f0f, 0x211a1a0e0f2b1f2d, 0x1b221f272e2f2725, 0x252728302f2f271c, 0x11111d1123100f04, 
	0x1a21230f041a2725, 0x241b252f31323325, 0x342828282f352824, 0x1b1b1c11140f0836, 0x1702370b02142727, 0x1f18253535312825, 0x252727272f352e25, 0x38241b0d0e04393a, 
	0x1e3b3c00020e0d1d, 0x0f0f0d3d3e3d2824, 0x24251f1f28312f27, 0x252d1d170f00393a, 0x143c3c3905131d31, 0x251d3f2f3e3d281b, 0x111b1d1b2f402f27, 0x1f1d1d0d0439003c, 
	0x01363c39051a3d3e, 0x3d1f0d1f31352711, 0x131a14112731252b, 0x4142241a0000433a, 0x0e0439010f0e0f11, 0x271f1d2933281b14, 0x0e0e0e121344170f, 0x2b2f1a020c003c3a, 
	0x0414040f0f143945, 0x2b11221f2d282013, 0x0e0f0f3901020202, 0x11250401013c3a3a, 0x0802010202120e01, 0x2117180c0d25111a, 0x130f0f02081a1415, 0x0f0f393c393c3a46, 
	0x0f000c0a3a001708, 0x041411001a1c110d, 0x1b0e1411161a1404, 0x000000463a3a4646, 0x01003902023a0421, 0x06041a0f0e1b1117, 0x1a151a130e141308, 0x000407463a3c4646, 
	0x04393902020a390e, 0x14000f0208170d14, 0x130e0f0408131301, 0x05023a4647464646, 0x0339060a02390139, 0x0e04390001021313, 0x0e040b0403160801, 0x02003a3a3a464646, 
	0x013939393a3a3c3a, 0x00023939073a0704, 0x0239393c39074839, 0x003b3a3c3a46463a, 0x0c3c393a3a474646, 0x46493c4646460c00, 0x003a390148473a3a, 0x003c3a3a3a464647, 
	0x393c3c3a46464646, 0x463a3a4646463916, 0x0249483b463a4646, 0x3c3a464646464646, 0x39393c3a46464646, 0x3a003c464646010f, 0x0f0000003c3a3a3a, 0x003c3a4646464646, 
	0x3900393c4a474646, 0x3a00484646460104, 0x0f00000c393b3c46, 0x01003c3a46463a3a, 0x4301393c3a3a3a3a, 0x3c003c4646460204, 0x0f013901393c483a, 0x0007493a46463a3a, 
	
};

u64 n64_red_ci8_pal_rgba16[] = {
	0xf909f94bf98df9cd, 0xf9cff94df90bf907, 0xfa11f98ff98bfa0f, 0xf949fbdffa95fa53, 0xfa93fc21fb17fad7, 0xfb19fad5fa55fb9d, 0xfc61fbe1fb5bfca5, 0xfce5fc63fad9fce7, 
	0xfbddfb5dfc65fb59, 0xfd29fd6bfc23fdad, 0xfdeffd2bfa51fb9b, 0xfa97fd27fe2ffe31, 0xfdedfe73fe33fdaf, 0xfdabfeb5f045fa13, 0xfce9f8c7e843e883, 0xf085fef7ff39fca3, 
	0xfe75fb1bfd6df8c9, 0xfca7f9d1e001e803, 0xf887f0c5e0410000
};

Vtx n64_n64_N_mesh_mesh_mesh_vtx_0[72] = {
	{{{26, 40, 51},0, {496, 880},{0xD6, 0x16, 0x76, 0xFE}}},
	{{{26, 57, 51},0, {624, 880},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{26, 57, 26},0, {624, 752},{0x83, 0xE9, 0xF7, 0xFE}}},
	{{{26, 40, 26},0, {496, 752},{0xD6, 0x16, 0x8A, 0xFE}}},
	{{{51, 40, 26},0, {496, 368},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, 57, 26},0, {624, 368},{0x7D, 0xE9, 0xF7, 0xFE}}},
	{{{51, 57, 51},0, {624, 240},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 40, 51},0, {496, 240},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, -2, 51},0, {368, 368},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{51, -2, 26},0, {368, 496},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{26, 57, 51},0, {624, 1008},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{26, 98, 51},0, {624, 1008},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{26, 98, 26},0, {624, 752},{0xB1, 0x5B, 0xD7, 0xFE}}},
	{{{26, 40, -26},0, {624, 752},{0x8A, 0x16, 0x2A, 0xFE}}},
	{{{26, -2, -26},0, {624, 752},{0xBF, 0xB5, 0x50, 0xFE}}},
	{{{-26, 40, 26},0, {496, 624},{0x76, 0x16, 0xD6, 0xFE}}},
	{{{-26, 57, 26},0, {624, 624},{0x9, 0xE9, 0x83, 0xFE}}},
	{{{-26, 57, 51},0, {624, 496},{0x9, 0xE9, 0x7D, 0xFE}}},
	{{{-26, 40, 51},0, {496, 496},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{-26, -2, 51},0, {368, 624},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{-26, -2, 26},0, {368, 752},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{-51, 40, 51},0, {496, 112},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, 57, 51},0, {624, 112},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, 57, 26},0, {624, -16},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 40, 26},0, {496, -16},{0x8A, 0x16, 0xD6, 0xFE}}},
	{{{-51, -2, 51},0, {368, 112},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-51, -2, 26},0, {368, -16},{0xBF, 0xB5, 0xB0, 0xFE}}},
	{{{-51, 98, 51},0, {624, 240},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{-51, 98, 26},0, {624, -16},{0xB7, 0x49, 0xB7, 0xFE}}},
	{{{-51, 57, 51},0, {624, 240},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{26, 40, -26},0, {496, 624},{0x8A, 0x16, 0x2A, 0xFE}}},
	{{{26, 57, -26},0, {624, 624},{0xF7, 0xE9, 0x7D, 0xFE}}},
	{{{26, 57, -51},0, {624, 496},{0xF7, 0xE9, 0x83, 0xFE}}},
	{{{26, 40, -51},0, {496, 496},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{26, -2, -26},0, {368, 624},{0xBF, 0xB5, 0x50, 0xFE}}},
	{{{26, -2, -51},0, {368, 496},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{51, 40, -51},0, {496, 112},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, 57, -51},0, {624, 112},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, 57, -26},0, {624, -16},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 40, -26},0, {496, -16},{0x76, 0x16, 0x2A, 0xFE}}},
	{{{51, -2, -26},0, {368, 112},{0x41, 0xB5, 0x50, 0xFE}}},
	{{{51, -2, -51},0, {368, 240},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{51, 98, -51},0, {624, 240},{0x49, 0x49, 0xB7, 0xFE}}},
	{{{51, 98, -26},0, {624, -16},{0x49, 0x49, 0x49, 0xFE}}},
	{{{51, 57, -51},0, {624, 240},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{-26, 40, -51},0, {496, 880},{0x2A, 0x16, 0x8A, 0xFE}}},
	{{{-26, 57, -51},0, {624, 880},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{-26, 57, -26},0, {624, 752},{0x7D, 0xE9, 0x9, 0xFE}}},
	{{{-26, 40, -26},0, {496, 752},{0x2A, 0x16, 0x76, 0xFE}}},
	{{{-51, 40, -26},0, {496, 368},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, 57, -26},0, {624, 368},{0x83, 0xE9, 0x9, 0xFE}}},
	{{{-51, 57, -51},0, {624, 240},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 40, -51},0, {496, 240},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, -2, -26},0, {368, 368},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-51, -2, -51},0, {368, 240},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{-26, 57, -51},0, {624, 1008},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{-26, 98, -51},0, {624, 1008},{0x49, 0x49, 0xB7, 0xFE}}},
	{{{-26, 98, -26},0, {624, 752},{0x4F, 0x5B, 0x29, 0xFE}}},
	{{{-26, 40, 26},0, {624, 752},{0x76, 0x16, 0xD6, 0xFE}}},
	{{{-26, -2, 26},0, {624, 752},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{51, 57, 51},0, {624, 240},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 57, 26},0, {624, 496},{0x7D, 0xE9, 0xF7, 0xFE}}},
	{{{51, 98, 26},0, {624, 496},{0x4F, 0x5B, 0xD7, 0xFE}}},
	{{{51, -2, -26},0, {624, 496},{0x41, 0xB5, 0x50, 0xFE}}},
	{{{51, 40, -26},0, {624, 496},{0x76, 0x16, 0x2A, 0xFE}}},
	{{{51, 98, 51},0, {624, 240},{0x49, 0x49, 0x49, 0xFE}}},
	{{{-51, 57, -51},0, {624, 240},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 57, -26},0, {624, 496},{0x83, 0xE9, 0x9, 0xFE}}},
	{{{-51, 98, -26},0, {624, 496},{0xB1, 0x5B, 0x29, 0xFE}}},
	{{{-51, -2, 26},0, {624, 496},{0xBF, 0xB5, 0xB0, 0xFE}}},
	{{{-51, 40, 26},0, {624, 496},{0x8A, 0x16, 0xD6, 0xFE}}},
	{{{-51, 98, -51},0, {624, 240},{0xB7, 0x49, 0xB7, 0xFE}}},
};

Gfx n64_n64_N_mesh_mesh_mesh_tri_0[] = {
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(9, 4, 8, 0),
	gsSP1Triangle(2, 10, 11, 0),
	gsSP1Triangle(2, 11, 12, 0),
	gsSP1Triangle(2, 12, 13, 0),
	gsSP1Triangle(2, 13, 14, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 6, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(8, 12, 13, 0),
	gsSP1Triangle(8, 14, 12, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 6, 9, 0),
	gsSP1Triangle(11, 6, 10, 0),
	gsSP1Triangle(8, 12, 13, 0),
	gsSP1Triangle(8, 14, 12, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_0 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(2, 10, 11, 0),
	gsSP1Triangle(2, 11, 12, 0),
	gsSP1Triangle(2, 12, 13, 0),
	gsSP1Triangle(2, 13, 14, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_0 + 60, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(6, 8, 11, 0),
	gsSPEndDisplayList(),
};

Vtx n64_n64_N_mesh_mesh_mesh_vtx_1[91] = {
	{{{26, 40, 26},0, {496, 624},{0xD6, 0x16, 0x8A, 0xFE}}},
	{{{26, 57, 26},0, {624, 624},{0x83, 0xE9, 0xF7, 0xFE}}},
	{{{51, 57, 26},0, {624, 496},{0x7D, 0xE9, 0xF7, 0xFE}}},
	{{{51, 40, 26},0, {496, 496},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, -2, 26},0, {368, 624},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{26, -2, 26},0, {368, 752},{0xB0, 0xB5, 0xBF, 0xFE}}},
	{{{51, 40, 51},0, {496, 112},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 57, 51},0, {624, 112},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{26, 57, 51},0, {624, -16},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{26, 40, 51},0, {496, -16},{0xD6, 0x16, 0x76, 0xFE}}},
	{{{51, -2, 51},0, {368, 112},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{26, -2, 51},0, {368, -16},{0xB0, 0xB5, 0x41, 0xFE}}},
	{{{51, 57, 51},0, {624, 240},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 98, 51},0, {624, 240},{0x49, 0x49, 0x49, 0xFE}}},
	{{{26, 98, 51},0, {624, -16},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{26, -2, 51},0, {368, 880},{0xB0, 0xB5, 0x41, 0xFE}}},
	{{{26, 40, 51},0, {496, 880},{0xD6, 0x16, 0x76, 0xFE}}},
	{{{26, 40, 26},0, {496, 752},{0xD6, 0x16, 0x8A, 0xFE}}},
	{{{26, -2, 26},0, {368, 752},{0xB0, 0xB5, 0xBF, 0xFE}}},
	{{{-51, 40, 26},0, {496, 880},{0x8A, 0x16, 0xD6, 0xFE}}},
	{{{-51, 57, 26},0, {624, 880},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-26, 57, 26},0, {624, 752},{0x9, 0xE9, 0x83, 0xFE}}},
	{{{-26, 40, 26},0, {496, 752},{0x76, 0x16, 0xD6, 0xFE}}},
	{{{-26, -2, 26},0, {368, 880},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{-51, -2, 26},0, {368, 1008},{0xBF, 0xB5, 0xB0, 0xFE}}},
	{{{-26, 40, 51},0, {496, 368},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{-26, 57, 51},0, {624, 368},{0x9, 0xE9, 0x7D, 0xFE}}},
	{{{-51, 57, 51},0, {624, 240},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, 40, 51},0, {496, 240},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, -2, 51},0, {368, 368},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-26, -2, 51},0, {368, 496},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{-26, 57, 26},0, {624, 752},{0x9, 0xE9, 0x83, 0xFE}}},
	{{{-51, 57, 26},0, {624, 1008},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 98, 26},0, {624, 1008},{0xB7, 0x49, 0xB7, 0xFE}}},
	{{{-26, 98, 26},0, {624, 752},{0x29, 0x5B, 0xB1, 0xFE}}},
	{{{26, 40, 26},0, {624, 752},{0xD6, 0x16, 0x8A, 0xFE}}},
	{{{26, -2, 26},0, {624, 752},{0xB0, 0xB5, 0xBF, 0xFE}}},
	{{{51, 40, -26},0, {496, 880},{0x76, 0x16, 0x2A, 0xFE}}},
	{{{51, 57, -26},0, {624, 880},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{26, 57, -26},0, {624, 752},{0xF7, 0xE9, 0x7D, 0xFE}}},
	{{{26, 40, -26},0, {496, 752},{0x8A, 0x16, 0x2A, 0xFE}}},
	{{{51, -2, -26},0, {368, 880},{0x41, 0xB5, 0x50, 0xFE}}},
	{{{26, -2, -26},0, {368, 752},{0xBF, 0xB5, 0x50, 0xFE}}},
	{{{26, 40, -51},0, {496, 368},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{26, 57, -51},0, {624, 368},{0xF7, 0xE9, 0x83, 0xFE}}},
	{{{51, 57, -51},0, {624, 240},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, 40, -51},0, {496, 240},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{26, -2, -51},0, {368, 368},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{26, 40, -51},0, {496, 368},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{51, 40, -51},0, {496, 240},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{51, -2, -51},0, {368, 240},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{26, 57, -26},0, {624, 752},{0xF7, 0xE9, 0x7D, 0xFE}}},
	{{{51, 57, -26},0, {624, 1008},{0x5A, 0x0, 0x5A, 0xFE}}},
	{{{51, 98, -26},0, {624, 1008},{0x49, 0x49, 0x49, 0xFE}}},
	{{{26, 98, -26},0, {624, 752},{0xD7, 0x5B, 0x4F, 0xFE}}},
	{{{-26, 40, -26},0, {624, 752},{0x2A, 0x16, 0x76, 0xFE}}},
	{{{-26, -2, -26},0, {624, 752},{0x50, 0xB5, 0x41, 0xFE}}},
	{{{-26, 40, -26},0, {496, 624},{0x2A, 0x16, 0x76, 0xFE}}},
	{{{-26, 57, -26},0, {624, 624},{0x7D, 0xE9, 0x9, 0xFE}}},
	{{{-51, 57, -26},0, {624, 496},{0x83, 0xE9, 0x9, 0xFE}}},
	{{{-51, 40, -26},0, {496, 496},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-26, -2, -26},0, {368, 624},{0x50, 0xB5, 0x41, 0xFE}}},
	{{{-51, -2, -26},0, {368, 496},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-51, 40, -51},0, {496, 112},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 57, -51},0, {624, 112},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-26, 57, -51},0, {624, -16},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{-26, 40, -51},0, {496, -16},{0x2A, 0x16, 0x8A, 0xFE}}},
	{{{-26, -2, -51},0, {368, 112},{0x50, 0xB5, 0xBF, 0xFE}}},
	{{{-51, -2, -51},0, {368, 240},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{-51, 57, -51},0, {624, 240},{0xA6, 0x0, 0xA6, 0xFE}}},
	{{{-51, 98, -51},0, {624, 240},{0xB7, 0x49, 0xB7, 0xFE}}},
	{{{-26, 98, -51},0, {624, -16},{0x49, 0x49, 0xB7, 0xFE}}},
	{{{-26, -2, -51},0, {368, 880},{0x50, 0xB5, 0xBF, 0xFE}}},
	{{{-26, 40, -51},0, {496, 880},{0x2A, 0x16, 0x8A, 0xFE}}},
	{{{-26, 40, -26},0, {496, 752},{0x2A, 0x16, 0x76, 0xFE}}},
	{{{-26, -2, -26},0, {368, 752},{0x50, 0xB5, 0x41, 0xFE}}},
	{{{-51, 57, 51},0, {624, 240},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-26, 57, 51},0, {624, 496},{0x9, 0xE9, 0x7D, 0xFE}}},
	{{{-26, 98, 51},0, {624, 496},{0x29, 0x5B, 0x4F, 0xFE}}},
	{{{-26, 98, 51},0, {624, 496},{0x29, 0x5B, 0x4F, 0xFE}}},
	{{{-26, 57, 51},0, {624, 496},{0x9, 0xE9, 0x7D, 0xFE}}},
	{{{26, -2, 51},0, {624, 496},{0xB0, 0xB5, 0x41, 0xFE}}},
	{{{26, 40, 51},0, {624, 496},{0xD6, 0x16, 0x76, 0xFE}}},
	{{{-51, 57, 51},0, {624, 240},{0xA6, 0x0, 0x5A, 0xFE}}},
	{{{-51, 98, 51},0, {624, 240},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{51, 57, -51},0, {624, 240},{0x5A, 0x0, 0xA6, 0xFE}}},
	{{{26, 57, -51},0, {624, 496},{0xF7, 0xE9, 0x83, 0xFE}}},
	{{{26, 98, -51},0, {624, 496},{0xD7, 0x5B, 0xB1, 0xFE}}},
	{{{-26, -2, -51},0, {624, 496},{0x50, 0xB5, 0xBF, 0xFE}}},
	{{{-26, 40, -51},0, {624, 496},{0x2A, 0x16, 0x8A, 0xFE}}},
	{{{51, 98, -51},0, {624, 240},{0x49, 0x49, 0xB7, 0xFE}}},
};

Gfx n64_n64_N_mesh_mesh_mesh_tri_1[] = {
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 6, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(8, 12, 13, 0),
	gsSP1Triangle(8, 13, 14, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(9, 4, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 10, 13, 0),
	gsSP1Triangle(15, 10, 14, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 31, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 6, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 47, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 10, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 63, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(2, 6, 7, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_1 + 79, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(6, 8, 11, 0),
	gsSPEndDisplayList(),
};

Vtx n64_n64_N_mesh_mesh_mesh_vtx_2[34] = {
	{{{-26, -2, 26},0, {112, 368},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{-51, -2, 51},0, {240, 240},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-51, -2, 26},0, {112, 240},{0xBF, 0xB5, 0xB0, 0xFE}}},
	{{{-26, -2, 26},0, {112, 496},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{-26, -2, 51},0, {240, 496},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{-51, -2, 51},0, {240, 368},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{51, 98, 26},0, {624, 496},{0x4F, 0x5B, 0xD7, 0xFE}}},
	{{{26, 98, 51},0, {880, 240},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{51, 98, 51},0, {624, 240},{0x49, 0x49, 0x49, 0xFE}}},
	{{{26, 98, 26},0, {880, 496},{0xB1, 0x5B, 0xD7, 0xFE}}},
	{{{26, -2, 26},0, {112, 496},{0xB0, 0xB5, 0xBF, 0xFE}}},
	{{{51, -2, 26},0, {240, 496},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{51, -2, 51},0, {240, 368},{0x49, 0xB7, 0x49, 0xFE}}},
	{{{26, -2, 51},0, {112, 368},{0xB0, 0xB5, 0x41, 0xFE}}},
	{{{-26, 98, 51},0, {624, 496},{0x29, 0x5B, 0x4F, 0xFE}}},
	{{{-51, 98, 26},0, {880, 240},{0xB7, 0x49, 0xB7, 0xFE}}},
	{{{-51, 98, 51},0, {624, 240},{0xB7, 0x49, 0x49, 0xFE}}},
	{{{-26, 98, 26},0, {880, 496},{0x29, 0x5B, 0xB1, 0xFE}}},
	{{{51, -2, -26},0, {240, 368},{0x41, 0xB5, 0x50, 0xFE}}},
	{{{26, -2, -51},0, {368, 368},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{51, -2, -51},0, {368, 240},{0x49, 0xB7, 0xB7, 0xFE}}},
	{{{26, -2, -26},0, {240, 496},{0xBF, 0xB5, 0x50, 0xFE}}},
	{{{26, 98, -51},0, {624, 496},{0xD7, 0x5B, 0xB1, 0xFE}}},
	{{{51, 98, -26},0, {880, 240},{0x49, 0x49, 0x49, 0xFE}}},
	{{{51, 98, -51},0, {624, 240},{0x49, 0x49, 0xB7, 0xFE}}},
	{{{26, 98, -26},0, {880, 496},{0xD7, 0x5B, 0x4F, 0xFE}}},
	{{{-26, -2, -51},0, {240, 368},{0x50, 0xB5, 0xBF, 0xFE}}},
	{{{-51, -2, -26},0, {368, 368},{0xB7, 0xB7, 0x49, 0xFE}}},
	{{{-51, -2, -51},0, {368, 240},{0xB7, 0xB7, 0xB7, 0xFE}}},
	{{{-26, -2, -26},0, {240, 496},{0x50, 0xB5, 0x41, 0xFE}}},
	{{{-51, 98, -26},0, {624, 496},{0xB1, 0x5B, 0x29, 0xFE}}},
	{{{-26, 98, -51},0, {880, 240},{0x49, 0x49, 0xB7, 0xFE}}},
	{{{-51, 98, -51},0, {624, 240},{0xB7, 0x49, 0xB7, 0xFE}}},
	{{{-26, 98, -26},0, {880, 496},{0x4F, 0x5B, 0x29, 0xFE}}},
};

Gfx n64_n64_N_mesh_mesh_mesh_tri_2[] = {
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_2 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 5, 4, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 13, 12, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_2 + 30, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx n64_n64_N_mesh_mesh_mesh_vtx_3[32] = {
	{{{26, 98, 26},0, {880, 496},{0xB1, 0x5B, 0xD7, 0xFE}}},
	{{{51, 98, 26},0, {624, 496},{0x4F, 0x5B, 0xD7, 0xFE}}},
	{{{51, 40, -26},0, {624, 496},{0x76, 0x16, 0x2A, 0xFE}}},
	{{{26, 40, -26},0, {880, 496},{0x8A, 0x16, 0x2A, 0xFE}}},
	{{{51, 57, 26},0, {624, 496},{0x7D, 0xE9, 0xF7, 0xFE}}},
	{{{26, 57, 26},0, {624, 752},{0x83, 0xE9, 0xF7, 0xFE}}},
	{{{26, -2, -26},0, {624, 752},{0xBF, 0xB5, 0x50, 0xFE}}},
	{{{51, -2, -26},0, {624, 496},{0x41, 0xB5, 0x50, 0xFE}}},
	{{{-26, 98, 26},0, {880, 496},{0x29, 0x5B, 0xB1, 0xFE}}},
	{{{-26, 98, 51},0, {624, 496},{0x29, 0x5B, 0x4F, 0xFE}}},
	{{{26, 40, 51},0, {624, 496},{0xD6, 0x16, 0x76, 0xFE}}},
	{{{26, 40, 26},0, {880, 496},{0xD6, 0x16, 0x8A, 0xFE}}},
	{{{-26, 57, 51},0, {624, 496},{0x9, 0xE9, 0x7D, 0xFE}}},
	{{{-26, 57, 26},0, {624, 752},{0x9, 0xE9, 0x83, 0xFE}}},
	{{{26, -2, 26},0, {624, 752},{0xB0, 0xB5, 0xBF, 0xFE}}},
	{{{26, -2, 51},0, {624, 496},{0xB0, 0xB5, 0x41, 0xFE}}},
	{{{26, 98, -26},0, {880, 496},{0xD7, 0x5B, 0x4F, 0xFE}}},
	{{{26, 98, -51},0, {624, 496},{0xD7, 0x5B, 0xB1, 0xFE}}},
	{{{-26, 40, -51},0, {624, 496},{0x2A, 0x16, 0x8A, 0xFE}}},
	{{{-26, 40, -26},0, {880, 496},{0x2A, 0x16, 0x76, 0xFE}}},
	{{{26, 57, -51},0, {624, 496},{0xF7, 0xE9, 0x83, 0xFE}}},
	{{{26, 57, -26},0, {624, 752},{0xF7, 0xE9, 0x7D, 0xFE}}},
	{{{-26, -2, -26},0, {624, 752},{0x50, 0xB5, 0x41, 0xFE}}},
	{{{-26, -2, -51},0, {624, 496},{0x50, 0xB5, 0xBF, 0xFE}}},
	{{{-26, 98, -26},0, {880, 496},{0x4F, 0x5B, 0x29, 0xFE}}},
	{{{-51, 98, -26},0, {624, 496},{0xB1, 0x5B, 0x29, 0xFE}}},
	{{{-51, 40, 26},0, {624, 496},{0x8A, 0x16, 0xD6, 0xFE}}},
	{{{-26, 40, 26},0, {880, 496},{0x76, 0x16, 0xD6, 0xFE}}},
	{{{-51, 57, -26},0, {624, 496},{0x83, 0xE9, 0x9, 0xFE}}},
	{{{-26, 57, -26},0, {624, 752},{0x7D, 0xE9, 0x9, 0xFE}}},
	{{{-26, -2, 26},0, {624, 752},{0x41, 0xB5, 0xB0, 0xFE}}},
	{{{-51, -2, 26},0, {624, 496},{0xBF, 0xB5, 0xB0, 0xFE}}},
};

Gfx n64_n64_N_mesh_mesh_mesh_tri_3[] = {
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_3 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(n64_n64_N_mesh_mesh_mesh_vtx_3 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx mat_n64_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, n64_blue_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 52),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, n64_blue_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_f3d_material_001[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_n64_f3d_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, n64_green_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 41),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, n64_green_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_f3d_material_002[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_n64_f3d_material_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(n64_f3d_material_003_lights),
	gsSPEndDisplayList(),
};

Gfx mat_n64_f3d_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, n64_red_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 74),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, n64_red_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_f3d_material_004[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx n64_n64_N_mesh_mesh_mesh[] = {
	gsSPDisplayList(mat_n64_f3d_material_001),
	gsSPDisplayList(n64_n64_N_mesh_mesh_mesh_tri_0),
	gsSPDisplayList(mat_revert_n64_f3d_material_001),
	gsSPDisplayList(mat_n64_f3d_material_002),
	gsSPDisplayList(n64_n64_N_mesh_mesh_mesh_tri_1),
	gsSPDisplayList(mat_revert_n64_f3d_material_002),
	gsSPDisplayList(mat_n64_f3d_material_003),
	gsSPDisplayList(n64_n64_N_mesh_mesh_mesh_tri_2),
	gsSPDisplayList(mat_n64_f3d_material_004),
	gsSPDisplayList(n64_n64_N_mesh_mesh_mesh_tri_3),
	gsSPDisplayList(mat_revert_n64_f3d_material_004),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

