#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_trace[] = {
    120,156,189,87,109,111,27,69,16,158,189,59,59,177,99,55,
    78,210,38,45,13,173,1,21,44,68,226,190,23,212,170,226,
    69,32,209,15,1,206,160,182,105,197,225,248,206,246,57,206,
    157,117,183,105,99,228,124,33,21,240,7,248,9,124,224,223,
    240,143,96,158,89,159,237,166,69,66,72,198,241,109,246,230,
    230,102,103,102,159,121,102,221,162,241,39,199,215,199,85,162,
    116,73,17,249,252,85,212,39,58,80,180,171,72,5,138,252,
    85,218,207,81,114,147,252,28,189,32,218,181,40,176,232,132,
    39,54,61,177,40,42,201,59,121,234,219,34,81,52,44,82,
    224,208,110,142,30,70,43,228,4,121,218,47,82,242,3,41,
    165,34,69,143,252,5,242,23,233,5,91,231,73,65,12,46,
    18,132,69,17,22,200,95,18,97,145,252,146,76,150,104,88,
    161,160,68,187,101,168,237,158,97,179,239,179,217,101,49,251,
    39,204,250,252,100,141,252,51,80,103,191,30,67,211,129,166,
    172,183,44,86,42,228,87,100,178,66,129,77,189,21,76,252,
    21,145,172,138,100,53,155,172,209,238,26,226,105,212,206,114,
    98,194,191,248,83,227,196,144,46,241,240,44,72,210,48,142,
    188,48,106,199,161,133,231,121,12,72,99,11,195,194,56,159,
    159,33,159,127,144,36,211,183,198,249,60,38,82,184,39,234,
    91,116,44,147,99,139,134,53,26,41,234,57,228,219,52,226,
    101,114,116,162,168,163,232,196,162,167,54,20,142,121,116,56,
    234,75,228,104,147,204,158,68,109,44,45,208,113,142,70,57,
    106,60,26,89,16,236,23,40,249,157,126,220,20,163,139,98,
    212,162,17,143,14,157,56,116,156,167,135,172,196,162,94,1,
    185,82,143,70,28,41,75,26,53,135,189,221,153,9,23,161,
    248,97,18,53,15,2,141,32,61,157,52,91,65,173,152,61,
    139,211,237,65,83,119,93,81,182,145,133,131,129,22,35,113,
    20,232,37,158,180,195,200,247,14,98,255,176,31,232,69,88,
    240,218,97,63,240,60,121,248,229,193,32,78,244,231,73,18,
    39,46,18,41,194,126,220,156,188,129,52,182,250,113,26,212,
    176,154,44,227,194,188,134,118,123,32,22,225,128,56,136,151,
    253,32,109,37,225,64,243,254,24,139,208,134,181,26,118,70,
    134,116,135,135,250,65,164,235,221,78,59,173,55,186,205,36,
    104,116,131,168,222,9,14,110,109,197,73,216,9,163,173,84,
    55,247,250,193,214,245,171,215,110,109,125,180,117,163,190,119,
    24,246,253,250,209,135,183,235,131,161,238,198,81,61,125,30,
    118,234,146,141,109,150,172,194,46,75,188,80,34,242,186,65,
    127,16,36,101,72,223,192,154,170,162,74,42,175,108,85,83,
    101,158,229,248,178,213,166,181,164,118,66,196,212,66,156,200,
    175,51,11,27,236,165,162,125,139,146,77,128,162,199,95,133,
    93,100,104,52,240,204,146,103,223,32,25,70,218,179,177,213,
    70,56,18,32,49,162,88,243,30,246,54,34,65,67,142,122,
    121,50,40,97,112,25,216,36,67,140,172,14,51,22,27,119,
    40,253,141,56,185,140,143,17,141,177,115,98,147,138,42,164,
    139,168,43,150,174,243,130,63,9,252,26,53,184,191,35,128,
    208,221,48,141,159,71,146,118,204,165,96,26,156,153,175,135,
    95,237,245,130,150,78,47,179,224,113,124,88,109,53,163,40,
    214,213,166,239,87,155,90,39,225,222,161,14,210,170,142,171,
    87,210,26,118,210,93,201,48,53,177,55,28,100,24,194,126,
    51,134,204,141,31,182,52,223,172,201,141,236,66,26,104,198,
    67,55,246,83,150,195,68,39,208,46,156,20,16,199,226,136,
    192,197,131,42,150,103,189,51,124,255,73,230,137,96,178,150,
    207,16,148,6,253,182,46,10,24,155,105,234,137,39,144,11,
    238,96,248,89,179,127,104,74,132,145,163,217,33,76,141,15,
    243,69,222,121,68,145,5,45,145,68,113,228,15,217,177,176,
    245,30,214,60,47,248,43,9,2,207,49,250,22,120,204,243,
    255,188,90,183,90,206,24,115,249,12,119,235,136,152,100,215,
    213,120,227,25,131,39,76,45,53,75,184,65,130,145,58,124,
    27,51,188,236,110,98,120,19,195,37,12,151,179,120,231,22,
    116,249,116,208,119,176,144,37,145,74,76,216,18,59,139,201,
    127,169,150,46,76,107,137,185,175,129,154,176,80,57,211,154,
    112,192,147,201,125,140,172,42,213,102,83,250,45,88,25,181,
    35,198,80,38,12,120,204,166,101,32,25,114,43,136,124,49,
    67,176,11,88,206,98,179,51,131,77,23,155,35,192,116,47,
    100,244,231,65,195,64,210,189,8,83,185,215,164,184,138,225,
    173,185,231,121,10,174,206,43,224,186,139,53,43,99,112,149,
    5,84,69,190,42,86,203,30,39,127,210,3,215,78,129,10,
    136,114,94,131,168,119,49,179,95,13,247,255,2,211,56,200,
    47,102,192,4,191,172,217,88,224,192,112,3,33,204,194,104,
    131,59,249,195,104,131,155,179,37,205,249,170,52,103,105,240,
    114,254,48,100,108,11,31,155,73,14,185,104,219,180,62,110,
    186,105,129,199,65,18,31,13,171,113,187,170,37,88,112,231,
    189,43,233,246,149,244,46,179,98,245,190,240,145,225,69,195,
    124,73,48,0,115,225,213,207,143,90,129,180,61,185,243,60,
    67,84,158,144,150,55,110,167,140,168,115,200,164,149,165,88,
    40,59,213,9,152,122,190,73,46,78,146,12,159,31,96,149,
    162,100,216,86,27,140,158,162,18,87,60,67,205,114,138,146,
    167,124,125,138,172,35,220,128,112,24,117,27,198,81,137,1,
    209,184,31,188,132,144,121,69,224,214,217,228,119,25,50,242,
    83,100,224,178,51,148,255,194,167,18,5,112,252,76,216,123,
    222,226,49,202,39,69,129,205,94,131,250,247,36,229,240,154,
    14,47,156,210,64,87,23,13,166,154,244,142,168,154,134,255,
    128,126,157,169,165,172,45,219,227,163,227,108,91,118,38,124,
    36,160,249,87,173,215,121,153,184,176,43,221,102,10,53,195,
    70,211,242,156,114,253,228,244,199,108,60,55,4,45,26,251,
    30,92,121,58,197,15,26,219,69,181,102,205,160,226,26,134,
    235,19,64,168,76,54,15,175,46,211,63,183,95,207,240,252,
    19,44,237,136,179,203,11,2,155,12,58,66,40,101,67,142,
    61,149,53,27,113,120,199,132,34,71,88,57,179,28,234,193,
    161,54,153,54,167,140,36,140,58,243,69,252,77,54,217,57,
    197,133,255,193,245,176,19,197,73,96,92,71,26,130,163,65,
    50,95,199,111,179,201,253,169,227,130,217,83,63,212,140,3,
    103,39,192,29,166,46,36,238,242,196,117,249,105,145,196,124,
    140,215,67,57,27,154,109,158,136,64,179,59,124,252,51,191,
    94,112,24,114,223,161,113,19,115,113,242,114,183,105,220,215,
    133,59,12,47,71,193,115,97,102,41,38,247,6,6,164,89,
    92,150,236,180,158,53,147,249,179,153,68,119,207,116,133,251,
    56,117,164,112,0,71,196,194,114,65,229,45,252,60,177,153,
    149,203,202,177,75,149,130,83,90,42,56,133,5,91,122,124,
    153,171,173,232,20,74,5,203,252,253,13,83,250,96,224,
};

EmbeddedPython embedded_m5_internal_trace(
    "m5/internal/trace.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/swig/trace.py",
    "m5.internal.trace",
    data_m5_internal_trace,
    1599,
    4164);

} // anonymous namespace