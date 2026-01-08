Lights1 pik_helm_wing_Helmet_002_lights = gdSPDefLights1(
	0x43, 0x46, 0x51,
	0x8C, 0x93, 0xA7, 0x28, 0x28, 0x28);

Lights1 pik_helm_wing_Light_002_lights = gdSPDefLights1(
	0xFF, 0x0, 0x9,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 pik_helm_wing_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture pik_helm_wing_bullymetal_ci8[] = {
	#include "actors/pik_helm_wing/bullymetal.ci8.inc.c"
};

Texture pik_helm_wing_bullymetal_pal_rgba16[] = {
	#include "actors/pik_helm_wing/bullymetal.rgba16.pal"
};

Texture pik_helm_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/pik_helm_wing/Metal_Shade.rgba16.inc.c"
};

Texture pik_helm_wing_Metal_Light_rgba16_rgba16[] = {
	#include "actors/pik_helm_wing/Metal_Light.rgba16.inc.c"
};

Texture pik_helm_wing_wing_2_ia8[] = {
	#include "actors/pik_helm_wing/wing_2.ia8.inc.c"
};

Texture pik_helm_wing_wing1_ia8[] = {
	#include "actors/pik_helm_wing/wing1.ia8.inc.c"
};

Vtx pik_helm_wing_Wing_Cap_mesh_layer_5_vtx_0[61] = {
	{{{92, 263, -3}, 0, {752, 155}, {0x3B, 0x70, 0x00, 0xFF}}},
	{{{32, 274, 28}, 0, {656, 69}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{65, 263, 68}, 0, {624, 155}, {0x2A, 0x71, 0x27, 0xFF}}},
	{{{46, 274, -3}, 0, {720, 69}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{160, 211, -3}, 0, {752, 325}, {0x69, 0x47, 0x00, 0xFF}}},
	{{{65, 263, -75}, 0, {880, 155}, {0x2A, 0x71, 0xD9, 0xFF}}},
	{{{113, 211, -127}, 0, {880, 325}, {0x4C, 0x48, 0xB9, 0xFF}}},
	{{{185, 140, -3}, 0, {752, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{113, 211, 121}, 0, {624, 325}, {0x4C, 0x48, 0x47, 0xFF}}},
	{{{-1, 263, 98}, 0, {496, 155}, {0x00, 0x72, 0x38, 0xFF}}},
	{{{-1, 274, 41}, 0, {528, 69}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{32, 274, 28}, 0, {592, 69}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{-1, 211, 172}, 0, {496, 325}, {0x00, 0x4A, 0x67, 0xFF}}},
	{{{-114, 211, 121}, 0, {368, 325}, {0xB4, 0x48, 0x47, 0xFF}}},
	{{{-66, 263, 68}, 0, {368, 155}, {0xD6, 0x71, 0x27, 0xFF}}},
	{{{-1, 274, 41}, 0, {464, 69}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{-33, 274, 28}, 0, {400, 69}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-161, 211, -3}, 0, {240, 325}, {0x97, 0x47, 0x00, 0xFF}}},
	{{{-93, 263, -3}, 0, {240, 155}, {0xC5, 0x70, 0x00, 0xFF}}},
	{{{-33, 274, 28}, 0, {336, 69}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-47, 274, -3}, 0, {272, 69}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-66, 263, -75}, 0, {112, 155}, {0xD6, 0x71, 0xD9, 0xFF}}},
	{{{-33, 274, -34}, 0, {144, 69}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-47, 274, -3}, 0, {208, 69}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-114, 211, -127}, 0, {112, 325}, {0xB4, 0x48, 0xB9, 0xFF}}},
	{{{-1, 263, -104}, 0, {-16, 155}, {0x00, 0x72, 0xC8, 0xFF}}},
	{{{-1, 274, -47}, 0, {16, 69}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{-33, 274, -34}, 0, {80, 69}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-1, 211, -178}, 0, {-16, 325}, {0x00, 0x4A, 0x99, 0xFF}}},
	{{{-132, 140, -146}, 0, {112, 496}, {0xA4, 0x00, 0xA9, 0xFF}}},
	{{{-1, 140, -205}, 0, {-16, 496}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{-1, 70, -178}, 0, {-16, 667}, {0x00, 0xB6, 0x99, 0xFF}}},
	{{{-114, 70, -127}, 0, {112, 667}, {0xB4, 0xB7, 0xB9, 0xFF}}},
	{{{-67, 27, -87}, 0, {112, 837}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{-1, 27, -115}, 0, {-16, 837}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{-94, 27, -20}, 0, {240, 837}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{-161, 70, -3}, 0, {240, 667}, {0x99, 0xB5, 0x01, 0xFF}}},
	{{{-67, 27, 47}, 0, {368, 837}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{-114, 70, 121}, 0, {368, 667}, {0xB8, 0xB0, 0x44, 0xFF}}},
	{{{-1, 27, 74}, 0, {496, 837}, {0x00, 0x35, 0x73, 0xFF}}},
	{{{-1, 70, 172}, 0, {496, 667}, {0x00, 0xAE, 0x61, 0xFF}}},
	{{{113, 70, 121}, 0, {624, 667}, {0x48, 0xB0, 0x44, 0xFF}}},
	{{{66, 27, 47}, 0, {624, 837}, {0x55, 0x36, 0x4E, 0xFF}}},
	{{{160, 70, -3}, 0, {752, 667}, {0x67, 0xB5, 0x01, 0xFF}}},
	{{{93, 27, -20}, 0, {752, 837}, {0x72, 0x38, 0xFD, 0xFF}}},
	{{{113, 70, -127}, 0, {880, 667}, {0x4C, 0xB7, 0xB9, 0xFF}}},
	{{{66, 27, -87}, 0, {880, 837}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{-1, 70, -178}, 0, {1008, 667}, {0x00, 0xB6, 0x99, 0xFF}}},
	{{{-1, 27, -115}, 0, {1008, 837}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{130, 140, -146}, 0, {880, 496}, {0x5C, 0x00, 0xA9, 0xFF}}},
	{{{-1, 140, -205}, 0, {1008, 496}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{-1, 211, -178}, 0, {1008, 325}, {0x00, 0x4A, 0x99, 0xFF}}},
	{{{-1, 263, -104}, 0, {1008, 155}, {0x00, 0x72, 0xC8, 0xFF}}},
	{{{-1, 274, -47}, 0, {976, 69}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{32, 274, -34}, 0, {912, 69}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{130, 140, 140}, 0, {624, 496}, {0x5C, 0x00, 0x57, 0xFF}}},
	{{{-1, 140, 199}, 0, {496, 496}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-132, 140, 140}, 0, {368, 496}, {0xA4, 0x00, 0x57, 0xFF}}},
	{{{-186, 140, -3}, 0, {240, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{32, 274, -34}, 0, {848, 69}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{46, 274, -3}, 0, {784, 69}, {0x34, 0x74, 0x00, 0xFF}}},
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_5_tri_0[] = {
	gsSPVertex(pik_helm_wing_Wing_Cap_mesh_layer_5_vtx_0 + 0, 61, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 0, 2, 0, 5, 0, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 6, 4, 7, 0),
	gsSP2Triangles(7, 4, 8, 0, 4, 2, 8, 0),
	gsSP2Triangles(8, 2, 9, 0, 2, 10, 9, 0),
	gsSP2Triangles(2, 11, 10, 0, 8, 9, 12, 0),
	gsSP2Triangles(9, 13, 12, 0, 9, 14, 13, 0),
	gsSP2Triangles(15, 14, 9, 0, 15, 16, 14, 0),
	gsSP2Triangles(14, 17, 13, 0, 14, 18, 17, 0),
	gsSP2Triangles(19, 18, 14, 0, 19, 20, 18, 0),
	gsSP2Triangles(17, 18, 21, 0, 18, 22, 21, 0),
	gsSP2Triangles(18, 23, 22, 0, 17, 21, 24, 0),
	gsSP2Triangles(24, 21, 25, 0, 21, 26, 25, 0),
	gsSP2Triangles(21, 27, 26, 0, 24, 25, 28, 0),
	gsSP2Triangles(29, 24, 28, 0, 29, 28, 30, 0),
	gsSP2Triangles(29, 30, 31, 0, 29, 31, 32, 0),
	gsSP2Triangles(33, 32, 31, 0, 33, 31, 34, 0),
	gsSP2Triangles(35, 32, 33, 0, 35, 36, 32, 0),
	gsSP2Triangles(37, 36, 35, 0, 37, 38, 36, 0),
	gsSP2Triangles(39, 38, 37, 0, 39, 40, 38, 0),
	gsSP2Triangles(41, 40, 39, 0, 41, 39, 42, 0),
	gsSP2Triangles(43, 41, 42, 0, 43, 42, 44, 0),
	gsSP2Triangles(45, 43, 44, 0, 45, 44, 46, 0),
	gsSP2Triangles(47, 45, 46, 0, 47, 46, 48, 0),
	gsSP2Triangles(47, 49, 45, 0, 47, 50, 49, 0),
	gsSP2Triangles(51, 49, 50, 0, 51, 6, 49, 0),
	gsSP2Triangles(52, 6, 51, 0, 52, 5, 6, 0),
	gsSP2Triangles(53, 5, 52, 0, 53, 54, 5, 0),
	gsSP2Triangles(6, 7, 49, 0, 45, 49, 7, 0),
	gsSP2Triangles(45, 7, 43, 0, 7, 41, 43, 0),
	gsSP2Triangles(7, 55, 41, 0, 7, 8, 55, 0),
	gsSP2Triangles(55, 8, 12, 0, 55, 12, 56, 0),
	gsSP2Triangles(12, 57, 56, 0, 12, 13, 57, 0),
	gsSP2Triangles(13, 58, 57, 0, 13, 17, 58, 0),
	gsSP2Triangles(58, 17, 24, 0, 58, 24, 29, 0),
	gsSP2Triangles(58, 29, 32, 0, 58, 32, 36, 0),
	gsSP2Triangles(38, 58, 36, 0, 38, 57, 58, 0),
	gsSP2Triangles(40, 57, 38, 0, 40, 56, 57, 0),
	gsSP2Triangles(55, 56, 40, 0, 55, 40, 41, 0),
	gsSP2Triangles(59, 0, 5, 0, 59, 60, 0, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_Wing_Cap_mesh_layer_1_vtx_0[91] = {
	{{{32, 274, 28}, 0, {143, -443}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{46, 274, -3}, 0, {207, -443}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{-1, 289, -3}, 0, {175, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 274, -34}, 0, {-369, -443}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-47, 274, -3}, 0, {-305, -443}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-1, 289, -3}, 0, {-337, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-1, 274, -47}, 0, {-497, -443}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{-33, 274, -34}, 0, {-433, -443}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-1, 289, -3}, 0, {-465, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-33, 274, 28}, 0, {-113, -443}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-1, 274, 41}, 0, {-49, -443}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{-1, 289, -3}, 0, {-81, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{32, 274, -34}, 0, {399, -443}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{-1, 274, -47}, 0, {463, -443}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{-1, 289, -3}, 0, {431, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{46, 274, -3}, 0, {271, -443}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{32, 274, -34}, 0, {335, -443}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{-1, 289, -3}, 0, {303, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-47, 274, -3}, 0, {-241, -443}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-33, 274, 28}, 0, {-177, -443}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-1, 289, -3}, 0, {-209, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-1, 274, 41}, 0, {15, -443}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{32, 274, 28}, 0, {79, -443}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{-1, 289, -3}, 0, {47, -529}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-67, 27, 47}, 0, {-529, 495}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{-1, 27, 74}, 0, {-529, 495}, {0x00, 0x35, 0x73, 0xFF}}},
	{{{66, 27, 47}, 0, {-529, 495}, {0x55, 0x36, 0x4E, 0xFF}}},
	{{{93, 27, -20}, 0, {-529, 495}, {0x72, 0x38, 0xFD, 0xFF}}},
	{{{-94, 27, -20}, 0, {-529, 495}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{-67, 27, -87}, 0, {-529, 495}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{66, 27, -87}, 0, {-529, 495}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{-1, 27, -115}, 0, {-529, 495}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{-1, 27, -115}, 0, {-529, 325}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{-1, 8, -139}, 0, {-529, 325}, {0x00, 0xDE, 0x86, 0xFF}}},
	{{{-84, 8, -104}, 0, {-401, 325}, {0xA9, 0xDD, 0xAA, 0xFF}}},
	{{{-67, 27, -87}, 0, {-401, 325}, {0xB0, 0x39, 0xB0, 0xFF}}},
	{{{-118, 8, -20}, 0, {-273, 325}, {0x86, 0xDD, 0x00, 0xFF}}},
	{{{117, 8, -20}, 0, {239, 325}, {0x7A, 0xDD, 0x00, 0xFF}}},
	{{{82, 8, -104}, 0, {367, 325}, {0x57, 0xDD, 0xAA, 0xFF}}},
	{{{-1, 8, -139}, 0, {495, 325}, {0x00, 0xDE, 0x86, 0xFF}}},
	{{{-1, 27, -115}, 0, {495, 325}, {0x00, 0x39, 0x8E, 0xFF}}},
	{{{66, 27, -87}, 0, {367, 325}, {0x50, 0x39, 0xB0, 0xFF}}},
	{{{93, 27, -20}, 0, {239, 325}, {0x72, 0x38, 0xFD, 0xFF}}},
	{{{66, 27, 47}, 0, {111, 325}, {0x55, 0x36, 0x4E, 0xFF}}},
	{{{82, 8, 64}, 0, {111, 325}, {0x57, 0xDD, 0x56, 0xFF}}},
	{{{-1, 27, 74}, 0, {-17, 325}, {0x00, 0x35, 0x73, 0xFF}}},
	{{{-1, 8, 98}, 0, {-17, 325}, {0x00, 0xDE, 0x7A, 0xFF}}},
	{{{-84, 8, 64}, 0, {-145, 325}, {0xA9, 0xDD, 0x56, 0xFF}}},
	{{{-67, 27, 47}, 0, {-145, 325}, {0xAB, 0x36, 0x4E, 0xFF}}},
	{{{-94, 27, -20}, 0, {-273, 325}, {0x8E, 0x38, 0xFD, 0xFF}}},
	{{{46, 274, -3}, 0, {-529, 495}, {0x34, 0x74, 0x00, 0xFF}}},
	{{{32, 274, 28}, 0, {-529, 495}, {0x24, 0x75, 0x23, 0xFF}}},
	{{{32, 274, -34}, 0, {-529, 495}, {0x24, 0x75, 0xDD, 0xFF}}},
	{{{-1, 274, -47}, 0, {-529, 495}, {0x00, 0x75, 0xCF, 0xFF}}},
	{{{-1, 274, 41}, 0, {-529, 495}, {0x00, 0x75, 0x31, 0xFF}}},
	{{{-33, 274, 28}, 0, {-529, 495}, {0xDC, 0x75, 0x23, 0xFF}}},
	{{{-33, 274, -34}, 0, {-529, 495}, {0xDC, 0x75, 0xDD, 0xFF}}},
	{{{-47, 274, -3}, 0, {-529, 495}, {0xCC, 0x74, 0x00, 0xFF}}},
	{{{-1, 283, -7}, 0, {-273, -17}, {0x00, 0xA4, 0xA9, 0xFF}}},
	{{{4, 336, -25}, 0, {-529, -529}, {0x7E, 0x08, 0x09, 0xFF}}},
	{{{4, 283, -2}, 0, {-529, -17}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{-1, 334, -29}, 0, {-273, -529}, {0x00, 0xB3, 0x9B, 0xFF}}},
	{{{-5, 336, -25}, 0, {-17, -529}, {0x82, 0x08, 0x09, 0xFF}}},
	{{{-5, 283, -2}, 0, {-17, -17}, {0x97, 0xBB, 0x13, 0xFF}}},
	{{{-1, 338, -21}, 0, {239, -529}, {0x00, 0x49, 0x68, 0xFF}}},
	{{{-5, 336, -25}, 0, {-17, -529}, {0x82, 0x08, 0x09, 0xFF}}},
	{{{-5, 283, -2}, 0, {-17, -17}, {0x97, 0xBB, 0x13, 0xFF}}},
	{{{-1, 283, 3}, 0, {239, -17}, {0x00, 0xCA, 0x73, 0xFF}}},
	{{{4, 283, -2}, 0, {495, -17}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{4, 336, -25}, 0, {495, -529}, {0x7E, 0x08, 0x09, 0xFF}}},
	{{{-1, 365, -50}, 0, {239, -529}, {0x00, 0x73, 0x35, 0xFF}}},
	{{{4, 362, -53}, 0, {495, -529}, {0x7D, 0x14, 0x02, 0xFF}}},
	{{{-1, 370, -122}, 0, {239, -529}, {0x00, 0x7B, 0xE0, 0xFF}}},
	{{{4, 365, -121}, 0, {495, -529}, {0x7E, 0x11, 0xFA, 0xFF}}},
	{{{-1, 340, -168}, 0, {239, -529}, {0x00, 0x32, 0x8B, 0xFF}}},
	{{{4, 336, -166}, 0, {495, -529}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{-5, 365, -121}, 0, {-17, -529}, {0x82, 0x11, 0xFA, 0xFF}}},
	{{{-5, 362, -53}, 0, {-17, -529}, {0x83, 0x14, 0x02, 0xFF}}},
	{{{-1, 358, -56}, 0, {-273, -529}, {0x00, 0x88, 0xD7, 0xFF}}},
	{{{-1, 361, -120}, 0, {-273, -529}, {0x00, 0x86, 0x24, 0xFF}}},
	{{{-5, 336, -166}, 0, {-17, -529}, {0x98, 0xD9, 0xC2, 0xFF}}},
	{{{-1, 332, -163}, 0, {-273, -529}, {0x00, 0x81, 0xF8, 0xFF}}},
	{{{4, 336, -166}, 0, {-529, -529}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{4, 365, -121}, 0, {-529, -529}, {0x7E, 0x11, 0xFA, 0xFF}}},
	{{{4, 362, -53}, 0, {-529, -529}, {0x7D, 0x14, 0x02, 0xFF}}},
	{{{-1, 334, -29}, 0, {-273, -529}, {0x00, 0xB3, 0x9B, 0xFF}}},
	{{{4, 336, -25}, 0, {-529, -529}, {0x7E, 0x08, 0x09, 0xFF}}},
	{{{-1, 283, 3}, 0, {485, 239}, {0x00, 0xCA, 0x73, 0xFF}}},
	{{{-1, 283, -7}, 0, {-6, 239}, {0x00, 0xA4, 0xA9, 0xFF}}},
	{{{4, 283, -2}, 0, {239, -6}, {0x69, 0xBB, 0x13, 0xFF}}},
	{{{-5, 283, -2}, 0, {239, 485}, {0x97, 0xBB, 0x13, 0xFF}}},
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(pik_helm_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
	gsSP2Triangles(28, 24, 27, 0, 29, 28, 27, 0),
	gsSP2Triangles(27, 30, 29, 0, 30, 31, 29, 0),
	gsSP2Triangles(32, 33, 34, 0, 32, 34, 35, 0),
	gsSP2Triangles(35, 34, 36, 0, 36, 34, 37, 0),
	gsSP2Triangles(37, 34, 38, 0, 34, 39, 38, 0),
	gsSP2Triangles(40, 38, 39, 0, 40, 41, 38, 0),
	gsSP2Triangles(41, 37, 38, 0, 41, 42, 37, 0),
	gsSP2Triangles(43, 37, 42, 0, 43, 44, 37, 0),
	gsSP2Triangles(45, 44, 43, 0, 45, 46, 44, 0),
	gsSP2Triangles(45, 47, 46, 0, 45, 48, 47, 0),
	gsSP2Triangles(48, 36, 47, 0, 48, 49, 36, 0),
	gsSP2Triangles(35, 36, 49, 0, 47, 36, 37, 0),
	gsSP2Triangles(37, 44, 47, 0, 44, 46, 47, 0),
	gsSP2Triangles(50, 51, 52, 0, 53, 52, 51, 0),
	gsSP2Triangles(51, 54, 53, 0, 54, 55, 53, 0),
	gsSP2Triangles(53, 55, 56, 0, 55, 57, 56, 0),
	gsSP2Triangles(58, 59, 60, 0, 58, 61, 59, 0),
	gsSP2Triangles(62, 61, 58, 0, 62, 58, 63, 0),
	gsSPVertex(pik_helm_wing_Wing_Cap_mesh_layer_1_vtx_0 + 64, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
	gsSP2Triangles(5, 6, 0, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
	gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
	gsSP2Triangles(12, 8, 10, 0, 13, 8, 12, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 12, 15, 0),
	gsSP2Triangles(15, 12, 16, 0, 12, 10, 16, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
	gsSP2Triangles(15, 18, 19, 0, 14, 15, 19, 0),
	gsSP2Triangles(14, 19, 20, 0, 21, 14, 20, 0),
	gsSP2Triangles(21, 20, 22, 0, 21, 13, 14, 0),
	gsSP2Triangles(21, 1, 13, 0, 1, 6, 13, 0),
	gsSP2Triangles(1, 0, 6, 0, 13, 6, 8, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_Wing_Cap_mesh_layer_1_vtx_1[26] = {
	{{{4, 336, -166}, 0, {240, 506}, {0x68, 0xD9, 0xC2, 0xFF}}},
	{{{-5, 336, -166}, 0, {240, 998}, {0x98, 0xD9, 0xC2, 0xFF}}},
	{{{-1, 340, -168}, 0, {486, 752}, {0x00, 0x32, 0x8B, 0xFF}}},
	{{{-1, 332, -163}, 0, {-6, 752}, {0x00, 0x81, 0xF8, 0xFF}}},
	{{{-1, 311, -174}, 0, {915, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 321, -180}, 0, {1008, 847}, {0x94, 0xC7, 0xDD, 0xFF}}},
	{{{-1, 321, -191}, 0, {822, 847}, {0x00, 0xC7, 0x8E, 0xFF}}},
	{{{-10, 338, -188}, 0, {915, 686}, {0xBD, 0x39, 0xA4, 0xFF}}},
	{{{9, 338, -188}, 0, {729, 686}, {0x43, 0x39, 0xA4, 0xFF}}},
	{{{-1, 348, -174}, 0, {822, 524}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{15, 321, -180}, 0, {636, 847}, {0x6C, 0xC7, 0xDD, 0xFF}}},
	{{{-1, 311, -174}, 0, {729, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{15, 338, -169}, 0, {543, 686}, {0x6C, 0x39, 0x23, 0xFF}}},
	{{{-1, 348, -174}, 0, {636, 524}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{9, 321, -161}, 0, {449, 847}, {0x43, 0xC7, 0x5C, 0xFF}}},
	{{{-1, 311, -174}, 0, {543, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-1, 338, -158}, 0, {356, 686}, {0x00, 0x39, 0x72, 0xFF}}},
	{{{-1, 348, -174}, 0, {449, 524}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-10, 321, -161}, 0, {263, 847}, {0xBD, 0xC7, 0x5C, 0xFF}}},
	{{{-1, 311, -174}, 0, {356, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-16, 338, -169}, 0, {170, 686}, {0x94, 0x39, 0x23, 0xFF}}},
	{{{-1, 348, -174}, 0, {263, 524}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-16, 321, -180}, 0, {77, 847}, {0x94, 0xC7, 0xDD, 0xFF}}},
	{{{-1, 311, -174}, 0, {170, 1008}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-10, 338, -188}, 0, {-16, 686}, {0xBD, 0x39, 0xA4, 0xFF}}},
	{{{-1, 348, -174}, 0, {77, 524}, {0x00, 0x7F, 0x00, 0xFF}}},
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(pik_helm_wing_Wing_Cap_mesh_layer_1_vtx_1 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 6, 8, 0, 11, 6, 10, 0),
	gsSP2Triangles(10, 8, 12, 0, 12, 8, 13, 0),
	gsSP2Triangles(14, 10, 12, 0, 15, 10, 14, 0),
	gsSP2Triangles(14, 12, 16, 0, 16, 12, 17, 0),
	gsSP2Triangles(18, 14, 16, 0, 18, 19, 14, 0),
	gsSP2Triangles(18, 16, 20, 0, 20, 16, 21, 0),
	gsSP2Triangles(22, 18, 20, 0, 23, 18, 22, 0),
	gsSP2Triangles(22, 20, 24, 0, 24, 20, 25, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{{-175, 207, -143}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-117, 231, -77}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-227, 380, -158}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-169, 404, -92}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{228, 380, -158}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{117, 231, -77}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{176, 207, -143}, 0, {1008, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{169, 404, -92}, 0, {-16, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
};

Gfx pik_helm_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(pik_helm_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx pik_helm_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{{-117, 231, -77}, 0, {1008, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-58, 254, -13}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-169, 404, -92}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-111, 426, -28}, 0, {-16, -16}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{169, 404, -92}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{59, 254, -13}, 0, {-16, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{117, 231, -77}, 0, {1008, 2032}, {0x59, 0xED, 0x58, 0xFF}}},
	{{{111, 426, -28}, 0, {-16, -16}, {0x59, 0xED, 0x58, 0xFF}}},
};

Gfx pik_helm_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(pik_helm_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pik_helm_wing_Helmet_002[] = {
	gsSPSetLights1(pik_helm_wing_Helmet_002_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, PRIMITIVE, 0, 0, 0, SHADE, 0, 0, 0, PRIMITIVE),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 47),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Helmet_002[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_Metal_Env_Map_002[] = {
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(1984, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, pik_helm_wing_bullymetal_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 168),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, pik_helm_wing_bullymetal_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Metal_Env_Map_002[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_Light_002[] = {
	gsSPLight(&pik_helm_wing_Light_002_lights.l, 1),
    gsSPLight(&pik_helm_wing_Light_002_lights.a, 2),
    gsSPCopyLightEXT(2, 17),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Light_002[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&pik_helm_wing_Metal__METAL__lights.l, 1),
    gsSPLight(&pik_helm_wing_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pik_helm_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, pik_helm_wing_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_pik_helm_wing_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, pik_helm_wing_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pik_helm_wing_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_5[] = {
	gsSPDisplayList(mat_pik_helm_wing_Helmet_002),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_Helmet_002),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_5_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_pik_helm_wing_Metal__METAL_),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_pik_helm_wing_Metal_Env_Map_002),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_Metal_Env_Map_002),
	gsSPDisplayList(mat_pik_helm_wing_Light_002),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_Light_002),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_pik_helm_wing_Metal__METAL_),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(pik_helm_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_pik_helm_wing_Wing_Tip),
	gsSPDisplayList(pik_helm_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_Wing_Tip),
	gsSPDisplayList(mat_pik_helm_wing_Wing_Base),
	gsSPDisplayList(pik_helm_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_pik_helm_wing_Wing_Tip),
	gsSPDisplayList(pik_helm_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_pik_helm_wing_Wing_Tip),
	gsSPDisplayList(mat_pik_helm_wing_Wing_Base),
	gsSPDisplayList(pik_helm_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_pik_helm_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx pik_helm_wing_material_revert_render_settings[] = {
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

