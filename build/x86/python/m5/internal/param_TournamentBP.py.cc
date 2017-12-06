#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_TournamentBP[] = {
    120,156,197,89,239,114,219,198,17,223,3,64,74,164,36,235,
    159,37,89,150,28,177,127,220,48,158,72,76,156,40,78,39,
    174,155,56,147,78,155,15,138,11,58,99,135,201,20,133,128,
    19,9,10,4,56,192,201,54,51,210,135,86,158,54,47,208,
    71,232,135,190,77,31,161,111,146,238,238,17,32,40,81,30,
    101,218,145,44,242,124,88,236,237,221,238,254,118,111,239,232,
    193,240,95,9,191,159,214,0,210,68,0,248,248,17,16,2,
    244,4,180,4,8,41,192,191,9,135,37,72,62,4,191,4,
    175,1,90,6,72,3,78,177,99,194,183,6,68,179,60,166,
    12,161,201,20,1,131,42,72,11,90,37,120,22,45,130,37,
    203,112,88,133,228,207,32,132,136,4,60,247,167,192,159,134,
    215,40,29,59,21,22,56,13,68,172,50,177,2,254,12,19,
    171,224,207,114,103,6,6,11,32,103,161,53,71,108,173,27,
    40,246,30,138,157,103,177,255,38,177,62,190,89,1,255,6,
    177,227,186,190,33,78,139,56,121,190,121,150,178,144,173,114,
    17,90,75,89,127,185,208,191,89,232,175,112,31,103,93,130,
    238,42,116,215,160,123,11,14,208,16,139,249,12,235,32,77,
    232,222,134,214,109,144,248,89,135,83,180,149,191,84,24,177,
    193,35,150,243,17,155,60,226,14,180,238,128,196,207,166,30,
    81,134,102,125,21,237,31,252,136,255,234,104,127,80,179,216,
    188,144,73,26,196,145,19,68,7,113,96,208,251,50,53,228,
    45,143,154,169,161,219,62,39,183,253,11,216,103,190,49,116,
    219,9,160,96,65,186,132,6,156,112,231,196,128,65,29,142,
    5,116,45,240,77,56,198,105,74,180,128,182,128,83,3,190,
    51,137,225,4,91,11,141,251,22,88,74,251,172,203,198,213,
    146,166,224,164,4,199,37,104,62,63,54,136,112,88,129,228,
    159,240,253,38,11,157,102,161,6,28,99,107,193,169,5,39,
    101,120,134,76,72,234,86,72,125,241,252,24,53,69,74,179,
    110,225,106,247,10,234,146,42,126,144,68,110,79,170,101,236,
    59,125,55,113,123,206,211,248,136,105,145,122,252,164,94,205,
    24,227,116,167,239,170,142,205,35,77,50,73,175,175,88,98,
    28,73,53,131,157,131,32,242,157,94,236,31,133,82,77,147,
    56,231,32,8,165,227,240,203,63,244,250,113,162,190,72,146,
    56,177,201,170,76,12,99,55,31,65,54,245,194,56,149,117,
    154,141,167,177,73,188,34,238,131,62,75,164,5,240,106,105,
    176,47,83,47,9,250,10,157,165,37,18,55,73,171,147,155,
    184,73,247,177,105,244,34,213,232,180,15,210,70,179,227,38,
    178,217,145,81,163,45,123,187,219,113,18,180,131,104,59,85,
    238,126,40,183,239,191,247,254,238,246,175,183,63,104,236,31,
    5,161,223,120,245,241,71,141,254,64,117,226,168,209,219,109,
    4,145,146,104,147,176,113,222,66,59,200,181,68,115,189,12,
    218,78,192,90,58,29,25,246,101,50,71,212,219,180,14,177,
    32,102,69,89,152,162,46,230,176,87,194,175,41,54,141,25,
    177,23,144,158,30,233,78,40,179,138,184,34,103,11,56,52,
    32,217,36,212,116,241,35,200,205,136,157,38,189,51,248,221,
    31,201,64,154,218,53,9,11,154,120,204,72,67,200,33,231,
    67,114,126,4,12,151,18,116,203,160,97,132,232,211,184,74,
    6,212,34,59,137,49,80,184,5,233,63,0,13,142,0,58,
    134,33,184,78,77,16,209,2,168,42,197,55,82,87,113,194,
    191,50,62,155,117,90,254,30,131,68,117,130,52,126,25,177,
    43,168,207,17,213,68,203,60,25,124,181,223,149,158,74,183,
    144,240,77,124,84,243,220,40,138,85,205,245,253,154,171,84,
    18,236,31,41,153,214,84,92,187,155,214,201,187,246,98,134,
    179,92,222,160,159,225,138,108,143,184,210,15,126,224,41,124,
    96,0,59,236,133,84,42,196,72,39,246,83,164,147,136,182,
    84,54,45,82,145,145,99,94,8,67,200,33,86,154,30,249,
    110,224,243,103,217,74,24,167,245,114,134,170,84,134,7,170,
    202,0,117,211,212,225,149,16,157,177,72,130,95,184,225,145,
    100,233,136,38,133,11,162,174,94,195,213,163,241,22,105,150,
    25,130,181,139,226,200,31,32,75,224,189,77,235,184,197,152,
    156,101,84,174,32,34,167,176,45,227,255,101,177,106,120,214,
    16,135,229,12,139,148,35,21,48,18,196,16,12,136,203,83,
    204,71,117,131,19,10,43,200,241,250,115,234,209,96,123,147,
    154,59,212,188,69,205,86,102,131,43,53,196,220,89,67,60,
    160,201,13,214,158,245,36,215,153,153,158,254,88,204,173,143,
    98,14,147,104,147,98,199,160,8,27,197,142,69,9,55,121,
    68,45,178,114,84,154,144,62,165,244,78,49,198,194,40,156,
    48,48,168,55,10,23,182,154,189,64,214,152,206,144,110,19,
    124,139,24,110,23,48,108,147,195,24,192,246,122,150,58,29,
    226,208,208,181,55,72,84,105,130,217,107,212,252,236,90,108,
    63,2,97,251,28,8,63,161,117,44,12,65,56,199,224,171,
    226,119,193,240,204,161,67,242,13,118,249,12,248,8,121,214,
    4,228,253,138,122,230,121,19,92,39,232,134,138,255,174,0,
    58,90,171,81,212,111,15,59,131,53,82,171,8,183,53,44,
    29,158,69,107,88,13,24,92,13,188,199,213,0,87,20,92,
    87,233,228,110,114,126,215,157,18,217,231,192,132,213,225,46,
    159,86,176,237,39,241,171,65,45,62,168,41,54,0,229,226,
    135,119,211,157,187,233,39,152,101,107,143,56,191,233,60,171,
    51,105,34,251,148,9,105,232,23,175,60,201,91,43,63,57,
    142,78,124,14,39,65,103,184,101,35,242,86,200,186,70,102,
    118,222,2,82,149,80,230,191,122,195,87,115,195,147,30,95,
    210,204,85,182,186,41,214,16,101,85,193,203,115,116,250,231,
    82,142,223,226,247,49,121,130,76,32,129,10,111,187,169,23,
    207,122,145,134,246,187,99,72,186,74,173,236,6,78,243,117,
    134,160,242,8,65,244,53,179,8,249,59,112,197,43,224,111,
    64,24,65,40,12,35,36,15,40,2,197,50,177,255,9,56,
    148,38,84,22,156,163,154,84,77,48,7,166,174,244,1,179,
    234,66,227,75,248,161,16,135,89,57,96,14,107,218,98,57,
    96,229,249,141,193,117,169,45,223,26,79,132,228,169,142,155,
    18,155,206,110,163,208,30,237,39,121,37,138,217,253,74,145,
    54,173,231,116,104,121,223,141,112,70,27,234,134,88,54,10,
    232,121,159,154,251,57,112,68,70,187,170,149,110,193,197,165,
    128,163,247,151,111,105,57,22,43,48,63,197,245,90,81,72,
    30,39,165,44,78,238,231,113,34,121,43,124,205,39,32,106,
    13,194,194,169,33,240,40,138,53,34,157,252,44,144,37,104,
    149,41,162,184,188,23,195,128,19,89,250,163,100,57,182,207,
    178,137,246,180,241,114,56,104,79,83,243,234,234,211,10,57,
    251,97,232,246,246,125,247,209,33,205,75,147,123,89,8,26,
    153,38,11,69,77,40,124,196,69,202,240,227,110,166,209,139,
    171,79,41,31,225,52,185,38,28,64,126,236,113,30,121,218,
    145,181,158,236,237,227,17,184,19,244,107,7,161,219,102,159,
    153,67,77,191,202,52,85,236,244,179,53,77,122,143,218,184,
    230,197,17,238,2,71,158,138,147,154,47,241,88,40,253,218,
    118,141,183,144,90,144,214,220,125,124,235,122,74,135,195,120,
    120,115,89,237,38,237,148,43,232,195,151,212,189,30,159,59,
    78,16,5,120,176,232,65,190,125,235,147,105,190,35,240,145,
    65,71,23,238,180,120,224,83,3,157,245,168,190,177,119,168,
    121,7,174,109,227,248,16,24,141,144,146,33,203,98,195,168,
    24,124,78,45,242,61,161,145,233,249,24,255,207,101,98,92,
    95,52,13,35,189,76,156,114,138,238,35,168,173,208,246,209,
    170,102,196,25,110,103,153,56,151,17,111,112,59,207,196,133,
    140,184,200,237,18,19,151,51,226,77,110,87,152,184,154,17,
    215,184,189,197,196,245,140,120,155,219,13,38,110,102,151,102,
    119,152,248,22,180,182,232,134,137,40,53,202,72,83,255,107,
    70,226,32,190,158,240,85,255,215,68,100,63,184,126,69,236,
    143,97,88,204,92,148,132,68,81,203,57,61,182,43,178,179,
    87,81,69,190,13,90,159,136,117,199,75,164,171,164,246,223,
    230,117,168,205,137,77,175,226,229,40,181,156,63,25,124,150,
    107,120,202,69,221,224,38,187,85,31,66,217,173,226,89,116,
    27,143,8,22,31,17,30,210,17,225,152,205,225,24,250,148,
    48,2,111,41,183,10,29,230,35,249,210,57,111,25,125,16,
    160,197,185,253,190,140,124,251,30,20,107,123,126,125,245,24,
    161,84,250,23,40,148,88,166,184,137,197,252,249,184,165,125,
    163,160,49,251,183,148,71,234,181,120,154,1,254,67,6,240,
    58,157,195,71,155,135,253,144,26,222,46,242,157,194,254,109,
    238,167,95,94,128,222,78,28,120,242,115,149,60,14,84,74,
    7,204,203,49,98,241,199,231,210,49,170,186,247,166,161,79,
    18,73,23,107,113,210,12,190,151,60,211,79,96,167,249,150,
    243,249,198,222,93,180,224,118,24,239,187,225,37,52,27,103,
    204,52,27,163,94,180,84,205,116,105,205,38,177,103,154,77,
    120,167,126,49,89,76,24,123,227,138,93,134,143,230,161,90,
    188,72,84,239,190,97,224,239,131,20,215,49,120,74,160,205,
    21,251,73,3,104,202,149,108,202,179,111,213,59,111,16,117,
    222,162,151,231,166,89,151,178,89,199,94,113,236,115,26,247,
    101,40,149,156,144,179,20,197,207,240,194,204,151,88,85,198,
    3,199,209,199,124,124,14,29,231,154,106,175,223,12,131,158,
    111,255,177,246,18,101,172,190,86,68,225,207,168,148,43,130,
    203,222,51,191,49,233,197,210,33,87,31,109,7,169,205,219,
    227,124,158,26,248,135,144,172,222,164,44,194,87,52,123,56,
    189,254,117,133,46,97,109,194,24,95,138,217,111,231,41,134,
    76,201,247,9,250,78,7,183,1,46,201,185,2,183,63,32,
    58,165,168,222,238,78,166,221,142,214,238,113,226,70,94,39,
    247,13,255,32,211,219,85,27,19,153,155,65,79,223,244,171,
    197,51,239,253,196,197,254,202,25,106,42,147,192,13,9,97,
    164,87,70,102,182,201,179,211,218,31,211,227,215,88,158,115,
    149,123,110,171,103,64,36,178,141,24,70,35,145,168,51,66,
    134,59,30,185,137,143,200,19,160,90,20,113,61,40,210,39,
    79,125,213,246,136,174,124,211,79,177,161,59,251,202,124,5,
    17,69,123,161,41,170,184,27,90,230,236,66,197,154,157,169,
    88,149,41,147,47,83,231,196,178,81,181,42,51,179,66,255,
    109,33,218,170,198,214,106,69,252,23,15,222,44,233,
};

EmbeddedPython embedded_m5_internal_param_TournamentBP(
    "m5/internal/param_TournamentBP.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_TournamentBP.py",
    "m5.internal.param_TournamentBP",
    data_m5_internal_param_TournamentBP,
    2414,
    7803);

} // anonymous namespace