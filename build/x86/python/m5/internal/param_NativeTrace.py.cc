#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NativeTrace[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,178,37,203,177,
    18,199,118,18,59,182,186,33,171,26,204,86,155,214,77,135,
    122,193,218,46,5,90,12,78,71,165,72,234,22,227,104,241,
    36,81,166,72,129,60,39,86,33,111,192,28,108,251,7,246,
    39,236,135,253,55,251,143,182,247,222,145,20,253,37,64,129,
    13,150,35,94,142,199,187,119,239,203,231,125,185,235,64,250,
    87,194,231,55,13,128,228,79,2,192,195,159,128,0,96,40,
    224,64,128,144,2,188,219,112,84,130,248,35,240,74,240,6,
    224,192,0,105,192,25,118,76,248,222,128,176,198,107,202,16,
    152,60,34,96,92,5,105,193,65,9,94,132,55,193,146,101,
    56,170,66,252,71,16,66,132,2,94,122,115,224,205,195,27,
    164,142,157,10,19,156,7,26,172,242,96,5,188,5,30,172,
    130,87,227,206,2,140,235,32,107,112,176,72,211,14,110,32,
    217,135,72,118,137,201,254,155,200,122,248,101,5,188,27,52,
    29,249,250,142,102,90,52,147,247,91,98,42,245,140,203,155,
    112,112,43,235,47,23,250,183,11,253,149,66,127,149,251,200,
    193,45,24,172,193,224,14,12,238,66,23,149,114,51,223,237,
    30,72,19,6,235,112,176,14,18,127,247,224,12,245,230,221,
    42,172,216,224,21,203,249,138,251,188,98,19,14,54,65,226,
    239,190,94,81,134,118,115,21,109,225,255,7,255,154,104,11,
    80,53,108,94,201,56,241,163,208,241,195,110,228,27,244,189,
    76,13,89,174,67,205,92,106,194,47,200,132,255,2,182,159,
    103,164,38,60,5,36,44,72,150,192,128,83,238,156,26,48,
    110,194,68,192,192,2,207,132,9,110,83,34,6,122,2,206,
    12,248,193,164,9,167,216,90,168,232,77,176,148,182,223,128,
    21,173,41,205,193,105,9,38,37,104,191,156,24,52,112,84,
    129,248,159,240,227,6,19,157,103,162,6,76,176,181,224,204,
    130,211,50,188,192,73,56,52,168,144,248,226,229,4,37,197,
    145,118,211,66,110,247,11,226,146,40,158,31,135,238,80,170,
    91,216,119,70,110,236,14,157,125,87,249,175,228,243,216,237,
    200,102,53,155,23,37,59,35,87,245,109,94,104,146,70,134,
    35,197,4,163,80,170,5,236,116,253,208,115,134,145,119,28,
    72,53,79,212,156,174,31,72,199,225,143,95,13,71,81,172,
    158,198,113,20,219,164,84,30,12,34,55,95,65,42,237,4,
    81,34,155,180,27,111,99,19,121,69,179,187,35,166,72,12,
    48,179,180,216,147,73,39,246,71,10,109,165,41,210,108,162,
    214,36,43,113,147,184,216,180,134,161,106,245,123,221,164,213,
    238,187,177,108,247,101,216,234,201,225,238,118,20,251,61,63,
    220,78,148,123,24,200,237,71,239,127,176,187,253,171,237,15,
    91,135,199,126,224,181,78,62,249,184,53,26,171,126,20,182,
    134,187,45,63,84,18,213,20,180,46,41,104,7,39,145,234,
    146,215,126,207,241,89,72,167,47,131,145,140,23,105,244,30,
    177,33,234,162,38,202,194,20,77,177,136,189,18,62,166,216,
    48,22,196,190,79,98,118,72,116,194,152,85,68,21,153,90,
    192,145,1,241,6,97,102,128,63,65,70,70,228,180,233,155,
    193,223,126,79,250,209,163,3,147,144,160,7,39,140,51,4,
    28,206,220,35,211,135,192,96,41,193,160,12,26,68,136,61,
    141,170,120,76,45,78,39,50,6,18,183,32,249,7,160,190,
    17,62,19,72,161,117,102,130,8,235,160,170,228,233,56,186,
    138,27,254,133,209,217,110,18,251,251,140,17,213,247,147,232,
    117,200,150,160,62,251,83,27,53,243,205,248,217,225,64,118,
    84,178,133,3,223,69,199,141,142,27,134,145,106,184,158,215,
    112,149,138,253,195,99,37,147,134,138,26,15,146,38,25,215,
    190,153,193,44,167,55,30,101,176,34,8,32,172,244,139,231,
    119,20,190,44,243,11,91,33,145,10,33,210,143,188,4,199,
    137,68,79,42,155,152,84,164,228,136,25,97,4,57,52,149,
    182,199,121,55,240,253,179,140,19,134,105,179,156,129,42,145,
    65,87,85,25,159,110,146,56,204,9,141,51,20,137,240,43,
    55,56,150,76,29,193,164,144,33,234,106,30,174,29,140,119,
    72,176,76,15,44,92,24,133,222,24,121,245,59,239,18,27,
    119,24,146,53,6,229,10,2,114,14,219,50,254,95,22,171,
    70,199,74,97,88,206,160,72,1,82,1,3,65,164,88,64,
    88,158,97,48,106,26,28,77,88,62,246,214,159,81,143,22,
    219,27,212,220,167,102,147,154,173,76,5,215,169,135,197,139,
    122,120,76,123,27,44,60,139,73,134,51,51,49,189,115,30,
    119,119,234,113,24,64,219,228,57,6,249,215,212,115,44,10,
    182,241,19,106,113,42,251,164,9,201,115,10,237,228,97,76,
    140,156,9,221,130,122,83,103,97,165,217,117,82,198,124,134,
    115,155,192,91,68,112,175,128,96,155,236,197,240,181,239,102,
    113,211,161,25,26,184,246,58,145,42,93,161,245,6,53,239,
    204,66,245,83,8,246,46,65,240,83,98,163,158,66,112,145,
    161,87,197,167,110,116,204,212,30,121,110,93,190,0,61,194,
    157,117,5,238,126,65,61,243,178,6,102,8,185,84,238,47,
    11,144,35,86,141,162,120,251,216,25,175,145,84,69,176,173,
    97,209,240,34,92,195,58,192,224,58,224,125,174,3,184,150,
    224,234,74,7,118,147,99,187,238,148,72,61,93,19,86,211,
    252,158,84,176,29,197,209,201,184,17,117,27,138,229,167,56,
    188,247,32,217,121,144,124,138,17,182,241,132,99,155,142,177,
    58,138,198,114,68,81,144,150,62,61,233,72,206,170,252,230,
    56,58,232,57,28,0,157,52,91,35,238,86,72,185,70,166,
    117,14,255,137,138,41,234,95,187,222,171,185,222,73,140,175,
    105,227,42,43,221,20,107,136,177,170,96,238,28,29,249,185,
    134,227,175,248,124,78,134,32,13,72,160,234,219,110,107,222,
    89,44,18,208,254,229,57,28,93,163,80,118,11,119,249,54,
    195,79,121,138,31,122,204,204,61,254,6,92,233,10,248,43,
    16,66,16,8,169,123,228,222,68,144,88,166,233,127,0,246,
    163,43,106,10,142,79,109,170,35,120,6,134,173,228,49,79,
    213,37,198,215,240,247,130,19,102,133,128,153,214,178,197,66,
    192,202,99,27,67,235,39,37,123,235,124,16,36,67,245,221,
    132,166,233,200,54,245,235,105,42,201,75,80,140,236,215,137,
    179,121,189,165,67,220,253,48,69,25,165,210,117,177,108,20,
    176,243,1,53,143,114,216,136,108,236,154,24,221,130,183,215,
    0,142,206,44,223,19,55,22,243,191,52,199,17,155,87,59,
    95,60,251,221,179,253,118,145,96,238,48,165,204,97,30,229,
    14,35,57,33,190,225,51,16,181,6,161,226,204,16,120,48,
    197,58,145,206,129,22,200,18,28,148,201,181,184,194,23,169,
    231,137,44,12,82,208,60,151,109,89,91,251,90,143,57,48,
    180,205,169,57,185,246,240,66,102,223,11,220,225,161,231,62,
    9,104,91,218,187,147,249,162,145,9,82,47,10,66,126,36,
    222,38,11,191,238,102,2,189,186,246,208,242,49,238,146,11,
    194,142,228,69,29,142,39,207,251,178,49,148,195,67,60,2,
    247,253,81,163,27,184,61,182,152,153,10,250,44,19,84,177,
    201,47,214,53,201,67,106,163,70,39,10,49,23,28,119,84,
    20,55,60,137,231,66,233,53,182,27,156,72,26,126,210,112,
    15,241,171,219,81,218,47,206,187,57,23,214,110,220,75,184,
    134,62,122,77,221,153,88,220,113,252,208,199,147,69,8,121,
    14,215,39,211,60,47,240,153,65,187,25,166,91,60,241,169,
    177,14,126,84,227,216,59,212,188,7,179,74,31,31,145,246,
    104,59,82,99,89,172,27,21,67,17,2,11,211,190,161,117,
    201,101,247,254,237,79,113,111,125,227,148,58,121,25,228,28,
    221,68,208,109,82,41,189,77,66,135,47,255,175,14,207,78,
    50,19,247,56,254,191,250,185,253,120,230,114,216,159,64,90,
    51,188,205,199,207,21,167,159,105,31,215,22,194,202,98,124,
    155,101,214,167,32,150,89,188,8,239,97,149,106,113,149,186,
    71,85,234,132,43,89,199,208,133,234,212,176,124,56,225,27,
    26,114,157,80,190,118,46,129,80,151,162,132,23,119,52,146,
    161,103,63,132,98,117,201,159,175,93,127,228,198,39,80,72,
    243,166,184,141,229,228,101,68,83,200,42,200,203,200,45,229,
    24,222,152,149,237,255,156,217,94,223,168,228,113,203,222,163,
    166,126,46,72,233,152,197,70,162,90,192,147,129,84,242,178,
    157,20,173,74,15,169,158,196,40,30,141,241,100,192,213,53,
    190,7,142,51,155,96,247,107,141,86,109,41,12,118,162,108,
    84,202,21,193,89,229,194,21,174,230,141,10,36,93,65,142,
    19,155,221,99,41,151,159,47,26,179,120,78,170,226,115,208,
    190,59,212,215,66,124,205,97,255,28,210,131,167,253,110,174,
    71,58,158,115,217,174,15,78,8,116,206,120,156,224,236,15,
    105,156,122,195,221,157,76,152,29,45,204,211,19,45,73,204,
    87,157,195,93,181,113,229,180,175,48,167,166,243,174,166,211,
    246,135,250,150,141,3,125,241,187,23,187,216,95,185,48,154,
    200,216,119,3,255,71,125,173,150,13,43,210,196,69,198,232,
    22,232,92,125,152,127,226,68,163,30,92,252,94,48,16,163,
    37,150,61,63,193,13,152,122,190,56,117,126,54,223,38,92,
    145,156,206,173,157,9,182,116,245,167,79,189,79,200,143,146,
    207,177,161,187,179,202,82,5,113,70,81,193,196,35,230,162,
    176,204,90,189,98,213,22,42,86,101,206,228,107,141,69,60,
    20,84,173,202,66,77,100,255,182,16,149,85,99,171,86,17,
    255,5,212,118,205,57,
};

EmbeddedPython embedded_m5_internal_param_NativeTrace(
    "m5/internal/param_NativeTrace.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_NativeTrace.py",
    "m5.internal.param_NativeTrace",
    data_m5_internal_param_NativeTrace,
    2182,
    6670);

} // anonymous namespace