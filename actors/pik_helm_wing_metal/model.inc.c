Lights1 pik_helm_wing_metal_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 pik_helm_wing_metal_Metal_Wing_Tip_lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 pik_helm_wing_metal_Metal_Wing_Base_lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Gfx pik_helm_wing_metal_bullymetal_ci8_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_bullymetal_ci8[] = {
	#include "actors/pik_helm_wing_metal/bullymetal.ci8.inc.c"
};

Gfx pik_helm_wing_metal_bullymetal_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_bullymetal_pal_rgba16[] = {
	#include "actors/pik_helm_wing_metal/bullymetal.rgba16.pal"
};

Gfx pik_helm_wing_metal_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/pik_helm_wing_metal/Metal_Shade.rgba16.inc.c"
};

Gfx pik_helm_wing_metal_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_Metal_Light_rgba16_rgba16[] = {
	#include "actors/pik_helm_wing_metal/Metal_Light.rgba16.inc.c"
};

Gfx pik_helm_wing_metal_custom_mario_metal_wing_tip_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_custom_mario_metal_wing_tip_shade_rgba16[] = {
	#include "actors/pik_helm_wing_metal/custom_mario_metal_wing_tip_shade.rgba16.inc.c"
};

Gfx pik_helm_wing_metal_custom_mario_metal_wing_tip_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_custom_mario_metal_wing_tip_light_rgba16[] = {
	#include "actors/pik_helm_wing_metal/custom_mario_metal_wing_tip_light.rgba16.inc.c"
};

Gfx pik_helm_wing_metal_custom_mario_metal_wing_shade_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_custom_mario_metal_wing_shade_rgba16[] = {
	#include "actors/pik_helm_wing_metal/custom_mario_metal_wing_shade.rgba16.inc.c"
};

Gfx pik_helm_wing_metal_custom_mario_metal_wing_light_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pik_helm_wing_metal_custom_mario_metal_wing_light_rgba16[] = {
	#include "actors/pik_helm_wing_metal/custom_mario_metal_wing_light.rgba16.inc.c"
};

