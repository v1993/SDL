	// 1114.0.0
	 #pragma once
const uint32_t VULKAN_VertexShader[] = {
	0x07230203,0x00010000,0x0008000b,0x000000a1,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x000b000f,0x00000000,0x00000004,0x6e69616d,0x00000000,0x0000003c,0x00000040,0x00000044,
	0x00000056,0x00000059,0x0000005c,0x00030003,0x00000005,0x000001f4,0x00040005,0x00000004,
	0x6e69616d,0x00000000,0x00060005,0x0000001e,0x68737570,0x736e6f43,0x746e6174,0x00000073,
	0x00050006,0x0000001e,0x00000000,0x65646f6d,0x0000006c,0x00080006,0x0000001e,0x00000001,
	0x6a6f7270,0x69746365,0x6e416e6f,0x65695664,0x00000077,0x00060005,0x00000020,0x68737570,
	0x736e6f43,0x746e6174,0x00000073,0x00050005,0x0000003c,0x75706e69,0x6f702e74,0x00000073,
	0x00050005,0x00000040,0x75706e69,0x65742e74,0x00000078,0x00050005,0x00000044,0x75706e69,
	0x6f632e74,0x00726f6c,0x00080005,0x00000056,0x746e6540,0x6f507972,0x4f746e69,0x75707475,
	0x6f702e74,0x00000073,0x00080005,0x00000059,0x746e6540,0x6f507972,0x4f746e69,0x75707475,
	0x65742e74,0x00000078,0x00080005,0x0000005c,0x746e6540,0x6f507972,0x4f746e69,0x75707475,
	0x6f632e74,0x00726f6c,0x00040048,0x0000001e,0x00000000,0x00000005,0x00050048,0x0000001e,
	0x00000000,0x00000023,0x00000000,0x00050048,0x0000001e,0x00000000,0x00000007,0x00000010,
	0x00040048,0x0000001e,0x00000001,0x00000005,0x00050048,0x0000001e,0x00000001,0x00000023,
	0x00000040,0x00050048,0x0000001e,0x00000001,0x00000007,0x00000010,0x00030047,0x0000001e,
	0x00000002,0x00040047,0x0000003c,0x0000001e,0x00000000,0x00040047,0x00000040,0x0000001e,
	0x00000001,0x00040047,0x00000044,0x0000001e,0x00000002,0x00040047,0x00000056,0x0000000b,
	0x00000000,0x00040047,0x00000059,0x0000001e,0x00000000,0x00040047,0x0000005c,0x0000001e,
	0x00000001,0x00020013,0x00000002,0x00030021,0x00000003,0x00000002,0x00030016,0x00000006,
	0x00000020,0x00040017,0x00000007,0x00000006,0x00000003,0x00040017,0x00000008,0x00000006,
	0x00000002,0x00040017,0x00000009,0x00000006,0x00000004,0x00040015,0x00000013,0x00000020,
	0x00000001,0x0004002b,0x00000013,0x00000014,0x00000000,0x0004002b,0x00000006,0x00000018,
	0x3f800000,0x00040018,0x0000001d,0x00000009,0x00000004,0x0004001e,0x0000001e,0x0000001d,
	0x0000001d,0x00040020,0x0000001f,0x00000009,0x0000001e,0x0004003b,0x0000001f,0x00000020,
	0x00000009,0x00040020,0x00000021,0x00000009,0x0000001d,0x0004002b,0x00000013,0x00000026,
	0x00000001,0x00040020,0x0000003b,0x00000001,0x00000007,0x0004003b,0x0000003b,0x0000003c,
	0x00000001,0x00040020,0x0000003f,0x00000001,0x00000008,0x0004003b,0x0000003f,0x00000040,
	0x00000001,0x00040020,0x00000043,0x00000001,0x00000009,0x0004003b,0x00000043,0x00000044,
	0x00000001,0x00040020,0x00000055,0x00000003,0x00000009,0x0004003b,0x00000055,0x00000056,
	0x00000003,0x00040020,0x00000058,0x00000003,0x00000008,0x0004003b,0x00000058,0x00000059,
	0x00000003,0x0004003b,0x00000055,0x0000005c,0x00000003,0x00050036,0x00000002,0x00000004,
	0x00000000,0x00000003,0x000200f8,0x00000005,0x0004003d,0x00000007,0x0000003d,0x0000003c,
	0x0004003d,0x00000008,0x00000041,0x00000040,0x0004003d,0x00000009,0x00000045,0x00000044,
	0x00050051,0x00000006,0x00000065,0x0000003d,0x00000000,0x00050051,0x00000006,0x00000066,
	0x0000003d,0x00000001,0x00050051,0x00000006,0x00000067,0x0000003d,0x00000002,0x00070050,
	0x00000009,0x00000068,0x00000065,0x00000066,0x00000067,0x00000018,0x00050041,0x00000021,
	0x00000069,0x00000020,0x00000014,0x0004003d,0x0000001d,0x0000006a,0x00000069,0x00050091,
	0x00000009,0x0000006c,0x0000006a,0x00000068,0x00050041,0x00000021,0x0000006d,0x00000020,
	0x00000026,0x0004003d,0x0000001d,0x0000006e,0x0000006d,0x00050091,0x00000009,0x00000070,
	0x0000006e,0x0000006c,0x00050051,0x00000006,0x00000052,0x00000070,0x00000001,0x0004007f,
	0x00000006,0x00000053,0x00000052,0x00060052,0x00000009,0x000000a0,0x00000053,0x00000070,
	0x00000001,0x0003003e,0x00000056,0x000000a0,0x0003003e,0x00000059,0x00000041,0x0003003e,
	0x0000005c,0x00000045,0x000100fd,0x00010038
};
