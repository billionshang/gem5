#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I8237[] = {
    120,156,197,88,253,110,27,199,17,159,189,59,82,34,37,89,
    178,62,109,75,182,104,187,114,88,163,18,19,59,178,93,196,
    117,235,56,41,224,160,150,221,99,10,59,74,208,235,233,110,
    69,30,69,222,17,119,43,217,12,36,160,168,140,182,232,255,
    125,132,254,145,183,233,19,244,85,218,153,217,187,227,233,11,
    8,144,148,145,201,245,114,119,118,118,103,230,55,31,187,30,
    164,127,37,252,254,166,6,144,252,71,0,248,248,17,208,5,
    232,9,216,22,32,164,0,127,30,246,74,16,127,12,126,9,
    222,3,108,27,32,13,56,198,142,9,95,27,16,78,242,154,
    50,116,77,30,17,48,168,130,180,96,187,4,175,195,203,96,
    201,50,236,85,33,254,19,8,33,66,1,111,252,49,240,199,
    225,61,114,199,78,133,25,142,3,13,86,121,176,2,254,4,
    15,86,193,159,228,206,4,12,102,64,78,194,246,20,145,109,
    95,66,182,119,145,237,52,179,253,55,177,245,113,102,1,252,
    75,68,142,231,250,138,40,45,162,228,253,166,153,203,76,118,
    202,203,176,61,155,245,231,10,253,249,66,127,161,208,95,44,
    244,151,10,253,43,133,254,213,66,255,90,161,191,92,232,175,
    20,250,215,11,253,27,220,71,9,103,161,179,10,157,26,116,
    110,194,46,42,253,114,46,205,45,144,38,116,110,195,246,109,
    144,248,185,5,199,104,23,127,182,176,226,103,188,98,46,95,
    177,198,43,238,192,246,29,144,248,89,211,43,202,208,172,47,
    162,173,131,255,226,95,29,109,13,106,18,155,3,25,39,65,
    20,58,65,184,27,5,6,205,151,169,33,100,120,212,140,165,
    16,121,70,16,249,14,24,31,190,145,66,228,8,144,177,32,
    89,186,6,28,113,231,200,128,65,29,14,5,116,44,240,77,
    56,196,109,74,116,128,150,128,99,3,190,49,137,224,8,91,
    11,13,121,3,44,165,241,209,97,67,106,78,99,112,84,130,
    195,18,52,223,28,26,52,176,87,129,248,95,240,237,10,51,
    29,103,166,6,28,98,107,193,177,5,71,101,120,141,68,56,
    212,169,144,248,226,205,33,74,138,35,205,186,133,167,221,42,
    136,75,162,248,65,28,186,61,201,162,59,125,55,118,123,206,
    243,71,247,238,63,172,87,51,138,40,217,232,187,170,109,243,
    18,147,116,209,235,43,102,21,133,82,77,96,103,55,8,125,
    167,23,249,251,93,169,198,137,143,179,27,116,165,227,240,228,
    243,94,63,138,213,231,113,28,197,54,169,147,7,187,145,155,
    175,32,101,122,221,40,145,117,218,141,183,177,137,189,34,234,
    221,62,115,164,3,240,49,105,177,47,19,47,14,250,10,173,
    164,57,18,53,113,171,147,125,184,73,190,198,166,209,11,85,
    163,221,218,77,26,205,182,27,203,102,91,134,141,150,236,109,
    174,71,113,208,10,194,245,68,185,59,93,185,126,239,195,143,
    54,215,127,185,126,191,177,179,31,116,253,198,187,71,15,26,
    253,129,106,71,97,163,183,217,8,66,37,81,65,221,70,65,
    53,27,56,61,75,155,188,13,90,78,192,226,57,109,217,237,
    203,120,138,70,175,209,1,196,140,152,20,101,97,138,186,152,
    194,94,9,191,166,88,49,38,196,86,64,2,122,36,52,225,
    202,42,34,137,204,43,96,207,128,120,133,112,210,193,143,32,
    195,34,90,154,52,103,240,220,239,73,51,122,180,99,146,245,
    245,224,33,99,11,65,134,148,143,201,220,33,48,64,74,208,
    41,131,6,14,226,77,35,41,30,80,139,228,196,198,64,230,
    22,36,255,4,212,52,66,230,16,82,56,29,155,32,194,25,
    80,85,138,30,56,186,136,27,254,133,17,217,172,211,241,183,
    24,29,170,29,36,209,219,144,109,64,125,6,82,19,53,243,
    106,240,114,167,35,61,149,172,226,192,87,209,126,205,115,195,
    48,82,53,215,247,107,174,82,113,176,179,175,100,82,83,81,
    109,45,169,147,89,237,203,25,192,114,126,131,126,6,40,50,
    62,2,74,255,240,3,79,225,143,57,254,193,86,72,164,66,
    112,180,35,63,193,113,98,209,146,202,166,67,42,82,114,196,
    7,97,236,56,68,74,219,35,221,37,252,253,52,59,9,3,
    180,94,206,224,148,200,238,174,170,50,50,221,36,113,248,36,
    52,206,32,36,198,7,110,119,95,50,119,132,145,194,3,81,
    87,159,97,132,48,188,66,34,101,26,96,177,194,40,244,7,
    120,202,192,251,128,14,112,133,193,56,201,112,92,64,40,142,
    97,91,198,255,203,98,209,240,172,20,128,229,12,132,20,14,
    21,48,4,68,138,2,4,228,49,134,158,186,193,177,131,37,
    99,15,189,69,61,90,108,175,80,115,157,154,27,212,172,102,
    194,143,70,3,83,167,53,240,144,118,53,88,108,22,144,140,
    101,102,2,250,39,188,236,234,208,203,48,80,54,201,91,12,
    242,169,161,183,88,20,84,227,39,212,34,41,251,161,9,201,
    151,20,194,201,171,152,25,57,16,186,2,245,134,14,194,234,
    178,103,72,13,227,25,182,109,2,108,17,181,173,2,106,109,
    178,20,67,214,190,154,69,73,135,40,52,88,237,101,98,85,
    58,71,223,53,106,110,142,86,233,67,216,181,206,192,238,19,
    58,192,76,10,187,41,134,91,21,191,51,134,103,166,150,200,
    179,231,220,41,184,17,214,172,115,176,118,135,122,230,89,217,
    127,18,152,165,18,255,182,0,51,58,164,81,20,108,11,59,
    131,37,146,167,8,176,37,44,8,94,135,75,152,227,13,206,
    241,31,114,142,231,58,129,43,51,29,192,77,142,225,186,83,
    34,197,236,154,176,152,230,238,164,130,109,63,142,222,13,106,
    209,110,77,177,228,20,111,31,175,37,27,107,201,39,24,73,
    107,79,56,134,233,88,170,163,101,44,251,20,237,104,233,231,
    239,60,201,121,147,127,57,142,14,110,14,7,58,39,205,199,
    136,181,5,82,171,145,233,155,195,124,162,98,138,238,35,212,
    120,53,215,56,9,240,5,109,89,101,117,155,98,9,113,85,
    21,124,46,71,199,118,174,204,120,22,191,159,146,9,72,118,
    9,84,179,219,77,125,106,22,136,68,179,127,113,2,59,35,
    17,199,110,32,255,63,100,152,41,15,49,67,95,51,115,134,
    191,1,87,174,2,254,10,132,10,52,126,234,12,185,239,16,
    12,230,136,252,143,192,94,115,78,189,192,113,168,73,53,2,
    83,96,120,74,30,50,169,46,31,190,128,191,23,92,46,75,
    242,102,90,155,22,147,188,149,199,48,134,211,247,74,228,214,
    201,96,71,38,106,187,9,145,233,8,54,244,226,97,178,200,
    11,75,140,224,163,193,214,184,222,204,161,115,125,51,68,22,
    165,201,101,49,103,20,240,242,17,53,247,114,168,136,108,236,
    255,126,196,85,184,56,179,59,58,107,208,17,18,139,79,62,
    61,198,121,229,205,163,7,207,155,79,157,103,47,127,247,114,
    171,169,121,229,158,81,202,60,227,94,238,25,146,243,220,123,
    190,194,80,107,16,8,142,13,129,247,86,44,249,232,154,104,
    129,44,193,118,153,124,136,203,116,145,186,152,200,34,29,197,
    197,19,73,148,85,180,165,149,151,227,64,155,152,154,119,35,
    140,32,100,229,199,93,183,183,227,187,79,40,86,38,180,171,
    151,57,157,145,137,48,83,20,129,28,70,92,36,5,255,220,
    204,68,57,24,97,244,120,0,156,41,181,8,236,43,126,228,
    113,200,248,178,45,107,61,217,219,193,91,107,59,232,215,118,
    187,110,139,173,100,166,34,190,204,68,84,108,230,211,37,74,
    114,151,218,168,230,69,33,134,248,125,79,69,113,205,151,120,
    161,147,126,109,189,198,249,161,22,36,53,119,7,103,93,79,
    105,7,56,233,201,92,23,187,113,43,225,18,120,239,45,117,
    71,108,101,7,111,235,1,94,9,14,32,79,202,250,50,153,
    135,123,46,246,181,63,97,254,196,171,154,26,232,200,70,229,
    138,189,65,205,207,97,244,89,225,227,212,166,9,169,174,44,
    150,141,138,161,47,205,68,240,138,104,147,179,14,252,226,251,
    56,176,126,114,74,221,184,156,189,85,141,129,228,75,30,61,
    39,149,211,231,36,244,237,177,31,234,219,236,21,35,246,135,
    163,31,213,165,237,135,63,161,4,246,35,72,43,128,139,220,
    89,20,197,155,210,238,220,17,217,165,164,40,27,191,136,204,
    158,196,144,227,197,210,85,82,155,106,101,164,130,114,80,208,
    219,255,121,232,157,103,75,230,167,185,76,199,92,251,12,230,
    217,130,250,62,198,22,20,175,195,107,88,59,91,92,59,63,
    166,218,249,144,21,224,24,186,124,30,2,180,148,235,97,26,
    155,80,190,117,10,186,208,165,49,157,202,237,247,101,232,219,
    119,161,88,237,242,244,8,113,64,241,231,24,10,37,136,41,
    230,177,188,61,235,141,20,101,11,50,178,41,75,185,255,141,
    214,168,140,222,127,100,232,173,211,21,100,24,106,237,199,212,
    112,112,205,227,170,253,107,200,98,109,142,79,95,118,165,146,
    69,211,40,90,148,222,141,125,137,25,39,26,224,229,132,203,
    124,252,221,117,156,81,135,231,95,233,56,162,47,89,24,158,
    69,217,168,152,149,114,69,112,246,59,245,58,172,207,69,175,
    46,186,152,29,36,54,251,246,116,46,53,191,100,102,217,135,
    180,196,215,176,45,183,167,95,159,248,77,197,190,13,233,141,
    215,254,32,87,33,189,8,240,13,66,223,219,16,209,156,153,
    57,17,219,247,105,28,17,2,189,205,141,76,144,13,45,200,
    167,110,18,120,175,130,232,51,121,16,120,146,31,84,123,155,
    106,249,92,218,33,217,149,115,231,155,131,68,201,222,153,197,
    50,220,239,57,47,100,47,138,7,47,34,95,170,149,83,243,
    79,125,63,182,221,176,37,157,3,73,213,133,186,121,154,32,
    45,45,52,143,140,234,124,121,78,210,94,32,8,78,234,151,
    71,174,161,207,206,63,235,70,222,158,244,83,154,235,23,211,
    124,22,245,92,28,63,127,151,102,144,237,114,249,212,188,31,
    211,170,133,83,163,137,140,3,183,27,124,171,31,52,179,97,
    53,79,144,56,207,86,84,175,156,28,226,98,129,21,115,78,
    153,207,78,19,203,86,128,70,138,153,235,201,197,105,236,35,
    64,179,125,139,201,161,184,116,196,30,166,107,116,253,240,240,
    132,10,31,246,25,122,172,172,76,87,208,219,40,28,154,120,
    215,159,18,150,57,57,83,177,38,39,42,86,101,204,228,55,
    165,41,188,169,85,173,202,196,164,184,232,223,42,122,106,213,
    88,69,78,255,3,88,162,25,227,
};

EmbeddedPython embedded_m5_internal_param_I8237(
    "m5/internal/param_I8237.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_I8237.py",
    "m5.internal.param_I8237",
    data_m5_internal_param_I8237,
    2329,
    7133);

} // anonymous namespace