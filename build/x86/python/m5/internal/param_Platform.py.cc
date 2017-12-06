#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Platform[] = {
    120,156,197,88,255,111,219,198,21,127,71,82,178,37,203,177,
    29,199,118,18,187,49,147,214,171,22,204,86,155,214,77,135,
    166,193,178,172,3,90,160,110,70,117,72,226,22,227,104,241,
    36,81,166,72,129,60,39,81,39,3,195,28,172,251,7,246,
    39,236,135,253,55,67,255,161,237,189,119,164,76,217,206,80,
    160,133,236,72,151,211,241,241,221,251,242,121,95,238,90,144,
    253,149,240,251,27,27,32,253,65,0,248,248,17,16,2,244,
    5,236,11,16,82,128,127,13,14,75,144,124,8,126,9,94,
    3,236,27,32,13,56,193,137,9,223,24,16,213,248,157,50,
    132,38,175,8,24,86,65,90,176,95,130,167,209,18,88,178,
    12,135,85,72,254,12,66,136,72,192,51,127,6,252,89,120,
    141,220,113,82,97,134,179,64,139,85,94,172,128,63,199,139,
    85,240,107,60,153,131,225,34,200,26,236,207,19,217,254,21,
    100,123,23,217,46,48,219,255,16,91,31,159,172,128,127,133,
    200,81,174,231,68,105,17,37,239,183,192,92,22,115,41,151,
    96,255,106,62,95,46,204,175,21,230,43,133,249,106,97,190,
    86,152,95,47,204,111,20,230,55,11,243,245,194,124,163,48,
    127,139,231,168,213,85,232,221,130,222,38,244,108,104,163,161,
    151,198,26,220,6,105,66,239,14,236,223,1,137,159,219,112,
    130,190,240,175,22,222,120,155,223,88,30,191,241,14,191,177,
    5,251,91,32,241,243,142,126,163,12,205,250,42,250,55,248,
    47,254,213,209,191,160,106,56,188,144,73,26,196,145,27,68,
    237,56,48,232,121,153,6,66,67,139,134,153,12,22,143,9,
    22,255,6,198,132,111,100,176,56,6,100,44,72,151,208,128,
    99,158,28,27,48,172,195,72,64,207,2,223,132,17,110,83,
    34,1,58,2,78,12,248,214,36,130,99,28,45,116,222,45,
    176,148,198,68,143,157,167,57,205,192,113,9,70,37,104,62,
    27,25,180,112,88,129,228,95,240,221,6,51,157,101,166,6,
    140,112,180,224,196,130,227,50,60,69,34,92,234,85,72,125,
    241,108,132,154,226,74,179,110,161,180,123,5,117,73,21,63,
    72,34,175,47,213,2,206,221,129,151,120,125,247,73,232,169,
    118,156,244,235,213,156,40,78,119,6,158,234,58,252,150,73,
    230,232,15,20,115,139,35,169,230,112,210,14,34,223,237,199,
    254,81,40,213,44,177,114,219,65,40,93,151,31,126,222,31,
    196,137,250,44,73,226,196,33,139,242,98,24,123,227,55,200,
    158,173,48,78,101,157,118,227,109,28,98,175,136,186,61,96,
    142,36,0,75,74,47,251,50,109,37,193,64,161,163,52,71,
    162,38,110,117,114,17,15,233,159,112,104,244,35,213,232,118,
    218,105,163,217,245,18,217,236,202,168,209,145,253,221,237,56,
    9,58,65,180,157,42,239,32,148,219,247,222,123,127,119,251,
    215,219,31,52,14,142,130,208,111,188,250,248,163,198,96,168,
    186,113,212,232,239,54,130,72,73,180,81,216,152,180,206,14,
    82,92,165,125,94,6,29,55,96,13,221,174,12,7,50,153,
    167,213,155,36,131,88,20,53,81,22,166,168,139,121,156,149,
    240,107,138,13,99,78,236,5,164,99,139,244,38,116,89,69,
    60,145,147,5,28,26,144,108,16,90,122,248,17,228,94,196,
    76,147,158,25,252,236,15,100,28,189,218,51,9,3,122,113,
    196,8,67,168,33,229,3,114,122,4,12,147,18,244,202,160,
    225,131,168,211,120,74,134,52,34,57,177,49,144,185,5,233,
    63,1,141,141,192,25,65,6,170,19,19,68,180,8,170,74,
    121,3,87,87,113,195,191,49,46,155,117,18,127,143,1,162,
    186,65,26,191,140,216,13,52,231,72,106,162,101,158,12,191,
    58,232,201,150,74,55,113,225,121,124,100,183,188,40,138,149,
    237,249,190,237,41,149,4,7,71,74,166,182,138,237,173,180,
    78,158,117,150,114,140,141,249,13,7,57,166,200,255,136,41,
    253,195,15,90,10,127,44,243,15,246,66,42,21,226,163,27,
    251,41,174,19,139,142,84,14,9,169,200,200,49,11,194,240,
    113,137,148,182,71,186,43,248,251,81,46,9,99,180,94,206,
    17,149,202,176,173,170,12,78,47,77,93,150,132,214,25,135,
    196,248,133,23,30,73,230,142,72,82,40,16,77,181,12,211,
    69,226,117,210,42,55,2,107,22,197,145,63,68,65,131,214,
    187,36,195,117,198,99,141,17,185,130,104,156,193,177,140,255,
    151,197,170,209,178,50,12,150,115,28,82,94,84,192,40,16,
    25,16,16,147,39,152,131,234,6,39,17,86,142,227,244,14,
    205,232,101,103,131,134,183,104,184,69,195,102,174,255,212,140,
    48,127,214,8,247,105,99,131,53,103,29,201,101,102,174,163,
    63,17,107,55,78,99,13,147,102,147,98,198,160,200,58,141,
    25,139,18,108,242,144,70,36,229,104,52,33,253,154,210,57,
    197,22,51,163,48,194,128,160,217,105,152,176,197,156,69,178,
    196,108,142,112,135,96,91,196,110,167,128,93,135,156,197,192,
    117,110,228,233,210,37,10,13,89,103,157,88,149,46,48,185,
    77,195,237,169,219,253,20,124,157,115,224,251,132,100,88,204,
    192,55,207,160,171,226,119,209,104,153,153,51,198,197,116,249,
    12,232,8,113,214,5,136,251,5,205,204,243,234,95,22,216,
    50,165,127,95,0,27,201,105,20,117,219,195,201,112,141,84,
    42,194,108,13,91,132,167,209,26,86,125,131,171,254,123,92,
    245,185,115,224,254,76,39,115,147,243,185,158,148,200,54,109,
    19,86,179,106,158,86,112,28,36,241,171,161,29,183,109,197,
    202,83,238,125,176,149,238,108,165,159,96,86,181,31,114,62,
    211,121,85,103,206,68,14,40,243,209,171,159,189,106,73,46,
    163,252,203,117,117,162,115,57,233,185,89,121,70,196,173,144,
    101,141,220,228,156,242,83,149,80,166,159,174,209,171,99,163,
    147,14,95,208,174,85,182,184,41,214,16,93,85,193,162,185,
    58,213,115,187,198,79,241,251,91,242,2,169,47,129,154,119,
    167,169,5,103,157,72,59,231,87,19,8,154,150,70,78,3,
    183,248,99,142,156,242,41,114,232,107,230,81,241,61,112,71,
    43,224,239,64,216,64,8,100,81,49,14,34,2,195,178,157,
    137,60,18,23,117,16,156,147,154,212,53,48,5,166,170,244,
    62,147,234,134,226,11,248,71,33,246,242,178,111,102,61,107,
    177,236,91,227,124,198,160,250,81,165,221,154,76,124,228,165,
    174,151,18,153,206,102,167,225,124,90,59,198,221,38,102,243,
    169,33,108,86,239,231,146,104,223,158,226,139,10,231,186,88,
    54,10,168,121,159,134,123,99,192,136,124,109,26,82,110,194,
    155,203,189,171,235,200,55,36,138,197,194,47,204,176,90,57,
    131,113,92,148,242,184,184,55,142,11,201,229,238,53,159,106,
    104,52,200,255,39,134,192,227,43,246,127,116,90,180,64,150,
    96,191,76,17,196,109,187,200,2,76,228,169,142,18,227,68,
    45,101,211,236,105,163,141,33,160,189,75,195,171,233,166,16,
    178,196,131,208,235,31,248,222,195,148,246,164,141,91,121,200,
    25,185,22,139,69,45,40,92,196,155,20,225,159,187,185,54,
    47,166,155,62,62,202,52,96,45,56,88,252,184,197,57,227,
    235,174,180,251,178,127,128,199,217,110,48,176,219,161,215,97,
    95,153,153,150,95,229,90,42,118,246,217,126,37,189,75,99,
    108,183,226,8,51,253,81,75,197,137,237,75,60,230,73,223,
    222,182,185,76,216,65,106,123,7,248,212,107,41,13,255,201,
    80,230,86,217,75,58,41,119,197,135,47,105,58,125,95,187,
    120,146,15,240,160,112,4,227,242,172,79,153,227,172,207,71,
    0,29,77,88,73,241,0,167,134,58,187,81,239,226,236,208,
    240,75,184,148,226,240,33,110,145,208,94,100,192,178,88,55,
    42,6,11,155,211,60,161,55,210,243,241,252,252,199,196,179,
    190,136,66,2,89,134,222,12,143,179,84,21,232,158,201,202,
    238,153,104,113,14,246,107,249,253,214,60,133,125,249,167,134,
    61,71,203,244,227,100,244,179,70,187,115,255,114,149,112,62,
    134,172,59,120,83,164,79,52,160,143,116,164,107,223,96,15,
    49,188,198,10,235,51,14,43,44,158,70,55,177,19,181,184,
    19,125,64,157,232,136,187,85,215,208,205,232,169,75,249,232,
    193,215,46,116,1,18,201,151,238,36,32,117,175,73,48,241,
    6,3,25,249,206,93,40,182,143,252,120,186,150,163,72,254,
    43,20,170,185,41,174,97,191,120,30,197,148,178,10,154,50,
    90,75,99,220,110,92,138,203,191,207,93,94,191,50,145,183,
    156,7,52,44,78,36,41,237,150,245,115,57,2,147,160,74,
    90,42,9,233,180,242,127,159,99,67,193,121,51,95,96,219,
    41,218,212,151,161,84,242,140,175,21,237,159,157,97,125,137,
    197,32,30,226,241,129,187,112,252,29,186,238,37,164,205,79,
    113,139,191,64,118,18,194,180,137,231,205,21,163,82,174,8,
    174,77,103,46,117,181,104,116,166,212,189,230,48,117,56,188,
    22,198,214,228,219,199,188,48,144,205,249,172,180,231,245,245,
    117,17,223,128,56,111,67,118,50,117,222,29,59,132,14,239,
    220,224,235,195,21,6,10,215,77,46,147,206,7,180,78,103,
    215,254,238,78,174,203,142,214,229,115,52,253,99,60,146,37,
    113,200,55,160,253,93,62,98,159,39,108,14,83,37,251,236,
    206,226,67,25,29,245,221,47,101,63,78,134,95,198,190,84,
    27,103,158,63,242,253,196,241,162,142,116,95,72,42,236,234,
    246,89,130,172,170,107,30,57,149,125,161,12,147,180,231,100,
    209,68,248,80,223,3,114,231,122,254,249,227,48,110,29,74,
    63,163,185,216,42,76,243,187,184,239,225,250,197,187,52,131,
    124,151,165,51,207,253,132,222,90,57,179,154,202,36,240,194,
    224,59,153,3,158,151,249,42,252,44,67,114,224,248,23,215,
    101,230,150,163,142,241,159,200,78,128,254,72,152,193,152,56,
    75,137,159,190,33,46,139,47,78,63,84,116,55,172,143,249,
    15,233,154,41,125,130,3,221,17,86,22,42,162,108,80,162,
    52,241,88,61,47,44,179,182,88,177,106,115,21,171,50,99,
    242,37,206,60,30,135,170,86,101,174,38,46,254,183,137,1,
    87,53,54,231,43,226,127,157,37,35,24,
};

EmbeddedPython embedded_m5_internal_param_Platform(
    "m5/internal/param_Platform.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_Platform.py",
    "m5.internal.param_Platform",
    data_m5_internal_param_Platform,
    2299,
    6991);

} // anonymous namespace