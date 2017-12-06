#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_OpDesc[] = {
    120,156,197,88,91,115,219,198,21,62,11,128,148,72,81,22,
    117,183,46,142,152,118,220,176,158,74,76,156,40,78,39,170,
    155,52,77,103,154,233,200,41,152,142,29,198,83,20,34,150,
    36,40,18,224,0,43,203,204,72,47,149,167,237,67,95,251,
    19,250,208,127,211,127,212,156,115,22,0,33,202,202,100,166,
    45,237,136,155,197,94,206,158,203,119,46,187,109,72,254,21,
    240,247,73,13,32,142,4,128,135,127,2,6,0,67,1,45,
    1,66,10,240,214,224,180,0,209,7,224,21,224,21,64,203,
    0,105,192,21,118,76,248,198,128,160,194,123,138,48,48,121,
    68,192,184,12,210,130,86,1,158,6,203,96,201,34,156,150,
    33,250,19,8,33,2,1,207,188,57,240,230,225,21,82,199,
    78,137,9,206,3,13,150,121,176,4,222,2,15,150,193,171,
    112,103,1,198,85,144,21,104,45,210,178,214,29,36,251,0,
    201,46,49,217,127,19,89,15,103,214,193,187,67,203,145,175,
    175,105,165,69,43,249,188,37,166,82,77,185,92,134,214,74,
    218,95,205,245,215,114,253,117,238,227,169,43,208,223,128,254,
    38,244,239,66,7,21,177,156,157,176,5,210,132,254,54,180,
    182,65,226,223,22,92,161,174,188,149,220,142,29,222,177,154,
    237,216,229,29,247,160,117,15,36,254,237,234,29,69,104,214,
    55,80,255,254,127,240,95,29,245,15,170,130,205,11,25,197,
    126,24,56,126,208,9,125,131,230,139,212,144,181,218,212,204,
    37,102,251,140,204,246,47,96,155,121,70,98,182,75,64,194,
    130,100,25,24,112,201,157,75,3,198,117,184,16,208,183,192,
    51,225,2,143,41,16,3,93,1,87,6,60,55,105,193,37,
    182,22,42,247,45,176,148,182,89,159,149,171,41,205,193,101,
    1,46,10,208,124,118,97,208,192,105,9,162,127,194,183,187,
    76,116,158,137,26,112,129,173,5,87,22,92,22,225,41,46,
    194,161,126,137,196,23,207,46,80,82,28,105,214,45,228,246,
    56,39,46,137,226,249,81,224,14,165,90,196,190,51,114,35,
    119,232,60,25,253,90,198,237,122,57,93,18,198,7,35,87,
    245,108,222,99,146,50,134,35,197,180,194,64,170,5,236,116,
    252,192,115,134,161,119,54,144,106,158,8,57,29,127,32,29,
    135,39,127,59,28,133,145,250,60,138,194,200,38,125,242,224,
    32,116,179,29,164,205,246,32,140,101,157,78,227,99,108,34,
    175,104,117,103,196,20,137,1,230,147,54,123,200,94,228,143,
    20,154,73,83,164,213,68,173,78,6,226,38,126,142,77,99,
    24,168,70,175,219,137,27,205,158,27,201,102,79,6,141,174,
    28,30,238,135,145,223,245,131,253,88,185,39,3,185,255,240,
    221,247,14,247,127,190,255,126,227,228,204,31,120,141,151,31,
    125,216,24,141,85,47,12,26,195,195,134,31,40,137,26,26,
    52,242,186,57,192,249,21,58,229,220,239,58,62,203,231,244,
    228,96,36,35,82,99,188,77,28,136,170,168,136,162,48,69,
    93,44,98,175,128,63,83,236,26,11,226,216,39,9,219,36,
    53,33,203,202,99,137,12,44,224,212,128,104,151,144,210,199,
    63,65,166,69,188,52,105,206,224,185,223,147,106,244,104,223,
    36,251,235,193,11,70,23,194,12,87,30,145,193,3,96,136,
    20,160,95,4,13,29,68,156,198,82,52,166,22,151,19,25,
    3,137,91,16,255,3,80,213,8,154,11,72,0,117,101,130,
    8,170,160,202,228,211,56,186,129,7,254,153,49,217,172,19,
    251,199,12,15,213,243,227,240,60,96,35,80,159,189,168,137,
    154,249,114,252,228,164,47,219,42,222,195,129,175,195,179,90,
    219,13,130,80,213,92,207,171,185,74,69,254,201,153,146,113,
    77,133,181,251,113,157,236,106,47,167,8,203,232,141,71,41,
    162,200,250,136,40,253,225,249,109,133,31,171,252,193,86,136,
    165,66,116,244,66,47,198,113,34,209,149,202,38,38,21,41,
    57,100,70,24,60,14,45,165,227,113,221,29,252,254,52,229,
    132,17,90,47,166,120,138,229,160,163,202,12,77,55,142,29,
    230,132,198,25,133,68,248,133,59,56,147,76,29,113,164,144,
    33,234,106,30,102,137,195,187,36,83,170,2,150,43,8,3,
    111,140,108,250,237,119,136,131,187,140,198,10,227,113,29,177,
    56,135,109,17,255,95,20,27,70,219,74,16,88,76,81,72,
    17,81,1,99,64,36,48,64,68,94,97,244,169,27,28,62,
    88,52,246,209,31,81,143,54,219,187,212,220,163,230,45,106,
    246,82,233,103,164,130,197,105,21,60,162,99,13,150,155,37,
    36,115,153,169,132,222,53,63,219,154,248,25,6,203,38,249,
    139,65,94,53,241,23,139,2,107,244,152,90,92,202,158,104,
    66,252,21,133,113,242,43,38,70,46,132,206,64,189,137,139,
    176,190,236,42,233,97,62,69,183,77,144,205,227,182,155,195,
    173,77,166,98,208,218,91,105,160,116,104,133,134,171,189,67,
    164,10,175,81,120,141,154,183,103,172,245,9,240,186,55,128,
    247,49,113,80,77,128,183,200,128,43,227,175,106,180,205,196,
    20,89,10,93,157,2,28,161,205,122,13,218,126,66,61,243,
    166,240,111,6,104,137,200,191,201,1,141,184,52,242,146,29,
    99,103,188,73,2,229,33,182,137,101,193,211,96,19,51,189,
    193,153,254,93,206,244,92,45,112,205,164,131,184,201,113,92,
    119,10,164,153,142,9,27,73,6,143,75,216,142,162,240,229,
    184,22,118,106,138,69,167,152,123,116,63,62,184,31,127,140,
    209,180,246,152,227,152,142,167,58,98,70,114,68,17,143,182,
    126,254,178,45,57,121,242,151,227,232,0,231,112,176,115,146,
    164,140,104,91,39,189,26,169,194,57,212,199,42,162,8,63,
    75,149,151,51,149,147,4,95,208,153,101,214,183,41,54,17,
    89,101,193,140,57,58,192,115,129,198,179,248,251,21,217,128,
    132,151,64,229,180,221,212,108,179,68,36,155,253,179,107,232,
    153,141,60,118,3,15,248,67,138,154,226,4,53,244,51,83,
    127,248,43,112,5,43,224,47,64,184,64,243,39,254,144,185,
    15,1,97,149,150,255,17,216,113,94,83,53,112,44,106,82,
    165,192,43,48,68,197,143,120,169,46,34,190,128,191,229,188,
    46,77,245,102,82,163,230,83,189,149,197,49,6,212,15,74,
    231,214,245,128,71,54,234,185,49,45,211,81,108,226,200,147,
    140,145,213,151,24,197,103,132,174,121,125,154,67,140,61,159,
    96,139,146,229,142,88,53,114,136,121,143,154,135,25,88,68,
    58,246,255,231,113,15,110,79,240,142,206,29,223,16,35,22,
    179,190,52,199,117,136,222,158,249,67,33,245,135,135,153,63,
    72,78,112,175,248,254,66,173,65,150,191,50,4,94,36,177,
    218,163,123,155,5,178,0,173,34,121,14,151,232,34,113,44,
    145,6,56,10,135,215,178,39,171,229,88,43,44,51,190,182,
    43,53,47,103,25,56,200,180,71,3,119,120,226,185,143,79,
    233,68,58,182,157,186,154,145,202,80,205,203,64,110,34,110,
    19,131,63,15,83,89,94,204,50,104,124,136,7,100,50,176,
    139,120,97,155,35,197,87,61,89,27,202,225,9,94,90,123,
    254,168,214,25,184,93,182,147,153,200,248,36,149,81,177,161,
    167,171,147,248,1,181,97,173,29,6,24,219,207,218,42,140,
    106,158,196,235,156,244,106,251,53,78,12,53,63,174,185,39,
    56,235,182,149,134,253,117,7,230,162,216,141,186,49,227,238,
    244,156,186,179,182,179,131,183,117,31,47,4,67,200,210,177,
    190,75,102,113,158,75,125,237,69,152,57,241,162,166,198,58,
    162,81,165,98,31,80,243,83,120,3,233,224,3,96,236,65,
    76,202,43,138,29,163,100,240,253,73,175,248,146,86,199,55,
    189,248,239,63,196,139,245,67,80,226,203,69,90,41,231,232,
    189,128,218,18,165,131,86,57,29,92,224,182,194,131,139,233,
    224,29,110,151,120,176,154,62,64,45,243,224,10,180,86,233,
    181,134,70,214,40,62,204,253,183,241,129,29,107,214,46,165,
    254,167,97,193,126,244,38,69,176,63,130,164,120,184,45,36,
    136,188,124,139,122,111,95,164,119,154,188,112,252,166,178,58,
    133,66,167,29,73,87,73,109,173,221,217,138,202,161,69,159,
    127,62,113,241,155,21,247,167,153,84,87,92,56,141,215,216,
    136,250,66,199,70,20,79,131,109,44,189,45,46,189,143,168,
    244,190,96,21,56,134,174,190,39,32,45,100,154,32,44,4,
    242,220,201,107,67,151,214,196,150,59,26,201,192,179,31,64,
    190,90,230,233,89,98,129,194,216,37,228,10,24,83,172,97,
    121,124,211,39,41,90,231,164,100,107,22,50,47,156,177,93,
    25,194,175,82,8,215,57,90,103,33,219,62,162,134,131,116,
    22,159,237,95,102,86,185,59,141,207,112,244,25,95,100,240,
    106,118,251,36,150,80,250,77,83,127,171,141,155,11,127,231,
    42,166,113,203,20,81,40,48,5,252,82,219,211,139,70,254,
    72,14,40,127,50,141,239,153,38,58,124,145,75,71,216,134,
    236,118,158,28,72,37,175,225,141,65,152,60,25,120,18,179,
    113,56,198,27,27,95,125,240,123,224,56,51,207,92,191,72,
    204,22,211,67,40,102,46,81,196,220,181,142,87,253,117,163,
    84,44,9,46,16,166,222,207,53,123,84,240,235,50,127,28,
    219,28,186,150,50,163,242,83,111,154,159,201,254,172,162,99,
    119,168,95,231,248,201,201,254,49,36,207,1,246,59,25,56,
    232,189,132,239,86,250,78,139,238,202,197,11,215,42,246,251,
    41,94,134,135,7,169,60,7,50,56,35,113,52,12,12,158,
    84,59,83,107,180,204,77,127,168,31,50,213,242,212,188,23,
    185,216,95,159,26,141,101,228,187,3,255,91,253,114,153,14,
    43,146,114,154,32,49,155,125,113,49,144,139,187,108,237,72,
    118,253,24,41,240,246,108,105,18,132,200,6,106,107,26,99,
    249,109,179,134,133,46,187,245,27,194,99,122,191,138,63,193,
    134,158,30,75,75,37,132,8,5,38,19,111,237,139,194,50,
    43,213,146,85,89,40,89,165,57,147,223,135,22,241,198,85,
    182,74,11,21,161,255,219,67,24,149,141,189,149,146,248,14,
    83,226,254,171,
};

EmbeddedPython embedded_m5_internal_param_OpDesc(
    "m5/internal/param_OpDesc.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_OpDesc.py",
    "m5.internal.param_OpDesc",
    data_m5_internal_param_OpDesc,
    2276,
    6960);

} // anonymous namespace