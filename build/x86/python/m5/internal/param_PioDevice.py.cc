#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PioDevice[] = {
    120,156,197,88,239,114,219,198,17,223,3,64,74,164,40,137,
    178,44,201,182,100,11,142,227,134,245,84,98,226,68,113,58,
    113,61,117,147,116,38,153,137,226,130,233,216,97,50,69,33,
    226,72,130,34,1,22,56,201,166,43,205,116,42,79,211,23,
    232,35,244,67,95,164,159,251,70,237,238,30,1,65,148,148,
    73,167,29,202,17,47,135,187,189,189,219,221,223,254,185,107,
    193,248,95,1,127,191,180,1,146,127,10,0,31,255,4,244,
    1,6,2,154,2,132,20,224,95,135,253,2,196,31,128,95,
    128,55,0,77,3,164,1,39,216,49,225,91,3,194,10,175,
    41,66,223,228,17,1,163,50,72,11,154,5,120,30,46,129,
    37,139,176,95,134,248,247,32,132,8,5,188,240,103,192,159,
    133,55,200,29,59,37,102,56,11,52,88,230,193,18,248,115,
    60,88,6,191,194,157,57,24,85,65,86,160,57,79,100,205,
    5,100,251,0,217,46,50,219,127,17,91,31,103,86,192,95,
    32,114,60,215,55,68,105,17,37,239,183,200,92,170,233,41,
    151,160,121,45,237,47,231,250,215,115,253,149,92,127,53,215,
    95,203,245,111,228,250,55,115,253,91,185,254,122,174,191,193,
    125,148,228,26,244,110,67,239,14,244,54,161,141,202,93,202,
    78,109,131,52,161,119,23,154,119,65,226,159,13,39,168,127,
    255,90,110,197,91,188,98,57,91,113,143,87,188,13,205,183,
    65,226,223,61,189,162,8,141,218,42,218,52,248,55,254,171,
    161,77,65,85,176,57,148,113,18,68,161,27,132,237,40,48,
    104,190,72,13,33,160,69,205,204,24,10,159,16,20,254,1,
    140,3,223,24,67,225,24,144,177,32,89,250,6,28,115,231,
    216,128,81,13,142,4,244,44,240,77,56,194,109,10,116,128,
    142,128,19,3,190,51,137,224,24,91,11,13,118,7,44,165,
    113,208,99,131,105,78,51,112,92,128,163,2,52,94,28,25,
    52,176,95,130,248,239,240,122,131,153,206,50,83,3,142,176,
    181,224,196,130,227,34,60,71,34,28,234,149,72,124,241,226,
    8,37,197,145,70,205,194,211,238,230,196,37,81,252,32,14,
    189,129,84,85,236,187,67,47,246,6,238,179,32,250,84,30,
    6,45,89,43,167,84,81,178,61,244,84,215,225,101,38,233,
    99,48,84,204,46,10,165,154,195,78,59,8,125,119,16,249,
    7,125,169,102,137,151,219,14,250,210,117,121,242,243,193,48,
    138,213,103,113,28,197,14,169,148,7,251,145,151,173,32,133,
    182,250,81,34,107,180,27,111,227,16,123,69,212,237,33,115,
    164,3,240,81,105,177,47,147,86,28,12,21,90,74,115,36,
    106,226,86,35,27,113,147,184,216,212,7,161,170,119,59,237,
    164,222,232,122,177,108,116,101,88,239,200,193,206,86,20,7,
    157,32,220,74,148,183,215,151,91,15,223,125,111,103,235,231,
    91,239,215,247,14,130,190,95,127,245,209,135,245,225,72,117,
    163,176,62,216,169,7,161,146,168,164,126,125,66,61,219,72,
    114,141,54,122,25,116,220,128,69,116,187,178,63,148,241,60,
    141,222,162,67,136,170,168,136,162,48,69,77,204,99,175,128,
    63,83,108,24,115,98,55,32,33,91,36,56,225,203,202,35,
    138,204,44,96,223,128,120,131,240,210,195,63,65,6,70,212,
    52,104,206,224,185,223,144,118,244,104,207,36,20,232,193,35,
    198,24,130,13,41,31,147,217,67,96,160,20,160,87,4,13,
    32,196,157,70,84,60,162,22,201,137,141,129,204,45,72,254,
    6,168,109,132,206,17,140,97,117,98,130,8,171,160,202,20,
    45,112,116,21,55,252,51,35,179,81,163,227,239,50,66,84,
    55,72,162,151,33,219,129,250,236,75,13,212,204,179,209,87,
    123,61,217,82,201,38,14,124,19,29,216,45,47,12,35,101,
    123,190,111,123,74,197,193,222,129,146,137,173,34,251,126,82,
    35,211,58,75,41,200,50,126,163,97,10,42,2,0,130,74,
    127,248,65,75,225,199,50,127,176,21,18,169,16,32,221,200,
    79,112,156,88,116,164,114,232,144,138,148,28,241,65,24,63,
    46,145,210,246,72,183,128,223,79,211,147,48,72,107,197,20,
    82,137,236,183,85,153,209,233,37,137,203,39,161,113,6,34,
    49,62,244,250,7,146,185,35,148,20,30,136,186,250,12,83,
    134,226,13,18,43,213,2,139,22,70,161,63,194,147,6,173,
    119,232,16,55,24,144,21,134,228,10,194,113,6,219,34,254,
    191,40,86,141,150,53,6,97,49,5,34,133,70,5,12,3,
    49,70,2,130,242,4,195,80,205,224,56,194,210,177,167,190,
    69,61,90,236,108,80,115,155,154,59,212,108,166,10,152,158,
    22,230,39,181,240,136,118,54,88,116,22,146,140,102,166,66,
    250,103,188,237,230,169,183,97,224,108,144,215,24,228,91,167,
    94,99,81,144,141,159,80,139,164,236,143,38,36,95,83,72,
    39,239,98,102,228,72,232,18,212,59,117,20,86,153,67,65,
    182,54,155,98,220,33,224,230,209,219,201,161,215,33,107,49,
    116,157,155,105,196,116,137,66,131,214,89,39,86,133,11,116,
    110,83,115,119,250,138,63,133,95,231,28,252,62,166,67,84,
    199,240,155,103,216,149,241,87,53,90,230,216,26,89,70,93,
    158,128,29,97,206,186,0,115,63,161,158,121,94,254,43,131,
    219,88,234,95,231,224,70,7,53,242,194,237,98,103,180,70,
    50,229,129,182,134,133,194,243,112,13,115,191,193,185,255,93,
    206,253,92,63,112,101,166,3,186,201,49,93,119,10,164,156,
    182,9,171,227,156,158,148,176,29,198,209,171,145,29,181,109,
    197,210,83,252,125,124,63,217,190,159,124,140,145,213,126,194,
    49,77,199,86,29,61,99,57,164,232,71,75,63,123,213,146,
    156,75,249,203,117,117,176,115,57,240,185,227,28,141,152,91,
    33,213,26,169,206,57,236,39,42,166,104,63,101,173,151,51,
    173,147,16,95,208,182,101,86,185,41,214,16,95,101,193,103,
    115,117,188,231,170,141,103,241,247,43,50,3,201,47,129,234,
    118,167,161,79,206,66,145,120,206,207,206,96,104,106,34,57,
    117,220,227,183,41,118,138,167,216,161,159,153,58,198,247,192,
    149,173,128,191,0,161,3,65,48,118,140,204,143,8,14,203,
    68,254,59,96,15,186,160,142,224,184,212,160,218,129,41,48,
    92,37,143,152,84,151,21,95,192,95,115,238,151,38,127,115,
    92,187,230,147,191,149,197,52,134,213,143,74,240,214,217,224,
    71,102,234,122,9,145,233,136,118,234,209,167,9,36,43,58,
    49,162,79,15,99,179,122,67,151,206,246,221,41,194,40,125,
    174,139,101,35,135,155,247,168,121,152,65,70,164,99,83,57,
    230,38,92,158,245,93,157,77,190,165,179,88,124,250,197,25,
    246,240,140,67,230,27,133,212,55,30,102,190,33,57,235,189,
    225,11,14,181,6,65,224,196,16,120,123,197,66,144,46,139,
    22,200,2,52,139,228,69,92,192,139,177,147,137,52,222,81,
    116,60,147,82,89,57,187,90,109,25,10,180,129,169,121,53,
    229,56,66,54,126,220,247,6,123,190,247,36,166,77,105,231,
    86,234,118,70,42,70,53,47,6,185,140,184,76,18,254,220,
    73,197,57,156,114,12,249,16,247,200,196,96,143,241,163,22,
    7,142,175,187,210,30,200,193,30,222,109,187,193,208,110,247,
    189,14,91,203,28,139,249,85,42,166,98,115,79,22,46,201,
    3,106,35,187,21,133,24,240,15,90,42,138,109,95,226,149,
    79,250,246,150,205,217,194,14,18,219,219,195,89,175,165,180,
    11,156,245,103,174,154,189,184,147,112,129,188,255,146,186,87,
    96,109,23,239,245,1,93,26,32,75,211,250,202,153,5,127,
    190,14,104,143,194,140,138,151,57,53,210,49,142,138,24,103,
    155,154,159,194,213,228,136,15,112,143,63,208,102,164,194,162,
    88,55,74,134,90,204,187,243,51,90,147,156,119,234,240,199,
    56,181,126,140,66,2,89,132,222,12,183,179,148,29,154,165,
    116,176,204,237,28,15,86,210,32,48,207,131,11,208,92,76,
    31,190,170,20,16,138,255,107,64,96,55,186,2,7,250,227,
    255,53,14,56,143,174,88,10,231,35,24,23,15,151,197,128,
    51,21,234,83,29,3,180,117,176,196,24,93,103,137,245,53,
    136,37,22,207,195,91,88,170,90,92,170,62,166,82,245,136,
    203,89,215,208,213,234,169,81,249,118,194,143,51,180,125,40,
    95,186,19,64,213,213,40,33,197,27,14,101,232,59,15,32,
    95,96,242,244,148,117,71,78,254,39,200,101,123,83,92,199,
    138,242,60,146,41,156,229,100,101,196,22,50,236,110,92,141,
    213,191,79,173,94,91,58,19,211,156,199,212,84,207,4,48,
    109,153,91,231,195,135,155,140,18,37,7,116,161,249,161,105,
    44,55,244,179,7,127,170,173,11,40,249,69,108,24,68,46,
    230,141,16,43,113,122,86,109,69,7,161,98,222,255,221,10,
    218,142,46,194,151,82,176,233,20,189,90,248,178,47,149,156,
    4,155,126,225,212,129,221,151,152,168,162,17,166,1,190,39,
    224,119,223,117,175,34,162,255,2,247,120,77,155,45,232,136,
    142,151,226,21,177,98,148,138,37,193,169,115,226,1,90,159,
    238,62,164,245,240,40,113,216,199,23,51,123,242,67,105,154,
    182,200,234,92,239,237,122,3,253,176,197,79,53,206,61,24,
    95,160,157,119,50,72,144,110,249,18,162,175,128,232,173,156,
    214,57,139,59,239,211,56,93,240,7,59,219,169,56,219,90,
    156,134,54,191,193,147,106,125,130,70,134,7,3,247,75,57,
    136,226,209,151,145,47,213,198,196,252,83,223,143,29,47,236,
    72,247,80,82,85,161,238,78,18,140,75,10,205,35,165,178,
    47,60,202,89,218,115,103,209,68,56,169,223,35,185,114,62,
    63,255,73,63,106,237,75,127,76,115,251,114,154,79,163,129,
    135,227,23,239,210,8,210,93,150,38,230,253,152,86,173,76,
    140,38,50,14,188,126,240,90,63,115,166,195,156,220,39,143,
    77,230,201,190,184,36,96,208,103,176,98,132,199,178,19,160,
    93,98,230,144,81,143,163,46,129,142,45,113,206,179,115,43,
    175,192,27,116,57,174,95,27,158,208,123,23,191,151,208,107,
    101,105,177,36,138,6,5,99,19,47,247,243,194,50,43,213,
    146,85,153,43,89,165,25,147,31,147,230,241,74,86,182,74,
    115,21,113,209,127,155,232,79,101,99,115,161,36,254,3,194,
    147,76,211,
};

EmbeddedPython embedded_m5_internal_param_PioDevice(
    "m5/internal/param_PioDevice.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_PioDevice.py",
    "m5.internal.param_PioDevice",
    data_m5_internal_param_PioDevice,
    2323,
    7118);

} // anonymous namespace