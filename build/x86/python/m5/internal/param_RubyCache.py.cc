#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyCache[] = {
    120,156,197,89,81,115,219,198,17,222,3,64,74,164,36,75,
    182,44,201,178,228,136,118,98,155,113,35,49,113,172,56,157,
    184,110,157,76,58,211,76,171,164,96,58,118,152,76,81,8,
    56,145,160,64,128,3,156,108,51,35,189,84,158,182,51,125,
    238,79,232,67,255,77,254,81,187,187,71,64,16,69,185,154,
    105,135,178,200,245,97,177,183,119,187,247,237,222,222,209,131,
    225,191,18,126,127,85,3,72,247,4,128,143,31,1,33,64,
    79,64,75,128,144,2,252,235,176,95,130,228,17,248,37,120,
    3,208,50,64,26,112,140,13,19,190,55,32,154,229,62,101,
    8,77,230,8,24,84,65,90,208,42,193,243,232,42,88,178,
    12,251,85,72,254,4,66,136,72,192,11,127,10,252,105,120,
    131,218,177,81,97,133,211,64,204,42,51,43,224,207,48,179,
    10,254,44,55,102,96,176,0,114,22,90,115,36,214,186,130,
    106,31,160,218,121,86,251,19,169,245,241,205,18,248,87,72,
    28,231,245,29,73,90,36,201,227,205,179,150,133,108,150,87,
    161,117,45,107,47,22,218,215,185,141,35,93,131,238,18,116,
    151,161,187,2,232,16,255,106,174,245,6,72,19,186,171,208,
    90,5,137,159,27,112,140,254,241,175,21,122,220,228,30,139,
    121,143,53,238,177,14,173,117,144,248,89,211,61,202,208,172,
    47,163,207,131,127,227,191,58,250,28,212,44,146,151,50,73,
    131,56,114,130,104,47,14,12,122,95,38,66,43,228,17,153,
    26,46,213,23,180,84,255,2,94,39,223,24,46,213,17,160,
    98,65,182,132,6,28,113,227,200,128,65,29,14,5,116,45,
    240,77,56,196,97,74,52,129,182,128,99,3,126,48,73,224,
    8,169,133,14,125,7,44,165,215,169,203,14,213,154,166,224,
    168,4,135,37,104,190,56,52,136,177,95,129,228,159,240,227,
    58,43,157,102,165,6,28,34,181,224,216,130,163,50,60,71,
    33,100,117,43,100,190,120,113,136,150,34,167,89,183,112,182,
    59,5,115,201,20,63,72,34,183,39,213,2,182,157,190,155,
    184,61,199,62,216,29,124,225,122,29,89,175,102,82,113,186,
    213,119,85,199,230,110,38,249,163,215,87,172,46,142,164,154,
    193,198,94,16,249,78,47,246,15,66,169,166,73,151,179,23,
    132,210,113,248,229,111,122,253,56,81,95,38,73,156,216,228,
    82,102,134,177,155,247,32,135,122,97,156,202,58,141,198,195,
    216,164,94,145,244,94,159,53,210,4,120,170,212,217,151,169,
    151,4,125,133,43,165,53,146,52,105,171,211,26,49,73,29,
    36,141,94,164,26,157,246,94,218,104,118,220,68,54,59,50,
    106,180,101,111,123,51,78,130,118,16,109,166,202,221,13,229,
    230,195,15,63,218,222,252,249,230,199,141,221,131,32,244,27,
    175,63,253,164,209,31,168,78,28,53,122,219,141,32,82,18,
    157,20,54,70,220,179,133,34,215,104,160,87,65,219,9,216,
    68,167,35,195,190,76,230,136,123,147,38,33,22,196,172,40,
    11,83,212,197,28,182,74,248,53,197,186,49,35,118,2,50,
    210,35,195,9,95,86,17,81,180,204,2,246,13,72,214,9,
    47,93,252,8,90,96,68,77,147,222,25,252,238,247,228,29,
    205,237,154,132,2,205,60,100,140,33,216,80,242,9,45,123,
    4,12,148,18,116,203,160,1,132,184,211,136,74,6,68,81,
    156,212,24,168,220,130,244,31,128,222,70,232,28,194,16,86,
    199,38,136,104,1,84,149,162,25,185,203,56,224,159,25,153,
    205,58,77,127,135,17,162,58,65,26,191,138,120,29,168,205,
    177,212,68,207,124,51,248,122,183,43,61,149,110,32,227,187,
    248,160,230,185,81,20,171,154,235,251,53,87,169,36,216,61,
    80,50,173,169,184,118,55,173,211,210,218,87,51,144,229,250,
    6,253,12,84,4,0,4,149,126,240,3,79,225,195,34,63,
    240,42,164,82,33,64,58,177,159,34,159,84,180,165,178,105,
    146,138,156,28,243,68,24,63,14,137,210,240,40,119,5,159,
    159,101,51,97,144,214,203,25,164,82,25,238,169,42,163,211,
    77,83,135,103,66,124,6,34,41,126,233,134,7,146,181,35,
    148,20,78,136,154,122,14,19,134,226,13,50,43,243,2,155,
    22,197,145,63,192,153,6,222,125,154,196,13,6,228,44,67,
    114,9,225,56,133,180,140,255,151,197,178,225,89,67,16,150,
    51,32,82,106,84,192,48,16,67,36,32,40,143,49,13,213,
    13,206,35,108,29,71,234,29,106,81,103,123,157,200,45,34,
    239,16,217,200,28,48,57,47,204,141,122,225,49,141,108,176,
    233,108,36,45,154,153,25,233,159,138,182,213,147,104,195,196,
    217,164,168,49,40,182,78,162,198,162,36,155,60,37,138,162,
    28,143,38,164,223,82,74,167,232,98,101,20,72,24,18,212,
    58,9,20,118,153,77,73,182,62,157,97,220,38,224,22,209,
    219,46,160,215,166,213,98,232,218,171,89,198,116,72,66,131,
    214,94,35,85,165,49,62,175,17,185,61,121,199,159,192,175,
    125,6,126,159,209,36,22,134,240,155,99,216,85,241,187,96,
    120,230,112,53,242,29,117,113,4,118,132,57,107,12,230,238,
    81,203,60,107,255,165,193,109,104,245,175,11,112,163,137,26,
    69,227,118,176,49,88,33,155,138,64,91,193,66,225,121,180,
    130,123,191,193,123,255,135,188,247,115,253,192,149,147,78,232,
    38,231,116,221,40,145,115,246,76,88,30,238,233,105,5,105,
    63,137,95,15,106,241,94,77,177,245,148,127,159,220,77,183,
    238,166,159,97,102,173,61,229,156,166,115,171,206,158,137,236,
    83,246,163,174,95,190,246,36,239,165,252,228,56,58,217,57,
    156,248,156,225,30,141,152,91,34,215,26,153,207,57,237,167,
    42,161,108,63,97,175,87,115,175,147,17,95,209,176,85,118,
    185,41,86,16,95,85,193,115,115,116,190,231,170,141,223,226,
    247,115,90,6,178,95,2,213,213,118,83,207,156,141,34,243,
    236,15,78,97,104,98,38,217,13,28,227,15,25,118,202,39,
    216,161,175,153,5,198,95,129,43,91,1,127,1,66,7,130,
    96,24,24,121,28,17,28,22,73,252,143,192,17,52,166,142,
    224,188,212,164,218,129,37,48,93,165,143,89,84,151,21,95,
    193,223,10,225,151,109,254,230,176,118,45,110,254,86,158,211,
    24,86,23,218,224,173,211,201,143,150,169,227,166,36,166,51,
    218,73,68,159,108,32,121,209,137,25,125,114,24,155,214,3,
    58,52,183,31,78,16,70,219,231,154,88,52,10,184,249,136,
    200,195,28,50,34,227,77,100,154,27,112,254,174,239,232,221,
    228,123,154,139,197,179,159,159,226,141,132,123,255,78,246,226,
    100,144,71,71,41,139,142,135,121,116,72,222,247,222,240,17,
    135,168,65,32,56,54,4,158,47,177,20,164,227,156,5,178,
    4,173,50,197,17,151,240,98,24,102,34,203,120,148,31,79,
    109,170,236,158,29,237,184,28,7,122,137,137,188,158,112,38,
    161,85,126,18,186,189,93,223,125,218,165,65,105,100,47,11,
    60,35,51,99,161,104,6,5,141,56,207,18,126,220,206,204,
    121,57,225,44,242,9,240,36,181,25,28,51,126,236,113,234,
    248,182,35,107,61,217,219,197,211,109,39,232,215,246,66,183,
    205,171,101,14,205,252,58,51,83,241,114,143,150,46,233,3,
    162,113,205,139,35,76,249,7,158,138,147,154,47,241,208,39,
    253,218,102,141,247,139,90,144,214,220,93,124,235,122,74,7,
    193,233,136,230,186,217,77,218,41,151,200,251,175,168,121,9,
    171,237,224,201,62,192,99,67,8,249,70,173,15,157,121,250,
    231,3,129,142,41,220,83,241,56,167,6,58,203,81,25,99,
    111,17,121,31,46,103,151,120,4,250,42,34,37,23,150,197,
    154,81,49,212,60,77,40,19,250,134,250,164,103,131,250,145,
    184,64,80,235,235,162,97,104,151,73,82,78,209,13,3,209,
    10,109,20,173,106,198,156,97,58,203,204,185,140,121,133,233,
    60,51,23,50,230,85,166,215,152,185,152,49,175,51,93,98,
    230,114,198,92,97,122,131,153,171,25,243,38,211,53,102,174,
    103,204,91,76,223,97,230,70,198,172,49,189,205,204,59,25,
    243,93,166,239,49,243,110,198,188,199,244,62,51,235,217,117,
    218,251,204,124,0,173,159,209,61,20,113,62,160,180,54,245,
    191,166,53,78,6,151,144,6,210,255,107,54,179,31,95,178,
    21,246,167,48,44,130,206,203,100,162,104,226,156,206,100,93,
    145,157,211,138,246,241,133,209,242,217,176,113,188,68,186,74,
    234,101,91,159,184,193,156,23,245,20,94,158,36,167,179,167,
    136,103,185,109,199,92,6,14,174,243,106,234,163,42,175,166,
    120,30,221,196,227,132,197,199,137,39,116,156,56,100,71,56,
    134,62,81,156,0,182,148,251,131,92,27,201,87,206,136,79,
    244,137,129,102,230,246,251,50,242,237,7,80,60,4,240,235,
    9,227,130,210,240,27,40,84,100,166,184,142,85,255,217,40,
    165,13,167,96,43,47,107,41,143,203,201,47,48,35,250,239,
    25,162,235,155,80,220,117,236,39,68,120,159,201,183,24,251,
    151,249,242,172,142,129,43,110,186,177,71,7,207,183,188,197,
    170,144,239,169,248,73,221,29,35,231,187,202,125,230,121,50,
    77,127,139,200,139,188,1,107,188,152,36,105,39,4,156,121,
    163,238,156,215,63,73,220,193,231,110,180,159,242,48,23,16,
    163,49,174,100,99,228,108,117,107,76,207,0,63,30,61,179,
    238,183,75,144,90,58,237,230,28,181,54,70,62,44,184,228,
    109,239,73,27,109,21,195,103,117,111,140,44,158,85,67,215,
    147,61,25,41,167,31,135,193,80,237,5,69,105,4,186,109,
    62,251,106,172,19,19,153,198,7,137,39,155,202,13,195,243,
    125,61,34,150,249,250,52,155,239,118,70,123,166,193,143,218,
    205,231,190,36,101,124,135,138,15,234,221,113,82,202,77,20,
    150,99,190,124,237,236,98,77,70,218,46,34,71,138,169,234,
    25,225,171,247,198,244,85,110,251,44,184,47,36,72,163,112,
    65,60,242,66,221,62,167,247,105,100,255,119,41,26,96,110,
    56,64,206,229,236,198,155,147,47,67,169,228,104,62,214,63,
    212,232,234,212,151,88,109,199,3,199,209,215,29,248,28,58,
    206,101,148,165,191,32,200,208,96,4,49,44,75,69,25,11,
    211,37,49,230,207,168,148,43,130,207,4,35,191,173,233,25,
    83,200,234,163,254,32,181,137,99,207,231,25,144,127,3,202,
    234,113,74,150,28,190,59,110,79,223,217,243,45,180,205,240,
    225,136,186,159,103,82,78,142,141,172,131,131,155,28,159,87,
    248,120,98,127,76,124,106,245,182,183,50,19,183,180,137,205,
    160,167,127,186,224,95,161,122,219,156,233,138,98,126,226,98,
    123,105,132,155,202,36,112,67,194,60,205,56,99,51,96,71,
    245,210,124,242,39,46,238,57,154,10,199,115,94,232,68,182,
    131,20,213,176,142,92,126,184,63,147,239,213,250,184,168,41,
    244,188,4,80,232,163,181,190,59,124,74,151,14,233,83,36,
    244,219,67,101,190,130,0,161,109,219,20,85,220,184,45,115,
    118,161,98,205,206,84,172,202,148,201,87,195,115,98,209,168,
    90,149,153,89,65,127,27,8,153,170,177,113,179,34,254,3,
    16,231,76,212,
};

EmbeddedPython embedded_m5_internal_param_RubyCache(
    "m5/internal/param_RubyCache.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_RubyCache.py",
    "m5.internal.param_RubyCache",
    data_m5_internal_param_RubyCache,
    2516,
    7980);

} // anonymous namespace