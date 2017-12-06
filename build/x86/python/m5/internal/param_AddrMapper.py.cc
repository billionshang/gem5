#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_AddrMapper[] = {
    120,156,197,88,109,115,219,198,17,222,3,64,74,164,222,40,
    235,205,182,100,139,77,199,13,235,169,68,219,137,226,116,162,
    122,234,38,233,76,51,19,37,5,211,177,195,100,138,64,196,
    145,4,5,2,28,224,36,155,169,244,37,242,180,157,126,239,
    79,232,135,254,155,254,163,102,119,15,0,161,183,78,210,118,
    36,153,56,31,14,123,123,251,242,236,222,222,117,32,253,43,
    225,243,235,58,64,242,55,1,224,225,79,64,0,48,20,208,
    22,32,164,0,111,25,14,74,16,191,11,94,9,222,0,180,
    13,144,6,156,98,199,132,175,12,8,103,121,78,25,2,147,
    71,4,140,171,32,45,104,151,224,69,184,8,150,44,195,65,
    21,226,111,64,8,17,10,120,233,77,129,55,13,111,144,59,
    118,42,204,112,26,104,176,202,131,21,240,102,120,176,10,222,
    44,119,102,96,92,3,57,11,237,57,34,107,207,35,219,135,
    200,118,129,217,254,139,216,122,248,101,5,188,121,34,71,185,
    190,36,74,139,40,121,189,5,230,82,203,164,92,132,246,173,
    172,191,84,232,47,23,250,43,133,254,106,161,191,198,125,148,
    230,22,12,110,195,224,14,12,238,66,23,13,180,152,175,188,
    14,210,132,193,6,180,55,64,226,111,29,78,209,134,222,173,
    194,140,123,60,99,41,159,113,159,103,108,66,123,19,36,254,
    238,235,25,101,104,53,86,209,47,254,191,241,175,129,126,1,
    53,139,205,145,140,19,63,10,29,63,236,70,190,65,223,203,
    212,144,23,59,212,76,165,238,252,144,220,249,79,96,95,122,
    70,234,206,19,64,198,130,116,9,12,56,225,206,137,1,227,
    6,28,11,24,88,224,153,112,140,203,148,72,128,158,128,83,
    3,190,54,137,224,4,91,11,141,126,31,44,165,125,57,96,
    163,107,78,83,112,82,130,227,18,180,94,30,27,52,112,80,
    129,248,31,240,237,6,51,157,102,166,6,28,99,107,193,169,
    5,39,101,120,129,68,56,52,168,144,250,226,229,49,106,138,
    35,173,134,133,210,238,21,212,37,85,60,63,14,221,161,84,
    139,216,119,70,110,236,14,157,231,158,23,127,234,142,70,50,
    110,84,51,178,40,217,30,185,170,111,243,60,147,12,50,28,
    41,230,23,133,82,205,96,167,235,135,158,51,140,188,195,64,
    170,105,98,230,116,253,64,58,14,127,252,221,112,20,197,234,
    227,56,142,98,155,108,202,131,65,228,230,51,200,162,157,32,
    74,100,131,86,227,101,108,98,175,136,186,59,98,142,36,0,
    203,74,147,61,153,116,98,127,164,208,85,154,35,81,19,183,
    6,57,137,155,228,27,108,154,195,80,53,251,189,110,210,108,
    245,221,88,182,250,50,108,246,228,112,103,43,138,253,158,31,
    110,37,202,221,15,228,214,147,71,143,119,182,126,185,245,78,
    115,255,208,15,188,230,235,247,223,107,142,198,170,31,133,205,
    225,78,211,15,149,68,43,5,205,243,246,217,70,154,91,180,
    210,43,191,231,248,172,163,211,151,1,126,153,163,209,187,36,
    133,168,137,89,81,22,166,104,136,57,236,149,240,49,197,134,
    49,35,246,124,210,178,67,154,19,194,172,34,166,200,209,2,
    14,12,136,55,8,49,3,252,9,114,49,226,166,69,223,12,
    254,246,123,50,143,30,29,152,132,3,61,120,204,40,67,184,
    33,229,46,57,62,4,134,74,9,6,101,208,16,66,228,105,
    76,197,99,106,145,156,216,24,200,220,130,228,239,128,230,70,
    240,28,67,10,172,83,19,68,88,3,85,165,152,199,209,85,
    92,240,59,198,102,171,65,226,239,49,68,84,223,79,162,87,
    33,59,130,250,28,77,45,180,204,231,227,207,246,7,178,163,
    146,77,28,248,50,58,172,119,220,48,140,84,221,245,188,186,
    171,84,236,239,31,42,153,212,85,84,127,144,52,200,183,246,
    98,134,178,156,223,120,148,161,138,16,128,168,210,47,158,223,
    81,248,178,196,47,236,133,68,42,68,72,63,242,18,28,39,
    22,61,169,108,18,82,145,145,35,22,132,1,228,16,41,45,
    143,116,243,248,254,60,147,132,81,218,40,103,152,74,100,208,
    85,85,134,167,155,36,14,75,66,227,140,68,98,124,228,6,
    135,146,185,35,150,20,10,68,93,45,195,117,99,241,54,233,
    149,153,129,117,11,163,208,27,163,168,126,231,109,146,226,54,
    35,114,150,49,185,130,120,156,194,182,140,255,151,197,170,209,
    177,82,20,150,51,36,82,118,84,192,56,16,41,20,16,149,
    167,152,137,26,6,167,18,86,143,99,245,45,234,209,100,123,
    131,154,123,212,220,167,102,51,179,192,53,154,97,238,188,25,
    158,210,210,6,235,206,90,146,219,204,76,75,239,76,188,221,
    153,196,27,38,207,22,197,141,65,209,53,137,27,139,18,109,
    252,140,90,36,229,136,52,33,249,130,210,58,197,23,51,163,
    80,194,160,160,222,36,84,216,102,118,141,108,49,157,161,220,
    38,232,22,241,219,43,224,215,38,119,49,120,237,59,89,210,
    116,136,66,195,214,94,39,86,165,75,140,94,167,230,39,55,
    96,249,9,0,123,23,0,248,1,73,81,75,1,56,199,192,
    171,226,83,51,58,102,234,142,124,91,93,58,7,60,66,157,
    117,9,234,126,70,61,243,162,1,110,14,112,169,218,191,45,
    0,142,36,53,138,218,237,97,103,188,70,74,21,161,182,134,
    229,194,139,112,13,43,0,131,43,128,71,92,1,112,21,193,
    53,150,78,234,38,231,117,221,41,145,117,186,38,172,166,59,
    123,82,193,118,20,71,175,199,245,168,91,87,172,62,229,224,
    221,7,201,246,131,228,3,204,174,245,103,156,215,116,126,213,
    25,52,150,35,202,128,52,245,227,215,29,201,27,42,191,57,
    142,78,120,14,39,63,39,221,168,17,117,43,100,91,35,51,
    58,167,254,68,197,148,241,175,219,236,213,220,236,164,197,39,
    180,110,149,109,110,138,53,68,88,85,176,112,142,78,250,92,
    188,241,87,124,126,67,126,32,3,72,160,18,220,110,105,209,
    89,43,210,207,254,197,25,20,93,159,78,118,19,23,249,67,
    134,158,242,4,61,244,152,89,108,252,5,184,194,21,240,103,
    32,124,32,12,210,216,200,67,137,0,177,68,228,127,4,14,
    162,75,170,9,206,77,45,170,32,152,2,83,86,242,148,73,
    117,113,241,9,252,181,16,129,89,9,96,166,53,108,177,4,
    176,242,188,198,192,250,65,219,188,117,54,1,146,159,250,110,
    66,100,58,171,77,130,122,178,139,228,181,39,102,245,107,68,
    217,180,94,209,33,225,190,158,96,140,54,209,117,177,100,20,
    144,243,152,154,39,57,104,68,54,118,61,114,110,194,213,155,
    191,163,247,148,175,72,24,139,197,95,152,226,240,153,176,200,
    227,163,148,197,199,147,60,62,36,111,126,111,248,172,67,173,
    65,40,56,53,4,30,70,177,34,164,179,159,5,178,4,237,
    50,69,18,151,242,34,13,52,145,37,61,74,145,103,118,86,
    54,207,158,54,92,14,4,237,99,106,94,95,119,50,33,55,
    239,6,238,112,223,115,159,13,105,85,90,186,147,133,158,145,
    233,81,43,234,65,97,35,174,82,133,95,119,50,125,142,174,
    59,145,188,135,139,228,122,112,216,120,81,135,179,199,23,125,
    89,31,202,225,62,30,116,251,254,168,222,13,220,30,251,203,
    76,245,252,44,211,83,177,195,207,87,48,201,67,106,163,122,
    39,10,49,239,31,118,84,20,215,61,137,199,63,233,213,183,
    234,188,105,212,253,164,238,238,227,87,183,163,116,24,156,13,
    106,46,160,221,184,151,112,173,124,240,138,186,55,225,111,7,
    79,249,62,30,32,34,200,183,107,125,254,204,247,0,62,26,
    232,168,194,157,21,167,170,177,206,116,84,205,216,219,212,252,
    28,110,104,171,120,23,23,9,104,53,50,98,89,172,27,21,
    67,213,206,196,244,231,52,43,185,24,217,225,15,137,108,125,
    193,132,4,178,12,131,41,110,167,105,151,104,87,178,193,42,
    183,51,60,56,155,101,130,57,30,156,135,246,66,118,153,85,
    163,172,80,254,95,179,2,135,210,77,4,209,209,255,53,25,
    216,79,111,90,13,251,125,72,203,136,171,18,193,153,106,245,
    185,78,4,218,63,88,108,140,151,89,101,125,40,98,149,197,
    139,240,46,150,173,22,151,173,187,84,182,30,115,105,235,24,
    186,114,157,184,149,207,42,124,91,179,140,77,40,95,57,231,
    177,170,75,83,2,11,13,134,158,253,16,138,213,38,127,190,
    110,235,81,168,255,9,10,27,191,41,150,177,188,188,136,102,
    202,106,5,109,25,181,165,28,191,27,55,228,248,239,50,199,
    55,22,207,164,54,123,151,154,218,153,60,166,157,243,248,146,
    36,226,240,229,214,208,77,112,53,7,83,127,136,37,53,93,
    147,118,162,195,80,209,177,231,191,152,133,117,138,34,171,252,
    39,34,245,232,74,182,73,224,30,201,203,101,249,209,147,72,
    148,245,76,148,203,105,24,7,106,141,124,44,3,169,228,5,
    236,114,242,77,143,241,158,196,221,47,26,227,233,137,143,32,
    248,30,56,206,141,236,18,191,194,69,14,105,53,218,201,112,
    151,192,35,247,138,88,49,42,229,138,224,13,249,220,29,183,
    22,175,14,89,169,61,78,108,78,26,11,57,58,248,42,54,
    219,11,9,67,124,92,220,115,135,250,230,140,175,130,236,159,
    66,122,60,183,223,206,1,70,119,24,124,190,209,231,75,12,
    127,46,22,184,54,176,223,161,113,234,13,119,182,51,125,182,
    181,62,159,202,161,190,64,228,203,224,225,14,87,186,23,201,
    62,12,162,206,129,244,82,210,123,87,211,124,20,13,93,28,
    191,124,177,150,159,45,182,120,238,187,23,211,172,149,115,163,
    137,140,125,55,240,191,213,215,147,217,176,34,115,157,151,158,
    180,206,223,120,247,102,52,77,220,197,208,137,101,207,167,72,
    96,22,57,121,154,29,201,153,172,218,5,112,23,167,222,4,
    206,116,253,172,47,9,158,209,69,85,242,17,54,116,207,88,
    89,168,136,178,65,89,211,196,35,249,156,176,204,217,90,197,
    154,157,169,88,149,41,147,47,129,230,240,24,85,181,42,51,
    179,98,242,111,19,241,89,53,54,231,43,226,123,208,244,50,
    199,
};

EmbeddedPython embedded_m5_internal_param_AddrMapper(
    "m5/internal/param_AddrMapper.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_AddrMapper.py",
    "m5.internal.param_AddrMapper",
    data_m5_internal_param_AddrMapper,
    2257,
    6981);

} // anonymous namespace