Vtx pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0[185] = {
	{{{-66, 27, 47}, 0, {-529, 495}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{0, 27, 74}, 0, {-529, 495}, {0x00, 0x35, 0x73, 0xFF}}},
	{{{66, 27, 47}, 0, {-529, 495}, {0x55, 0x36, 0x4E, 0xFF}}},
	{{{93, 27, -20}, 0, {-529, 495}, {0x72, 0x38, 0xFD, 0xFF}}},
	{{{-94, 27, -20}, 0, {-529, 495}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{-66, 27, -87}, 0, {-529, 495}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{66, 27, -87}, 0, {-529, 495}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{0, 27, -115}, 0, {-529, 495}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{33, 274, 28}, 0, {143, -443}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{46, 274, -3}, 0, {207, -443}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{0, 289, -3}, 0, {175, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{93, 263, -3}, 0, {239, -358}, {0x3B, 0x70, 0x00, 0xFF}}},
	{{{65, 263, 68}, 0, {111, -358}, {0x2A, 0x71, 0x27, 0xFF}}},
	{{{160, 211, -3}, 0, {239, -187}, {0x69, 0x47, 0x00, 0xFF}}},
	{{{113, 211, 121}, 0, {111, -187}, {0x4C, 0x48, 0x47, 0xFF}}},
	{{{0, 263, 98}, 0, {-17, -358}, {0x00, 0x72, 0x38, 0xFF}}},
	{{{0, 274, 41}, 0, {15, -443}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{33, 274, 28}, 0, {79, -443}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{0, 289, -3}, 0, {47, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 211, 172}, 0, {-17, -187}, {0x00, 0x4A, 0x67, 0xFF}}},
	{{{-114, 211, 121}, 0, {-145, -187}, {0xB4, 0x48, 0x47, 0xFF}}},
	{{{-66, 263, 68}, 0, {-145, -358}, {0xD6, 0x71, 0x27, 0xFF}}},
	{{{0, 274, 41}, 0, {-49, -443}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{-33, 274, 28}, 0, {-113, -443}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{0, 289, -3}, 0, {-81, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-161, 211, -3}, 0, {-273, -187}, {0x97, 0x47, 0x00, 0xFF}}},
	{{{-93, 263, -3}, 0, {-273, -358}, {0xC5, 0x70, 0x00, 0xFF}}},
	{{{-33, 274, 28}, 0, {-177, -443}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-46, 274, -3}, 0, {-241, -443}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{0, 289, -3}, 0, {-209, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-66, 263, -75}, 0, {-401, -358}, {0xD6, 0x71, 0xD9, 0xFF}}},
	{{{-33, 274, -34}, 0, {-369, -443}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-93, 263, -3}, 0, {-273, -358}, {0xC5, 0x70, 0x00, 0xFF}}},
	{{{-46, 274, -3}, 0, {-305, -443}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-33, 274, -34}, 0, {-369, -443}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{0, 289, -3}, 0, {-337, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-161, 211, -3}, 0, {-273, -187}, {0x97, 0x47, 0x00, 0xFF}}},
	{{{-66, 263, -75}, 0, {-401, -358}, {0xD6, 0x71, 0xD9, 0xFF}}},
	{{{-114, 211, -127}, 0, {-401, -187}, {0xB4, 0x48, 0xB9, 0xFF}}},
	{{{0, 263, -104}, 0, {-529, -358}, {0x00, 0x72, 0xC8, 0xFF}}},
	{{{0, 274, -47}, 0, {-497, -443}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{-33, 274, -34}, 0, {-433, -443}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{0, 289, -3}, 0, {-465, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{0, 211, -178}, 0, {-529, -187}, {0x00, 0x4A, 0x99, 0xFF}}},
	{{{-131, 140, -146}, 0, {-401, -17}, {0xA4, 0x00, 0xA9, 0xFF}}},
	{{{0, 140, -205}, 0, {-529, -17}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{0, 70, -178}, 0, {-529, 154}, {0x00, 0xB6, 0x99, 0xFF}}},
	{{{-114, 70, -127}, 0, {-401, 154}, {0xB4, 0xB7, 0xB9, 0xFF}}},
	{{{-66, 27, -87}, 0, {-401, 325}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{0, 27, -115}, 0, {-529, 325}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{-83, 8, -104}, 0, {-401, 325}, {0xA9, 0xDD, 0xAA, 0xFF}}},
	{{{0, 8, -139}, 0, {-529, 325}, {0x00, 0xDE, 0x86, 0xFF}}},
	{{{-118, 8, -20}, 0, {-273, 325}, {0x86, 0xDD, 0x00, 0xFF}}},
	{{{117, 8, -20}, 0, {239, 325}, {0x7A, 0xDD, 0x00, 0xFF}}},
	{{{83, 8, -104}, 0, {367, 325}, {0x57, 0xDD, 0xAA, 0xFF}}},
	{{{0, 8, -139}, 0, {495, 325}, {0x00, 0xDE, 0x86, 0xFF}}},
	{{{0, 27, -115}, 0, {495, 325}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{66, 27, -87}, 0, {367, 325}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{0, 70, -178}, 0, {495, 154}, {0x00, 0xB6, 0x99, 0xFF}}},
	{{{113, 70, -127}, 0, {367, 154}, {0x4C, 0xB7, 0xB9, 0xFF}}},
	{{{131, 140, -146}, 0, {367, -17}, {0x5C, 0x00, 0xA9, 0xFF}}},
	{{{0, 140, -205}, 0, {495, -17}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{0, 211, -178}, 0, {495, -187}, {0x00, 0x4A, 0x99, 0xFF}}},
	{{{113, 211, -127}, 0, {367, -187}, {0x4C, 0x48, 0xB9, 0xFF}}},
	{{{0, 263, -104}, 0, {495, -358}, {0x00, 0x72, 0xC8, 0xFF}}},
	{{{113, 211, -127}, 0, {367, -187}, {0x4C, 0x48, 0xB9, 0xFF}}},
	{{{0, 211, -178}, 0, {495, -187}, {0x00, 0x4A, 0x99, 0xFF}}},
	{{{65, 263, -75}, 0, {367, -358}, {0x2A, 0x71, 0xD9, 0xFF}}},
	{{{0, 274, -47}, 0, {463, -443}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{33, 274, -34}, 0, {399, -443}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{0, 289, -3}, 0, {431, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{160, 211, -3}, 0, {239, -187}, {0x69, 0x47, 0x00, 0xFF}}},
	{{{93, 263, -3}, 0, {239, -358}, {0x3B, 0x70, 0x00, 0xFF}}},
	{{{33, 274, -34}, 0, {335, -443}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{46, 274, -3}, 0, {271, -443}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{0, 289, -3}, 0, {303, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{185, 140, -3}, 0, {239, -17}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{113, 211, 121}, 0, {111, -187}, {0x4C, 0x48, 0x47, 0xFF}}},
	{{{131, 140, 140}, 0, {111, -17}, {0x5C, 0x00, 0x57, 0xFF}}},
	{{{0, 211, 172}, 0, {-17, -187}, {0x00, 0x4A, 0x67, 0xFF}}},
	{{{0, 140, 199}, 0, {-17, -17}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-131, 140, 140}, 0, {-145, -17}, {0xA4, 0x00, 0x57, 0xFF}}},
	{{{-114, 211, 121}, 0, {-145, -187}, {0xB4, 0x48, 0x47, 0xFF}}},
	{{{-186, 140, -3}, 0, {-273, -17}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-161, 211, -3}, 0, {-273, -187}, {0x97, 0x47, 0x00, 0xFF}}},
	{{{-114, 211, -127}, 0, {-401, -187}, {0xB4, 0x48, 0xB9, 0xFF}}},
	{{{-131, 140, -146}, 0, {-401, -17}, {0xA4, 0x00, 0xA9, 0xFF}}},
	{{{-114, 70, -127}, 0, {-401, 154}, {0xB4, 0xB7, 0xB9, 0xFF}}},
	{{{-161, 70, -3}, 0, {-273, 154}, {0x99, 0xB5, 0x01, 0xFF}}},
	{{{-94, 27, -20}, 0, {-273, 325}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{-66, 27, -87}, 0, {-401, 325}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{-118, 8, -20}, 0, {-273, 325}, {0x86, 0xDD, 0x00, 0xFF}}},
	{{{-66, 27, 47}, 0, {-145, 325}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{-83, 8, 64}, 0, {-145, 325}, {0xA9, 0xDD, 0x56, 0xFF}}},
	{{{117, 8, -20}, 0, {239, 325}, {0x7A, 0xDD, 0x00, 0xFF}}},
	{{{83, 8, 64}, 0, {111, 325}, {0x57, 0xDD, 0x56, 0xFF}}},
	{{{66, 27, 47}, 0, {111, 325}, {0x55, 0x36, 0x4E, 0xFF}}},
	{{{83, 8, 64}, 0, {111, 325}, {0x57, 0xDD, 0x56, 0xFF}}},
	{{{117, 8, -20}, 0, {239, 325}, {0x7A, 0xDD, 0x00, 0xFF}}},
	{{{93, 27, -20}, 0, {239, 325}, {0x72, 0x38, 0xFD, 0xFF}}},
	{{{66, 27, -87}, 0, {367, 325}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{83, 8, -104}, 0, {367, 325}, {0x57, 0xDD, 0xAA, 0xFF}}},
	{{{113, 70, -127}, 0, {367, 154}, {0x4C, 0xB7, 0xB9, 0xFF}}},
	{{{160, 70, -3}, 0, {239, 154}, {0x67, 0xB5, 0x01, 0xFF}}},
	{{{185, 140, -3}, 0, {239, -17}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{131, 140, -146}, 0, {367, -17}, {0x5C, 0x00, 0xA9, 0xFF}}},
	{{{113, 211, -127}, 0, {367, -187}, {0x4C, 0x48, 0xB9, 0xFF}}},
	{{{113, 70, 121}, 0, {111, 154}, {0x48, 0xB0, 0x44, 0xFF}}},
	{{{131, 140, 140}, 0, {111, -17}, {0x5C, 0x00, 0x57, 0xFF}}},
	{{{0, 70, 172}, 0, {-17, 154}, {0x00, 0xAE, 0x61, 0xFF}}},
	{{{0, 140, 199}, 0, {-17, -17}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-131, 140, 140}, 0, {-145, -17}, {0xA4, 0x00, 0x57, 0xFF}}},
	{{{-114, 70, 121}, 0, {-145, 154}, {0xB8, 0xB0, 0x44, 0xFF}}},
	{{{-186, 140, -3}, 0, {-273, -17}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-161, 70, -3}, 0, {-273, 154}, {0x99, 0xB5, 0x01, 0xFF}}},
	{{{-66, 27, 47}, 0, {-145, 325}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{-94, 27, -20}, 0, {-273, 325}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{0, 27, 74}, 0, {-17, 325}, {0x00, 0x35, 0x73, 0xFF}}},
	{{{0, 8, 98}, 0, {-17, 325}, {0x00, 0xDE, 0x7A, 0xFF}}},
	{{{-83, 8, 64}, 0, {-145, 325}, {0xA9, 0xDD, 0x56, 0xFF}}},
	{{{46, 274, -3}, 0, {-529, 495}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{33, 274, 28}, 0, {-529, 495}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{33, 274, -34}, 0, {-529, 495}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{0, 274, -47}, 0, {-529, 495}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{0, 274, 41}, 0, {-529, 495}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{-33, 274, 28}, 0, {-529, 495}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-33, 274, -34}, 0, {-529, 495}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-46, 274, -3}, 0, {-529, 495}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{0, 283, -7}, 0, {-273, -17}, {0x00, 0xA4, 0xA9, 0xFF}}},
	{{{5, 336, -25}, 0, {-529, -529}, {0x7E, 0x08, 0x09, 0xFF}}},
	{{{5, 283, -2}, 0, {-529, -17}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{0, 334, -29}, 0, {-273, -529}, {0x00, 0xB3, 0x9B, 0xFF}}},
	{{{-5, 336, -25}, 0, {-17, -529}, {0x82, 0x08, 0x09, 0xFF}}},
	{{{-5, 283, -2}, 0, {-17, -17}, {0x97, 0xBB, 0x13, 0xFF}}},
	{{{0, 338, -21}, 0, {239, -529}, {0x00, 0x49, 0x68, 0xFF}}},
	{{{0, 283, 3}, 0, {239, -17}, {0x00, 0xCA, 0x73, 0xFF}}},
	{{{5, 283, -2}, 0, {495, -17}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{5, 336, -25}, 0, {495, -529}, {0x7E, 0x08, 0x09, 0xFF}}},
	{{{0, 365, -50}, 0, {239, -529}, {0x00, 0x73, 0x35, 0xFF}}},
	{{{5, 362, -53}, 0, {495, -529}, {0x7D, 0x14, 0x02, 0xFF}}},
	{{{0, 370, -122}, 0, {239, -529}, {0x00, 0x7B, 0xE0, 0xFF}}},
	{{{5, 365, -121}, 0, {495, -529}, {0x7E, 0x11, 0xFA, 0xFF}}},
	{{{0, 340, -168}, 0, {239, -529}, {0x00, 0x32, 0x8B, 0xFF}}},
	{{{5, 336, -166}, 0, {495, -529}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{-5, 365, -121}, 0, {-17, -529}, {0x82, 0x11, 0xFA, 0xFF}}},
	{{{-5, 362, -53}, 0, {-17, -529}, {0x83, 0x14, 0x02, 0xFF}}},
	{{{0, 358, -56}, 0, {-273, -529}, {0x00, 0x88, 0xD7, 0xFF}}},
	{{{0, 361, -120}, 0, {-273, -529}, {0x00, 0x86, 0x24, 0xFF}}},
	{{{-5, 336, -166}, 0, {-17, -529}, {0x98, 0xD9, 0xC2, 0xFF}}},
	{{{0, 332, -163}, 0, {-273, -529}, {0x00, 0x81, 0xF8, 0xFF}}},
	{{{5, 336, -166}, 0, {-529, -529}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{5, 365, -121}, 0, {-529, -529}, {0x7E, 0x11, 0xFA, 0xFF}}},
	{{{5, 362, -53}, 0, {-529, -529}, {0x7D, 0x14, 0x02, 0xFF}}},
	{{{0, 283, 3}, 0, {485, 239}, {0x00, 0xCA, 0x73, 0xFF}}},
	{{{0, 283, -7}, 0, {-6, 239}, {0x00, 0xA4, 0xA9, 0xFF}}},
	{{{5, 283, -2}, 0, {239, -6}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{-5, 283, -2}, 0, {239, 485}, {0x97, 0xBB, 0x13, 0xFF}}},
	{{{5, 336, -166}, 0, {-273, -6}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{-5, 336, -166}, 0, {-273, 485}, {0x98, 0xD9, 0xC2, 0xFF}}},
	{{{0, 340, -168}, 0, {-27, 239}, {0x00, 0x32, 0x8B, 0xFF}}},
	{{{5, 336, -166}, 0, {-273, -6}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{0, 332, -163}, 0, {-518, 239}, {0x00, 0x81, 0xF8, 0xFF}}},
	{{{-5, 336, -166}, 0, {-273, 485}, {0x98, 0xD9, 0xC2, 0xFF}}},
	{{{0, 311, -174}, 0, {402, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 321, -180}, 0, {495, 334}, {0x94, 0xC7, 0xDD, 0xFF}}},
	{{{0, 321, -191}, 0, {309, 334}, {0x00, 0xC7, 0x8E, 0xFF}}},
	{{{-10, 338, -188}, 0, {402, 173}, {0xBD, 0x39, 0xA4, 0xFF}}},
	{{{10, 338, -188}, 0, {216, 173}, {0x43, 0x39, 0xA4, 0xFF}}},
	{{{0, 348, -174}, 0, {309, 12}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{16, 321, -180}, 0, {123, 334}, {0x6C, 0xC7, 0xDD, 0xFF}}},
	{{{0, 311, -174}, 0, {216, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{16, 338, -169}, 0, {30, 173}, {0x6C, 0x39, 0x23, 0xFF}}},
	{{{0, 348, -174}, 0, {123, 12}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{10, 321, -161}, 0, {-63, 334}, {0x43, 0xC7, 0x5C, 0xFF}}},
	{{{0, 311, -174}, 0, {30, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{0, 338, -158}, 0, {-156, 173}, {0x00, 0x39, 0x72, 0xFF}}},
	{{{0, 348, -174}, 0, {-63, 12}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-10, 321, -161}, 0, {-249, 334}, {0xBD, 0xC7, 0x5C, 0xFF}}},
	{{{0, 311, -174}, 0, {-156, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 338, -169}, 0, {-342, 173}, {0x94, 0x39, 0x23, 0xFF}}},
	{{{0, 348, -174}, 0, {-249, 12}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-16, 321, -180}, 0, {-435, 334}, {0x94, 0xC7, 0xDD, 0xFF}}},
	{{{0, 311, -174}, 0, {-342, 495}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-10, 338, -188}, 0, {-529, 173}, {0xBD, 0x39, 0xA4, 0xFF}}},
	{{{0, 348, -174}, 0, {-435, 12}, {0x00, 0x7F, 0x00, 0xFF}}},
};

