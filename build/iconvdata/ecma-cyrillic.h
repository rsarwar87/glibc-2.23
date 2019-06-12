static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x0004,
  [0x05] = 0x0005,
  [0x06] = 0x0006,
  [0x07] = 0x0007,
  [0x08] = 0x0008,
  [0x09] = 0x0009,
  [0x0a] = 0x000A,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x0014,
  [0x15] = 0x0015,
  [0x16] = 0x0016,
  [0x17] = 0x0017,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x001A,
  [0x1b] = 0x001B,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x20] = 0x0020,
  [0x21] = 0x0021,
  [0x22] = 0x0022,
  [0x23] = 0x0023,
  [0x24] = 0x0024,
  [0x25] = 0x0025,
  [0x26] = 0x0026,
  [0x27] = 0x0027,
  [0x28] = 0x0028,
  [0x29] = 0x0029,
  [0x2a] = 0x002A,
  [0x2b] = 0x002B,
  [0x2c] = 0x002C,
  [0x2d] = 0x002D,
  [0x2e] = 0x002E,
  [0x2f] = 0x002F,
  [0x30] = 0x0030,
  [0x31] = 0x0031,
  [0x32] = 0x0032,
  [0x33] = 0x0033,
  [0x34] = 0x0034,
  [0x35] = 0x0035,
  [0x36] = 0x0036,
  [0x37] = 0x0037,
  [0x38] = 0x0038,
  [0x39] = 0x0039,
  [0x3a] = 0x003A,
  [0x3b] = 0x003B,
  [0x3c] = 0x003C,
  [0x3d] = 0x003D,
  [0x3e] = 0x003E,
  [0x3f] = 0x003F,
  [0x40] = 0x0040,
  [0x41] = 0x0041,
  [0x42] = 0x0042,
  [0x43] = 0x0043,
  [0x44] = 0x0044,
  [0x45] = 0x0045,
  [0x46] = 0x0046,
  [0x47] = 0x0047,
  [0x48] = 0x0048,
  [0x49] = 0x0049,
  [0x4a] = 0x004A,
  [0x4b] = 0x004B,
  [0x4c] = 0x004C,
  [0x4d] = 0x004D,
  [0x4e] = 0x004E,
  [0x4f] = 0x004F,
  [0x50] = 0x0050,
  [0x51] = 0x0051,
  [0x52] = 0x0052,
  [0x53] = 0x0053,
  [0x54] = 0x0054,
  [0x55] = 0x0055,
  [0x56] = 0x0056,
  [0x57] = 0x0057,
  [0x58] = 0x0058,
  [0x59] = 0x0059,
  [0x5a] = 0x005A,
  [0x5b] = 0x005B,
  [0x5c] = 0x005C,
  [0x5d] = 0x005D,
  [0x5e] = 0x005E,
  [0x5f] = 0x005F,
  [0x60] = 0x0060,
  [0x61] = 0x0061,
  [0x62] = 0x0062,
  [0x63] = 0x0063,
  [0x64] = 0x0064,
  [0x65] = 0x0065,
  [0x66] = 0x0066,
  [0x67] = 0x0067,
  [0x68] = 0x0068,
  [0x69] = 0x0069,
  [0x6a] = 0x006A,
  [0x6b] = 0x006B,
  [0x6c] = 0x006C,
  [0x6d] = 0x006D,
  [0x6e] = 0x006E,
  [0x6f] = 0x006F,
  [0x70] = 0x0070,
  [0x71] = 0x0071,
  [0x72] = 0x0072,
  [0x73] = 0x0073,
  [0x74] = 0x0074,
  [0x75] = 0x0075,
  [0x76] = 0x0076,
  [0x77] = 0x0077,
  [0x78] = 0x0078,
  [0x79] = 0x0079,
  [0x7a] = 0x007A,
  [0x7b] = 0x007B,
  [0x7c] = 0x007C,
  [0x7d] = 0x007D,
  [0x7e] = 0x007E,
  [0x7f] = 0x007F,
  [0x80] = 0x0080,
  [0x81] = 0x0081,
  [0x82] = 0x0082,
  [0x83] = 0x0083,
  [0x84] = 0x0084,
  [0x85] = 0x0085,
  [0x86] = 0x0086,
  [0x87] = 0x0087,
  [0x88] = 0x0088,
  [0x89] = 0x0089,
  [0x8a] = 0x008A,
  [0x8b] = 0x008B,
  [0x8c] = 0x008C,
  [0x8d] = 0x008D,
  [0x8e] = 0x008E,
  [0x8f] = 0x008F,
  [0x90] = 0x0090,
  [0x91] = 0x0091,
  [0x92] = 0x0092,
  [0x93] = 0x0093,
  [0x94] = 0x0094,
  [0x95] = 0x0095,
  [0x96] = 0x0096,
  [0x97] = 0x0097,
  [0x98] = 0x0098,
  [0x99] = 0x0099,
  [0x9a] = 0x009A,
  [0x9b] = 0x009B,
  [0x9c] = 0x009C,
  [0x9d] = 0x009D,
  [0x9e] = 0x009E,
  [0x9f] = 0x009F,
  [0xa0] = 0x00A0,
  [0xa1] = 0x0452,
  [0xa2] = 0x0453,
  [0xa3] = 0x0451,
  [0xa4] = 0x0454,
  [0xa5] = 0x0455,
  [0xa6] = 0x0456,
  [0xa7] = 0x0457,
  [0xa8] = 0x0458,
  [0xa9] = 0x0459,
  [0xaa] = 0x045A,
  [0xab] = 0x045B,
  [0xac] = 0x045C,
  [0xad] = 0x00AD,
  [0xae] = 0x045E,
  [0xaf] = 0x045F,
  [0xb0] = 0x2116,
  [0xb1] = 0x0402,
  [0xb2] = 0x0403,
  [0xb3] = 0x0401,
  [0xb4] = 0x0404,
  [0xb5] = 0x0405,
  [0xb6] = 0x0406,
  [0xb7] = 0x0407,
  [0xb8] = 0x0408,
  [0xb9] = 0x0409,
  [0xba] = 0x040A,
  [0xbb] = 0x040B,
  [0xbc] = 0x040C,
  [0xbd] = 0x00A4,
  [0xbe] = 0x040E,
  [0xbf] = 0x040F,
  [0xc0] = 0x044E,
  [0xc1] = 0x0430,
  [0xc2] = 0x0431,
  [0xc3] = 0x0446,
  [0xc4] = 0x0434,
  [0xc5] = 0x0435,
  [0xc6] = 0x0444,
  [0xc7] = 0x0433,
  [0xc8] = 0x0445,
  [0xc9] = 0x0438,
  [0xca] = 0x0439,
  [0xcb] = 0x043A,
  [0xcc] = 0x043B,
  [0xcd] = 0x043C,
  [0xce] = 0x043D,
  [0xcf] = 0x043E,
  [0xd0] = 0x043F,
  [0xd1] = 0x044F,
  [0xd2] = 0x0440,
  [0xd3] = 0x0441,
  [0xd4] = 0x0442,
  [0xd5] = 0x0443,
  [0xd6] = 0x0436,
  [0xd7] = 0x0432,
  [0xd8] = 0x044C,
  [0xd9] = 0x044B,
  [0xda] = 0x0437,
  [0xdb] = 0x0448,
  [0xdc] = 0x044D,
  [0xdd] = 0x0449,
  [0xde] = 0x0447,
  [0xdf] = 0x044A,
  [0xe0] = 0x042E,
  [0xe1] = 0x0410,
  [0xe2] = 0x0411,
  [0xe3] = 0x0426,
  [0xe4] = 0x0414,
  [0xe5] = 0x0415,
  [0xe6] = 0x0424,
  [0xe7] = 0x0413,
  [0xe8] = 0x0425,
  [0xe9] = 0x0418,
  [0xea] = 0x0419,
  [0xeb] = 0x041A,
  [0xec] = 0x041B,
  [0xed] = 0x041C,
  [0xee] = 0x041D,
  [0xef] = 0x041E,
  [0xf0] = 0x041F,
  [0xf1] = 0x042F,
  [0xf2] = 0x0420,
  [0xf3] = 0x0421,
  [0xf4] = 0x0422,
  [0xf5] = 0x0423,
  [0xf6] = 0x0416,
  [0xf7] = 0x0412,
  [0xf8] = 0x042C,
  [0xf9] = 0x042B,
  [0xfa] = 0x0417,
  [0xfb] = 0x0428,
  [0xfc] = 0x042D,
  [0xfd] = 0x0429,
  [0xfe] = 0x0427,
  [0xff] = 0x042A,
};
static const struct gap from_idx[] = {
  { .start = 0x0000, .end = 0x00a4, .idx =     0 },
  { .start = 0x00ad, .end = 0x00ad, .idx =    -8 },
  { .start = 0x0401, .end = 0x045f, .idx =  -859 },
  { .start = 0x2116, .end = 0x2116, .idx = -8209 },
  { .start = 0xffff, .end = 0xffff, .idx =     0 }
};
static const char from_ucs4[] = {

  '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
  '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
  '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x20', '\x21', '\x22', '\x23', '\x24', '\x25', '\x26', '\x27',
  '\x28', '\x29', '\x2a', '\x2b', '\x2c', '\x2d', '\x2e', '\x2f',
  '\x30', '\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37',
  '\x38', '\x39', '\x3a', '\x3b', '\x3c', '\x3d', '\x3e', '\x3f',
  '\x40', '\x41', '\x42', '\x43', '\x44', '\x45', '\x46', '\x47',
  '\x48', '\x49', '\x4a', '\x4b', '\x4c', '\x4d', '\x4e', '\x4f',
  '\x50', '\x51', '\x52', '\x53', '\x54', '\x55', '\x56', '\x57',
  '\x58', '\x59', '\x5a', '\x5b', '\x5c', '\x5d', '\x5e', '\x5f',
  '\x60', '\x61', '\x62', '\x63', '\x64', '\x65', '\x66', '\x67',
  '\x68', '\x69', '\x6a', '\x6b', '\x6c', '\x6d', '\x6e', '\x6f',
  '\x70', '\x71', '\x72', '\x73', '\x74', '\x75', '\x76', '\x77',
  '\x78', '\x79', '\x7a', '\x7b', '\x7c', '\x7d', '\x7e', '\x7f',
  '\x80', '\x81', '\x82', '\x83', '\x84', '\x85', '\x86', '\x87',
  '\x88', '\x89', '\x8a', '\x8b', '\x8c', '\x8d', '\x8e', '\x8f',
  '\x90', '\x91', '\x92', '\x93', '\x94', '\x95', '\x96', '\x97',
  '\x98', '\x99', '\x9a', '\x9b', '\x9c', '\x9d', '\x9e', '\x9f',
  '\xa0', '\x00', '\x00', '\x00', '\xbd', '\xad', '\xb3', '\xb1',
  '\xb2', '\xb4', '\xb5', '\xb6', '\xb7', '\xb8', '\xb9', '\xba',
  '\xbb', '\xbc', '\x00', '\xbe', '\xbf', '\xe1', '\xe2', '\xf7',
  '\xe7', '\xe4', '\xe5', '\xf6', '\xfa', '\xe9', '\xea', '\xeb',
  '\xec', '\xed', '\xee', '\xef', '\xf0', '\xf2', '\xf3', '\xf4',
  '\xf5', '\xe6', '\xe8', '\xe3', '\xfe', '\xfb', '\xfd', '\xff',
  '\xf9', '\xf8', '\xfc', '\xe0', '\xf1', '\xc1', '\xc2', '\xd7',
  '\xc7', '\xc4', '\xc5', '\xd6', '\xda', '\xc9', '\xca', '\xcb',
  '\xcc', '\xcd', '\xce', '\xcf', '\xd0', '\xd2', '\xd3', '\xd4',
  '\xd5', '\xc6', '\xc8', '\xc3', '\xde', '\xdb', '\xdd', '\xdf',
  '\xd9', '\xd8', '\xdc', '\xc0', '\xd1', '\x00', '\xa3', '\xa1',
  '\xa2', '\xa4', '\xa5', '\xa6', '\xa7', '\xa8', '\xa9', '\xaa',
  '\xab', '\xac', '\x00', '\xae', '\xaf', '\xb0',
};
