#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GShareBP[] = {
    120,156,197,88,239,114,219,198,17,223,3,64,74,164,40,75,
    178,44,201,182,228,8,109,198,9,235,169,196,196,137,226,116,
    172,186,137,50,73,167,249,160,184,96,50,118,152,76,81,136,
    56,146,160,64,128,3,156,44,51,35,125,169,60,109,95,160,
    143,208,15,125,155,190,81,187,187,7,128,164,36,79,61,211,
    12,45,19,231,195,225,110,111,255,252,246,207,93,27,178,191,
    18,62,159,217,0,105,34,0,124,252,9,8,1,6,2,90,
    2,132,20,224,223,130,227,18,36,31,131,95,130,87,0,45,
    3,164,1,23,216,49,225,7,3,162,26,175,41,67,104,242,
    136,128,81,21,164,5,173,18,60,139,86,192,146,101,56,174,
    66,242,103,16,66,68,2,158,251,115,224,207,195,43,164,142,
    157,10,19,156,7,26,172,242,96,5,252,5,30,172,130,95,
    227,206,2,140,150,65,214,160,181,72,211,90,55,144,236,3,
    36,187,196,100,255,77,100,125,252,178,6,254,13,154,142,124,
    125,79,51,45,154,201,251,45,49,149,229,156,203,21,104,221,
    204,251,171,19,253,91,19,253,53,238,227,174,55,161,191,14,
    253,13,232,223,134,14,42,98,165,216,225,14,72,19,250,119,
    161,117,23,36,254,238,192,5,234,202,191,57,177,98,147,87,
    172,22,43,182,120,197,61,104,221,3,137,191,45,189,162,12,
    205,250,58,234,63,248,15,254,213,81,255,160,106,216,188,144,
    73,26,196,145,27,68,157,56,48,232,123,153,26,178,86,155,
    154,185,204,108,95,144,217,254,5,108,51,223,200,204,118,14,
    72,88,144,44,161,1,231,220,57,55,96,84,135,51,1,125,
    11,124,19,206,112,155,18,49,208,21,112,97,192,143,38,77,
    56,199,214,66,229,190,3,150,210,54,235,179,114,53,165,57,
    56,47,193,89,9,154,207,207,12,26,56,174,64,242,79,248,
    105,139,137,206,51,81,3,206,176,181,224,194,130,243,50,60,
    195,73,56,212,175,144,248,226,249,25,74,138,35,205,186,133,
    220,30,78,136,75,162,248,65,18,121,3,169,150,176,239,14,
    189,196,27,184,191,111,246,188,68,30,60,173,87,243,73,113,
    186,59,244,84,207,225,85,38,169,99,48,84,76,45,142,164,
    90,192,78,39,136,124,119,16,251,39,161,84,243,68,202,237,
    4,161,116,93,254,248,135,193,48,78,212,151,73,18,39,14,
    105,148,7,195,216,43,86,144,62,219,97,156,202,58,237,198,
    219,56,68,94,209,236,206,144,41,18,3,204,41,45,246,101,
    218,78,130,161,66,67,105,138,52,155,168,213,201,68,220,164,
    127,194,166,49,136,84,163,215,237,164,13,150,169,217,147,81,
    163,43,7,123,59,113,18,116,131,104,39,85,222,81,40,119,
    30,126,240,225,222,206,111,118,62,106,28,157,4,161,223,120,
    249,233,39,141,225,72,245,226,168,49,216,107,4,145,146,168,
    163,176,49,173,157,93,156,113,147,246,57,13,186,110,192,18,
    186,61,25,14,101,178,72,163,119,137,7,177,44,106,162,44,
    76,81,23,139,216,43,225,99,138,45,99,65,28,6,36,99,
    155,228,38,116,89,147,120,34,35,11,56,54,32,217,34,180,
    244,241,39,200,188,136,153,38,125,51,248,219,31,73,57,122,
    180,111,18,6,244,224,25,35,12,161,134,51,247,201,232,17,
    48,76,74,208,47,131,134,15,162,78,227,41,25,81,139,211,
    137,140,129,196,45,72,255,1,168,108,4,206,25,100,160,186,
    48,65,68,203,160,170,228,215,56,186,142,27,254,133,113,217,
    172,19,251,135,12,16,213,11,210,248,52,98,51,80,159,61,
    169,137,154,121,58,250,230,168,47,219,42,221,198,129,239,227,
    19,187,237,69,81,172,108,207,247,109,79,169,36,56,58,81,
    50,181,85,108,223,79,235,100,89,103,37,199,88,65,111,52,
    204,49,69,246,71,76,233,23,63,104,43,124,89,229,23,182,
    66,42,21,226,163,23,251,41,142,19,137,174,84,14,49,169,
    72,201,49,51,194,240,113,105,42,109,143,243,110,224,251,231,
    57,39,140,209,122,57,71,84,42,195,142,170,50,56,189,52,
    117,153,19,26,103,28,18,225,23,94,120,34,153,58,34,73,
    33,67,212,213,60,204,22,137,183,73,170,92,9,44,89,20,
    71,254,8,25,13,218,239,19,15,183,25,143,53,70,228,26,
    162,113,14,219,50,254,95,22,235,70,219,202,48,88,206,113,
    72,113,81,1,163,64,100,64,64,76,94,96,12,170,27,28,
    68,88,56,246,211,95,82,143,22,59,91,212,220,163,230,29,
    106,182,115,249,103,166,132,197,203,74,120,68,27,27,44,57,
    203,72,38,51,115,25,253,41,95,187,51,246,53,12,154,77,
    242,25,131,60,107,236,51,22,5,216,228,9,181,56,149,189,
    209,132,244,91,10,231,228,91,76,140,220,8,29,130,122,99,
    55,97,141,57,203,164,137,249,28,225,14,193,118,18,187,221,
    9,236,58,100,44,6,174,115,39,15,151,46,205,208,144,117,
    54,137,84,233,26,149,219,212,252,98,230,122,31,131,175,123,
    5,124,143,137,135,229,12,124,139,12,186,42,62,203,70,219,
    204,140,81,36,211,213,75,160,35,196,89,215,32,238,61,234,
    153,87,197,127,91,96,203,132,254,106,2,108,196,167,49,41,
    219,33,118,70,27,36,210,36,204,54,176,68,120,22,109,96,
    214,55,56,235,127,192,89,159,43,7,174,159,116,48,55,57,
    158,235,78,137,116,211,49,97,61,203,230,105,5,219,97,18,
    191,28,217,113,199,86,44,60,197,222,253,251,233,238,253,244,
    49,70,85,251,9,199,51,29,87,117,228,76,228,144,34,31,
    45,253,242,101,91,114,26,229,55,215,213,129,206,229,160,231,
    102,233,25,17,183,70,154,53,114,149,115,200,79,85,66,145,
    126,182,74,175,22,74,39,25,190,166,93,171,172,113,83,108,
    32,186,170,130,89,115,117,168,231,114,141,191,226,115,64,86,
    32,241,37,80,113,237,52,53,227,44,19,73,231,252,122,10,
    65,179,146,200,105,224,22,223,229,200,41,143,145,67,143,153,
    123,197,223,128,43,90,1,127,5,194,6,66,32,243,138,194,
    137,8,12,171,118,198,242,153,184,174,130,224,152,212,164,170,
    129,103,96,168,74,31,241,84,93,80,124,13,127,159,240,189,
    60,237,155,89,205,58,153,246,173,34,158,49,168,222,40,181,
    91,211,129,143,172,212,243,82,154,166,163,217,216,157,199,185,
    163,168,54,49,154,207,12,97,243,122,63,151,88,251,113,140,
    47,74,156,155,98,213,152,64,205,135,212,60,44,0,35,242,
    177,89,112,185,13,175,79,247,174,206,35,63,16,43,22,51,
    191,52,199,98,229,4,10,191,40,229,126,241,176,240,11,201,
    233,238,21,159,106,168,53,200,254,23,134,192,227,37,214,127,
    116,154,179,64,150,160,85,38,15,226,178,93,100,14,38,242,
    80,71,129,113,42,151,178,106,14,181,210,10,8,104,235,82,
    243,114,182,33,132,52,177,31,122,131,35,223,123,114,76,123,
    210,198,237,220,229,140,92,138,229,73,41,200,93,196,235,4,
    225,215,189,92,154,23,179,13,31,159,224,22,133,20,236,44,
    126,220,230,152,241,109,79,218,3,57,56,194,227,108,47,24,
    218,157,208,235,178,173,204,76,202,111,114,41,21,27,251,114,
    189,146,62,160,54,182,219,113,132,145,254,164,173,226,196,246,
    37,30,243,164,111,239,216,156,38,236,32,181,189,35,252,234,
    181,149,134,255,180,43,115,169,236,37,221,148,171,226,227,83,
    234,206,222,214,46,158,228,3,60,40,12,160,72,207,250,148,
    89,68,125,62,2,104,111,194,76,138,7,56,53,210,209,141,
    106,23,103,151,154,95,193,91,73,14,31,3,35,16,82,82,
    96,89,108,26,21,131,153,205,231,60,165,21,233,85,127,62,
    125,19,127,214,23,69,153,87,151,105,166,156,163,251,4,106,
    43,148,30,90,213,124,112,129,219,26,15,46,230,119,81,55,
    120,112,137,239,119,202,60,178,66,65,97,238,255,13,10,236,
    75,179,247,34,245,179,198,2,231,209,219,21,194,249,20,178,
    218,225,117,113,64,76,74,184,168,215,246,69,126,180,153,20,
    143,47,88,214,174,192,206,109,39,210,83,82,219,108,107,214,
    226,114,76,209,28,156,142,61,251,106,225,253,121,33,217,5,
    215,78,163,91,108,74,125,182,99,83,138,103,209,93,172,192,
    45,174,192,247,169,2,63,99,53,184,134,46,194,199,96,45,
    21,218,160,139,159,72,158,186,211,26,209,53,54,49,230,13,
    135,50,242,157,7,48,89,54,243,231,217,98,226,177,70,238,
    184,138,49,197,45,172,147,175,250,39,133,234,9,73,217,166,
    165,194,35,103,110,93,6,243,69,14,230,58,169,123,28,175,
    157,125,106,56,66,23,193,217,249,93,97,27,251,42,82,187,
    97,124,228,133,95,168,228,32,80,41,157,215,254,247,36,172,
    171,248,136,55,53,170,222,123,221,178,167,137,164,251,168,56,
    105,6,63,73,222,225,13,167,210,62,171,197,62,83,223,216,
    122,236,120,190,12,165,146,151,208,166,72,3,217,237,129,47,
    49,13,199,35,60,184,241,249,7,223,67,215,125,11,9,235,
    183,153,201,56,100,98,194,18,101,76,89,107,98,205,168,148,
    43,130,43,131,75,87,234,154,61,170,249,117,165,63,74,29,
    14,95,75,133,57,249,238,55,79,203,100,121,62,169,30,122,
    3,125,89,199,247,79,206,187,144,221,11,56,239,23,176,160,
    171,19,62,94,233,163,45,186,43,87,45,92,164,56,31,209,
    56,221,148,12,246,118,115,121,118,181,60,7,137,23,181,123,
    133,37,248,14,122,176,167,54,175,157,220,12,6,250,130,83,
    173,92,250,238,39,30,246,215,46,141,166,50,9,188,16,141,
    203,114,229,195,60,237,250,221,137,247,3,122,253,14,171,24,
    46,8,166,66,49,155,63,145,221,32,69,74,252,229,18,129,
    44,50,145,97,88,132,75,144,156,92,62,123,188,232,98,92,
    223,50,60,161,91,174,244,51,108,232,138,178,178,84,65,236,
    80,188,50,241,84,191,40,44,179,182,92,177,106,11,21,171,
    50,103,242,29,210,34,158,198,170,86,101,161,38,244,191,109,
    68,88,213,216,94,169,136,255,2,57,199,20,73,
};

EmbeddedPython embedded_m5_internal_param_GShareBP(
    "m5/internal/param_GShareBP.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_GShareBP.py",
    "m5.internal.param_GShareBP",
    data_m5_internal_param_GShareBP,
    2269,
    7006);

} // anonymous namespace