Gfx pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
	gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
	gsSP2Triangles(11, 8, 12, 0, 13, 11, 12, 0),
	gsSP2Triangles(13, 12, 14, 0, 14, 12, 15, 0),
	gsSP2Triangles(12, 16, 15, 0, 12, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 14, 15, 19, 0),
	gsSP2Triangles(15, 20, 19, 0, 15, 21, 20, 0),
	gsSP2Triangles(22, 21, 15, 0, 22, 23, 21, 0),
	gsSP2Triangles(23, 22, 24, 0, 21, 25, 20, 0),
	gsSP2Triangles(21, 26, 25, 0, 27, 26, 21, 0),
	gsSP2Triangles(27, 28, 26, 0, 28, 27, 29, 0),
	gsSP2Triangles(25, 26, 30, 0, 26, 31, 30, 0),
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(5, 8, 7, 0, 5, 9, 8, 0),
	gsSP2Triangles(8, 9, 10, 0, 6, 7, 11, 0),
	gsSP2Triangles(12, 6, 11, 0, 12, 11, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(16, 18, 20, 0, 20, 18, 21, 0),
	gsSP2Triangles(21, 18, 22, 0, 18, 23, 22, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 25, 22, 0),
	gsSP2Triangles(26, 25, 24, 0, 26, 27, 25, 0),
	gsSP2Triangles(26, 28, 27, 0, 26, 29, 28, 0),
	gsSP2Triangles(30, 28, 29, 0, 30, 31, 28, 0),
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(5, 4, 6, 0, 3, 7, 1, 0),
	gsSP2Triangles(3, 8, 7, 0, 9, 8, 3, 0),
	gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
	gsSP2Triangles(1, 7, 12, 0, 12, 7, 13, 0),
	gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
	gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
	gsSP2Triangles(15, 18, 17, 0, 18, 19, 17, 0),
	gsSP2Triangles(18, 20, 19, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
	gsSP2Triangles(19, 23, 24, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 23, 26, 0, 26, 27, 25, 0),
	gsSP2Triangles(28, 25, 27, 0, 28, 27, 29, 0),
	gsSP2Triangles(29, 27, 30, 0, 30, 31, 29, 0),
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 96, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(6, 3, 4, 0, 6, 7, 3, 0),
	gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
	gsSP2Triangles(10, 8, 9, 0, 8, 11, 7, 0),
	gsSP2Triangles(8, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(12, 14, 13, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 16, 15, 17, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 21, 16, 19, 0),
	gsSP2Triangles(21, 13, 16, 0, 11, 13, 21, 0),
	gsSP2Triangles(11, 21, 0, 0, 21, 1, 0, 0),
	gsSP2Triangles(21, 22, 1, 0, 21, 23, 22, 0),
	gsSP2Triangles(21, 19, 23, 0, 1, 22, 23, 0),
	gsSP2Triangles(7, 11, 0, 0, 7, 0, 3, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 26, 25, 0),
	gsSP2Triangles(25, 28, 27, 0, 28, 29, 27, 0),
	gsSP2Triangles(27, 29, 30, 0, 29, 31, 30, 0),
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 128, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 9, 6, 0),
	gsSP2Triangles(9, 10, 6, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(16, 12, 14, 0, 17, 12, 16, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 16, 19, 0),
	gsSP2Triangles(19, 16, 20, 0, 16, 14, 20, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
	gsSP2Triangles(19, 22, 23, 0, 18, 19, 23, 0),
	gsSP2Triangles(18, 23, 24, 0, 3, 18, 24, 0),
	gsSP2Triangles(3, 24, 1, 0, 3, 17, 18, 0),
	gsSP2Triangles(3, 4, 17, 0, 4, 10, 17, 0),
	gsSP2Triangles(4, 6, 10, 0, 17, 10, 12, 0),
	gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_vtx_0 + 160, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 9, 5, 7, 0),
	gsSP2Triangles(10, 5, 9, 0, 9, 7, 11, 0),
	gsSP2Triangles(11, 7, 12, 0, 13, 9, 11, 0),
	gsSP2Triangles(14, 9, 13, 0, 13, 11, 15, 0),
	gsSP2Triangles(15, 11, 16, 0, 17, 13, 15, 0),
	gsSP2Triangles(17, 18, 13, 0, 17, 15, 19, 0),
	gsSP2Triangles(19, 15, 20, 0, 21, 17, 19, 0),
	gsSP2Triangles(22, 17, 21, 0, 21, 19, 23, 0),
	gsSP1Triangle(23, 19, 24, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_metal_Wings_mesh_layer_4_vtx_0[8] = {
	{{{-175, 207, -146}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-117, 230, -80}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-227, 379, -161}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-169, 403, -95}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{228, 379, -161}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{117, 230, -80}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{176, 207, -146}, 0, {1008, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{169, 403, -95}, 0, {-16, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
};

Gfx pik_helm_wing_metal_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(pik_helm_wing_metal_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_metal_Wings_mesh_layer_4_vtx_1[8] = {
	{{{-117, 230, -80}, 0, {1008, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-58, 253, -16}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-169, 403, -95}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-111, 426, -32}, 0, {-16, -16}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{169, 403, -95}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{59, 253, -16}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{117, 230, -80}, 0, {1008, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{111, 426, -32}, 0, {-16, -16}, {0x59, 0xED, 0x58, 0xFF}}},
};

Gfx pik_helm_wing_metal_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(pik_helm_wing_metal_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pik_helm_wing_metal_Metal_Env_Map_003[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, pik_helm_wing_metal_bullymetal_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 168),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, pik_helm_wing_metal_bullymetal_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_metal_Metal_Env_Map_003[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_metal_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPSetLights1(pik_helm_wing_metal_Metal__METAL__lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_metal_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_metal_Metal_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(pik_helm_wing_metal_Metal_Wing_Tip_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_custom_mario_metal_wing_tip_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_custom_mario_metal_wing_tip_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_metal_Metal_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_metal_Metal_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(pik_helm_wing_metal_Metal_Wing_Base_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, TEXEL1, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_custom_mario_metal_wing_shade_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_metal_custom_mario_metal_wing_light_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 512, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_metal_Metal_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_pik_helm_wing_metal_Metal_Env_Map_003),
	gsSPDisplayList(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_metal_Metal_Env_Map_003),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_pik_helm_wing_metal_Metal__METAL_),
	gsSPDisplayList(pik_helm_wing_metal_Winged_Metal_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_metal_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_metal_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_pik_helm_wing_metal_Metal_Wing_Tip),
	gsSPDisplayList(pik_helm_wing_metal_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_metal_Metal_Wing_Tip),
	gsSPDisplayList(mat_pik_helm_wing_metal_Metal_Wing_Base),
	gsSPDisplayList(pik_helm_wing_metal_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_metal_Metal_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_metal_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_pik_helm_wing_metal_Metal__METAL_),
	gsSPDisplayList(pik_helm_wing_metal_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(pik_helm_wing_metal_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_metal_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_metal_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

