#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_LTAGE[] = {
    120,156,197,89,109,115,219,198,17,222,3,64,74,164,36,139,
    146,44,201,182,100,139,73,234,132,245,84,98,226,68,113,58,
    113,221,88,25,247,37,147,42,46,232,140,29,38,83,20,34,
    142,36,40,18,224,0,39,219,204,72,95,42,79,219,233,247,
    254,132,126,200,191,233,63,106,119,247,0,16,162,164,218,51,
    109,25,137,60,29,22,119,123,183,187,207,190,220,169,5,201,
    79,1,191,159,85,1,226,72,0,120,248,17,208,7,24,8,
    104,10,16,82,128,119,21,14,11,16,125,4,94,1,94,1,
    52,13,144,6,156,98,199,132,111,13,8,230,121,78,17,250,
    38,83,4,140,202,32,45,104,22,224,105,176,4,150,44,194,
    97,25,162,63,130,16,34,16,240,204,155,1,111,22,94,33,
    119,236,148,152,225,44,16,177,204,196,18,120,115,76,44,131,
    55,207,157,57,24,85,64,206,67,115,129,134,53,175,32,219,
    59,200,118,145,217,254,147,216,122,248,102,21,188,43,52,28,
    247,245,13,141,180,104,36,175,183,200,92,42,233,46,151,160,
    185,156,246,87,114,253,171,185,254,42,247,113,213,101,232,173,
    65,111,29,122,215,160,141,138,88,202,86,184,14,210,132,222,
    13,104,222,0,137,159,235,112,138,186,242,150,115,51,54,120,
    198,74,54,99,147,103,220,132,230,77,144,248,217,212,51,138,
    208,168,173,161,254,253,127,225,79,13,245,15,106,30,155,231,
    50,138,253,48,112,252,160,29,250,6,189,47,82,67,214,106,
    81,51,147,152,237,115,50,219,15,192,54,243,140,196,108,39,
    128,140,5,201,210,55,224,132,59,39,6,140,106,112,44,160,
    103,129,103,194,49,46,83,160,13,116,4,156,26,240,157,73,
    3,78,176,181,80,185,183,192,82,218,102,61,86,174,230,52,
    3,39,5,56,46,64,227,217,177,65,132,195,18,68,255,128,
    239,55,153,233,44,51,53,224,24,91,11,78,45,56,41,194,
    83,28,132,164,94,137,196,23,207,142,81,82,164,52,106,22,
    238,118,63,39,46,137,226,249,81,224,14,36,139,238,12,221,
    200,29,56,95,62,121,248,235,71,181,114,58,34,140,119,134,
    174,234,218,60,197,36,93,12,134,138,89,133,129,84,115,216,
    105,251,129,231,12,66,239,168,47,213,44,241,113,218,126,95,
    58,14,191,252,237,96,24,70,234,81,20,133,145,77,234,100,
    98,63,116,179,25,164,204,86,63,140,101,141,86,227,101,108,
    98,175,104,116,123,200,28,105,3,188,77,154,236,201,184,21,
    249,67,133,86,210,28,105,52,113,171,145,125,184,137,191,197,
    166,62,8,84,189,219,105,199,245,70,215,141,100,163,43,131,
    122,71,14,118,183,195,200,239,248,193,118,172,220,131,190,220,
    190,251,254,7,187,219,63,223,254,176,126,112,228,247,189,250,
    203,79,62,174,15,71,170,27,6,245,193,110,221,15,148,68,
    5,245,235,57,213,236,224,235,101,90,228,133,223,113,124,22,
    207,233,202,254,80,70,11,68,189,65,27,16,21,49,47,138,
    194,20,53,177,128,189,2,126,77,177,105,204,137,125,159,4,
    108,145,208,132,43,43,143,36,50,175,128,67,3,162,77,194,
    73,15,63,130,12,139,104,105,208,59,131,223,253,158,52,163,
    169,61,147,172,175,137,199,140,45,4,25,142,188,79,230,14,
    128,1,82,128,94,17,52,112,16,111,26,73,209,136,90,28,
    78,108,12,100,110,65,252,119,64,77,35,100,142,33,129,211,
    169,9,34,168,128,42,147,71,35,117,13,23,252,19,35,178,
    81,163,237,239,51,58,84,215,143,195,23,1,219,128,250,12,
    164,6,106,230,241,232,171,131,158,108,169,120,11,9,223,132,
    71,213,150,27,4,161,170,186,158,87,117,149,138,252,131,35,
    37,227,170,10,171,183,227,26,153,213,94,74,1,150,241,27,
    13,83,64,145,241,17,80,250,193,243,91,10,31,86,248,129,
    173,16,75,133,224,232,134,94,140,116,98,209,145,202,166,77,
    42,82,114,200,27,97,236,56,52,148,150,199,113,87,240,249,
    97,186,19,6,104,173,152,194,41,150,253,182,42,51,50,221,
    56,118,120,39,68,103,16,18,227,231,110,255,72,50,119,132,
    145,194,13,81,87,239,97,138,48,188,70,34,165,26,96,177,
    130,48,240,70,184,75,191,245,30,109,224,26,131,113,158,225,
    184,138,80,156,193,182,136,127,139,98,205,104,89,9,0,139,
    41,8,41,28,42,96,8,136,4,5,8,200,83,12,61,53,
    131,99,7,75,198,30,250,54,245,104,178,189,73,205,77,106,
    110,81,179,149,10,63,29,13,44,76,106,224,30,173,106,176,
    216,44,32,25,203,76,5,244,206,120,217,245,177,151,97,160,
    108,144,183,24,228,83,99,111,177,40,168,70,15,168,197,161,
    236,135,38,196,79,40,132,147,87,49,51,114,32,116,5,234,
    141,29,132,213,101,87,72,13,179,41,182,109,2,108,30,181,
    157,28,106,109,178,20,67,214,190,158,70,73,135,70,104,176,
    218,27,196,170,112,129,190,171,212,188,53,93,165,143,97,215,
    57,7,187,79,105,3,149,4,118,11,12,183,50,126,43,70,
    203,76,44,145,101,207,149,9,184,17,214,172,11,176,246,46,
    245,204,243,178,255,40,48,75,36,254,85,14,102,180,73,35,
    47,216,62,118,70,235,36,79,30,96,235,88,16,60,13,214,
    49,199,27,156,227,223,231,28,207,117,2,87,75,58,128,155,
    28,195,117,167,64,138,105,155,176,150,228,238,184,132,237,48,
    10,95,142,170,97,187,170,88,114,138,183,247,111,199,59,183,
    227,79,49,146,86,31,112,12,211,177,84,71,203,72,14,41,
    218,209,212,71,47,91,146,243,38,63,57,142,14,110,14,7,
    58,39,201,199,136,181,85,82,171,145,234,155,195,124,172,34,
    138,238,83,212,120,57,211,56,9,240,5,45,89,102,117,155,
    98,29,113,85,22,188,47,71,199,118,174,204,248,45,126,247,
    200,4,36,187,4,170,163,237,134,222,53,11,68,162,217,63,
    59,131,157,169,136,99,215,145,255,215,41,102,138,99,204,208,
    215,76,157,225,47,192,149,171,128,63,3,161,2,141,159,56,
    67,230,59,4,131,21,26,254,7,96,175,185,160,94,224,56,
    212,160,26,129,71,96,120,138,239,241,80,93,62,124,1,127,
    205,185,92,154,228,205,164,54,205,39,121,43,139,97,12,167,
    55,74,228,214,217,96,71,38,234,186,49,13,211,17,108,236,
    197,227,100,145,21,150,24,193,167,131,173,89,189,152,67,251,
    250,110,140,44,74,147,27,98,197,200,225,229,3,106,238,102,
    80,17,41,237,255,190,197,45,184,60,179,59,58,107,208,22,
    98,139,119,190,56,195,69,9,207,206,124,161,144,250,194,221,
    204,23,36,103,182,87,124,104,161,214,32,179,159,26,2,79,
    143,88,228,209,97,205,2,89,128,102,145,188,134,11,115,145,
    56,149,72,99,27,69,194,51,105,147,149,178,175,213,149,89,
    94,27,149,154,151,83,140,25,100,215,251,125,119,112,224,185,
    15,14,105,65,90,181,149,186,153,145,138,80,201,139,64,46,
    34,46,147,130,31,119,83,81,158,79,49,94,124,140,252,51,
    17,216,59,188,176,197,65,226,73,87,86,7,114,112,128,231,
    212,174,63,172,182,251,110,135,173,100,38,34,126,149,138,168,
    216,204,147,69,73,124,135,218,176,218,10,3,12,234,71,45,
    21,70,85,79,226,17,78,122,213,237,42,103,132,170,31,87,
    221,3,124,235,182,148,134,252,89,223,229,74,216,141,58,49,
    23,189,135,47,168,59,101,43,59,120,62,247,241,16,48,128,
    44,13,235,227,99,22,224,185,188,215,30,132,25,19,15,103,
    106,164,99,25,21,40,246,14,53,63,133,233,231,129,143,128,
    129,7,49,169,174,40,54,140,146,193,181,30,15,120,76,99,
    227,243,14,92,22,111,224,192,250,226,39,113,227,34,141,148,
    51,116,63,64,109,137,210,64,179,156,18,231,184,157,103,226,
    66,74,188,194,237,34,19,43,41,113,137,219,101,38,174,164,
    196,171,220,174,50,113,45,37,174,115,123,141,137,215,83,226,
    13,110,55,152,184,153,18,111,114,123,139,137,91,41,177,202,
    237,91,76,124,59,189,238,122,135,137,63,129,230,109,186,27,
    34,202,187,20,152,102,254,219,192,196,46,61,101,103,86,255,
    211,120,100,223,251,17,37,176,63,129,164,96,185,44,22,137,
    188,120,11,122,110,79,164,103,168,188,108,124,129,179,124,214,
    1,156,86,36,93,37,181,169,54,167,42,40,71,52,189,252,
    139,113,104,57,95,225,63,204,100,58,229,82,109,116,149,45,
    168,143,143,108,65,241,52,184,129,165,190,197,165,254,125,42,
    245,143,89,1,142,161,171,253,49,64,11,153,30,22,177,9,
    228,11,39,167,11,93,201,211,174,220,225,80,6,158,125,7,
    242,197,57,191,158,34,14,40,120,158,66,174,98,50,197,85,
    172,198,207,123,35,165,136,156,140,108,202,66,230,127,211,53,
    42,163,247,111,41,122,107,116,49,50,206,19,246,125,106,56,
    51,100,73,193,254,101,102,146,91,19,208,164,43,174,189,163,
    118,91,70,13,255,123,73,167,193,215,13,193,250,141,115,209,
    89,178,218,152,152,213,15,59,68,223,243,127,247,152,185,254,
    167,247,196,82,95,163,102,52,46,24,47,24,255,101,24,14,
    31,71,210,99,158,175,27,67,124,23,199,124,83,186,170,94,
    60,239,137,219,121,66,70,137,153,249,107,7,17,247,202,152,
    123,246,66,173,79,204,28,184,47,127,131,202,98,174,151,189,
    35,102,148,7,146,231,243,227,252,224,114,30,201,187,140,135,
    126,62,167,114,164,227,38,159,250,158,234,94,104,146,252,251,
    212,36,57,218,57,96,240,42,97,52,202,41,237,53,67,82,
    236,156,37,171,119,38,102,169,68,149,159,135,71,228,1,123,
    190,210,220,223,100,28,45,193,103,181,243,239,216,219,57,56,
    123,178,47,149,204,199,37,182,100,114,143,229,225,150,162,112,
    228,56,250,72,142,207,125,199,153,118,97,245,139,196,191,99,
    82,41,22,86,162,136,165,213,170,152,248,53,74,197,146,224,
    74,118,226,127,59,122,167,52,87,31,69,71,177,205,169,110,
    49,139,4,252,127,136,180,146,164,160,193,151,40,251,238,64,
    223,29,243,141,168,77,26,231,251,42,251,189,44,162,208,125,
    30,159,255,245,173,11,6,120,174,178,185,168,182,63,36,58,
    93,223,13,118,119,82,209,118,180,104,123,145,27,180,186,228,
    128,62,85,233,252,255,144,193,46,163,240,252,224,134,63,208,
    247,237,106,105,226,189,23,185,216,95,157,160,198,50,242,221,
    62,5,34,146,43,37,243,176,139,87,167,189,239,209,227,215,
    88,120,115,25,59,78,219,12,131,72,118,16,164,168,29,226,
    49,49,59,201,101,100,35,190,60,204,131,50,63,119,202,160,
    209,7,70,125,239,245,128,188,55,254,12,27,186,43,47,45,
    150,16,64,148,222,76,81,198,4,103,153,243,149,146,53,63,
    87,178,74,51,38,95,105,46,136,21,163,108,149,230,230,133,
    254,221,66,96,149,141,173,107,37,241,111,25,252,190,102,
};

EmbeddedPython embedded_m5_internal_param_LTAGE(
    "m5/internal/param_LTAGE.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_LTAGE.py",
    "m5.internal.param_LTAGE",
    data_m5_internal_param_LTAGE,
    2463,
    7646);

} // anonymous namespace