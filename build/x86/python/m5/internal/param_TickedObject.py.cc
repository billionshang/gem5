#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TickedObject[] = {
    120,156,197,88,253,114,219,198,17,223,3,64,74,164,40,139,
    178,44,201,182,100,139,109,199,13,235,169,196,196,137,226,116,
    162,120,154,175,206,52,127,40,41,232,142,29,37,83,20,34,
    142,36,40,16,224,0,39,91,204,80,237,76,229,105,251,2,
    125,132,254,209,183,233,27,181,187,123,0,8,74,242,76,102,
    218,17,101,226,124,56,236,237,237,199,111,247,246,174,3,233,
    95,9,159,95,55,0,146,63,9,0,15,127,2,2,128,161,
    128,35,1,66,10,240,238,192,73,9,226,15,192,43,193,27,
    128,35,3,164,1,23,216,49,225,59,3,194,26,207,41,67,
    96,242,136,128,113,21,164,5,71,37,120,17,174,130,37,203,
    112,82,133,248,143,32,132,8,5,188,244,22,192,91,132,55,
    200,29,59,21,102,184,8,52,88,229,193,10,120,75,60,88,
    5,175,198,157,37,24,215,65,214,224,104,153,200,142,110,33,
    219,199,200,118,133,217,254,155,216,122,248,101,29,188,91,68,
    142,114,125,75,148,22,81,242,122,43,204,165,158,73,185,10,
    71,183,179,254,90,161,127,167,208,95,47,244,55,184,143,18,
    220,134,193,38,12,238,194,224,30,116,209,40,171,249,106,247,
    65,154,48,216,130,163,45,144,248,187,15,23,104,55,239,118,
    97,198,54,207,88,203,103,60,224,25,15,225,232,33,72,252,
    61,208,51,202,208,110,110,160,47,252,255,224,95,19,125,1,
    170,134,205,43,25,39,126,20,58,126,216,141,124,131,190,151,
    169,33,207,117,168,89,72,93,248,57,185,240,95,192,254,243,
    140,212,133,231,128,140,5,233,18,24,112,206,157,115,3,198,
    77,152,8,24,88,224,153,48,193,101,74,36,64,79,192,133,
    1,223,155,68,112,142,173,133,134,126,8,150,210,254,27,176,
    161,53,167,5,56,47,193,164,4,237,151,19,131,6,78,42,
    16,255,19,126,216,102,166,139,204,212,128,9,182,22,92,88,
    112,94,134,23,72,132,67,131,10,169,47,94,78,80,83,28,
    105,55,45,148,246,176,160,46,169,226,249,113,232,14,165,90,
    195,190,51,114,99,119,232,60,247,59,39,210,251,250,120,32,
    59,170,89,205,8,163,100,111,228,170,190,205,51,77,50,201,
    112,164,152,99,20,74,181,132,157,174,31,122,206,48,242,78,
    3,169,22,137,157,211,245,3,233,56,252,241,183,195,81,20,
    171,47,227,56,138,109,178,42,15,6,145,155,207,32,155,118,
    130,40,145,77,90,141,151,177,137,189,34,234,238,136,57,146,
    0,44,45,77,246,100,210,137,253,145,66,103,105,142,68,77,
    220,154,228,38,110,146,99,108,90,195,80,181,250,189,110,210,
    106,247,221,88,182,251,50,108,245,228,112,127,55,138,253,158,
    31,238,38,202,61,14,228,238,147,119,223,219,223,253,213,238,
    251,173,227,83,63,240,90,103,31,125,216,26,141,85,63,10,
    91,195,253,150,31,42,137,118,10,90,87,45,180,135,84,183,
    105,173,215,126,207,241,89,75,167,47,131,145,140,151,105,244,
    62,201,33,234,162,38,202,194,20,77,177,140,189,18,62,166,
    216,54,150,196,161,79,122,118,72,119,66,153,85,196,21,57,
    91,192,137,1,241,54,161,102,128,63,65,110,70,236,180,233,
    155,193,223,126,71,6,210,163,3,147,176,160,7,39,140,52,
    132,28,82,30,144,243,67,96,184,148,96,80,6,13,35,68,
    159,198,85,60,166,22,201,137,141,129,204,45,72,254,1,104,
    112,4,208,4,82,112,93,152,32,194,58,168,42,197,58,142,
    110,224,130,127,97,124,182,155,36,254,33,131,68,245,253,36,
    122,29,178,43,168,207,17,213,70,203,124,51,214,214,74,118,
    112,224,219,232,180,209,113,195,48,82,13,215,243,26,174,82,
    177,127,124,170,100,210,80,81,227,81,210,36,239,218,171,25,
    206,114,126,227,81,134,43,194,0,226,74,191,120,126,71,225,
    11,3,216,97,47,36,82,33,70,250,145,151,224,56,177,232,
    73,101,147,144,138,140,28,177,32,12,33,135,72,105,121,164,
    187,133,239,159,102,146,48,78,155,229,12,85,137,12,186,170,
    202,0,117,147,196,97,73,104,156,177,72,140,95,185,193,169,
    100,238,136,38,133,2,81,87,203,112,243,104,188,75,154,101,
    134,96,237,194,40,244,198,40,172,223,121,135,228,184,203,152,
    172,49,42,215,17,145,11,216,150,241,255,178,216,48,58,86,
    138,195,114,134,69,202,145,10,24,9,34,5,3,226,242,2,
    243,81,211,224,132,194,10,114,188,254,148,122,52,217,222,166,
    230,1,53,15,169,217,201,108,112,163,134,88,190,108,136,167,
    180,184,193,218,179,158,228,58,51,211,211,155,137,185,123,211,
    152,195,36,218,166,216,49,40,194,166,177,99,81,194,141,159,
    81,139,164,28,149,38,36,207,41,189,83,140,49,51,10,39,
    12,12,234,77,195,133,173,102,215,201,26,139,25,210,109,130,
    111,17,195,189,2,134,109,114,24,3,216,190,151,165,78,135,
    40,52,116,237,45,98,85,186,198,236,13,106,126,50,23,219,
    79,65,216,187,2,194,143,73,142,122,10,194,101,6,95,21,
    159,186,209,49,83,135,228,27,236,218,37,240,17,242,172,107,
    144,247,115,234,153,87,77,48,79,208,165,138,255,166,0,58,
    146,213,40,234,119,136,157,241,38,169,85,132,219,38,150,14,
    47,194,77,172,6,12,174,6,222,229,106,128,43,10,174,177,
    116,114,55,57,191,235,78,137,236,211,53,97,35,221,229,147,
    10,182,163,56,58,27,55,162,110,67,177,1,40,23,31,60,
    74,246,30,37,31,99,150,109,60,227,252,166,243,172,206,164,
    177,28,81,38,164,169,95,158,117,36,111,173,252,230,56,58,
    241,57,156,4,157,116,203,70,228,173,147,117,141,204,236,188,
    5,36,42,166,204,127,243,134,175,230,134,39,61,190,162,149,
    171,108,117,83,108,34,202,170,130,197,115,116,250,231,82,142,
    191,226,243,25,121,130,76,32,129,138,112,187,173,133,103,189,
    72,67,251,151,51,72,186,73,173,236,22,46,243,251,12,65,
    229,41,130,232,49,179,8,249,27,112,197,43,224,175,64,24,
    65,40,164,17,146,7,20,129,98,141,200,255,0,28,74,215,
    84,22,156,163,218,84,77,48,5,166,174,228,41,147,234,66,
    227,43,248,123,33,14,179,114,192,76,107,218,98,57,96,229,
    249,141,193,245,163,182,124,107,54,17,146,167,250,110,66,100,
    58,187,77,67,123,186,159,228,149,40,102,247,27,69,218,162,
    94,211,33,241,190,159,226,140,54,212,45,177,102,20,208,243,
    30,53,79,114,224,136,108,236,166,36,221,129,183,151,2,142,
    222,95,190,35,113,44,86,96,101,129,235,181,34,147,60,78,
    74,89,156,60,201,227,68,242,86,248,134,79,64,212,26,132,
    133,11,67,224,177,20,107,68,58,5,90,32,75,112,84,166,
    136,226,242,94,164,1,39,178,244,71,201,114,102,159,101,19,
    29,106,227,229,112,208,158,166,230,236,230,211,10,57,251,32,
    112,135,199,158,251,44,160,117,105,241,78,22,130,70,166,73,
    189,168,9,133,143,120,155,50,252,186,159,105,244,234,230,83,
    202,135,184,76,174,9,7,144,23,117,56,143,60,239,203,198,
    80,14,143,241,8,220,247,71,141,110,224,246,216,103,102,170,
    233,215,153,166,138,157,126,185,166,73,30,83,27,53,58,81,
    136,187,192,105,71,69,113,195,147,120,44,148,94,99,183,193,
    91,72,195,79,26,238,49,126,117,241,108,201,225,48,27,222,
    92,86,187,113,47,225,10,250,228,53,117,231,227,115,199,241,
    67,31,15,22,33,228,219,183,62,153,230,59,2,31,25,116,
    116,225,78,139,7,62,53,214,89,143,234,27,123,143,154,95,
    192,220,54,142,15,200,126,180,30,25,178,44,182,140,138,193,
    231,212,34,221,55,52,51,185,26,227,95,252,152,24,215,151,
    78,105,164,151,65,46,208,101,4,93,40,149,210,11,37,140,
    250,242,255,26,245,28,40,243,9,145,211,255,107,176,219,79,
    231,175,136,253,17,164,5,195,219,2,125,166,54,253,84,7,
    186,246,17,150,21,227,59,172,180,62,6,177,210,226,69,120,
    31,139,84,139,139,212,3,42,82,39,92,200,58,134,174,83,
    167,174,229,211,9,223,210,208,113,50,148,175,157,171,56,212,
    165,40,65,198,29,141,100,232,217,143,161,88,93,242,231,155,
    183,32,5,243,25,20,54,121,83,220,193,114,242,42,170,41,
    115,21,52,102,244,150,114,28,111,207,205,253,127,206,220,175,
    239,85,242,244,101,31,80,83,159,201,85,58,117,177,159,232,
    164,233,201,64,42,121,141,171,20,77,75,79,170,158,196,116,
    30,141,241,112,192,245,53,190,7,142,51,167,164,247,137,134,
    172,118,22,38,61,81,54,42,229,138,224,253,229,210,101,174,
    22,142,10,36,93,67,142,19,155,99,100,37,183,0,223,56,
    102,137,157,140,197,103,161,67,119,168,175,135,248,182,195,254,
    25,164,167,79,251,157,220,146,100,58,46,220,245,225,9,209,
    206,123,31,111,117,246,251,52,78,203,14,247,247,50,109,246,
    180,54,159,7,209,84,29,190,247,28,238,171,7,111,39,253,
    34,26,186,56,190,117,45,69,219,31,166,140,86,47,125,247,
    98,154,181,126,105,52,145,177,239,6,254,15,250,142,45,27,
    230,43,137,235,164,163,28,62,51,194,27,14,163,166,232,20,
    134,72,44,123,126,130,252,152,217,204,164,52,240,63,201,108,
    114,21,105,51,12,230,131,42,93,2,234,51,239,51,138,161,
    228,51,108,232,242,172,178,82,65,132,81,74,48,241,124,185,
    44,44,179,86,175,88,181,165,138,85,89,48,249,86,99,25,
    207,3,85,171,178,84,19,217,191,29,196,99,213,216,169,85,
    196,127,1,122,12,206,215,
};

EmbeddedPython embedded_m5_internal_param_TickedObject(
    "m5/internal/param_TickedObject.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_TickedObject.py",
    "m5.internal.param_TickedObject",
    data_m5_internal_param_TickedObject,
    2167,
    6674);

} // anonymous namespace