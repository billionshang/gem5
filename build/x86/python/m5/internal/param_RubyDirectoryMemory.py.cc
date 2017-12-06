#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyDirectoryMemory[] = {
    120,156,205,89,109,115,219,198,17,222,3,64,74,164,40,139,
    122,183,45,53,66,211,113,194,186,149,152,56,81,156,142,85,
    181,105,155,206,36,51,81,82,48,29,59,76,166,40,68,28,
    73,80,36,192,1,78,182,153,145,190,148,158,182,31,250,181,
    63,161,31,250,111,250,143,210,221,61,0,164,94,199,157,118,
    202,72,228,233,112,184,219,219,151,103,247,118,79,45,72,127,
    10,248,253,165,13,144,180,5,128,143,31,1,125,128,129,128,
    166,0,33,5,248,107,112,82,128,248,125,240,11,240,10,160,
    105,128,52,96,140,29,19,190,54,32,172,240,154,34,244,77,
    30,17,48,42,131,180,160,89,128,167,225,50,88,178,8,39,
    101,136,255,8,66,136,80,192,51,127,14,252,121,120,133,212,
    177,83,98,130,243,64,131,101,30,44,129,191,192,131,101,240,
    43,220,89,128,81,21,100,5,154,139,52,173,121,7,201,62,
    68,178,75,76,246,95,68,214,199,55,235,224,223,161,233,200,
    215,87,52,211,162,153,188,223,18,83,169,102,92,46,67,115,
    37,235,175,78,245,215,184,143,59,173,64,111,29,122,27,208,
    219,4,84,136,191,156,83,189,11,210,132,222,61,104,222,3,
    137,159,187,48,70,253,248,43,83,43,238,243,138,213,124,197,
    22,175,216,134,230,54,72,252,108,233,21,69,104,212,54,80,
    231,193,119,248,83,67,157,131,170,96,243,92,198,73,16,133,
    110,16,182,163,192,160,247,69,106,200,66,45,106,230,82,83,
    253,154,76,245,79,96,59,249,70,106,170,115,64,194,130,100,
    233,27,112,206,157,115,3,70,53,56,19,208,179,192,55,225,
    12,183,41,16,3,29,1,99,3,190,49,105,194,57,182,22,
    42,244,13,176,148,182,83,143,21,170,41,205,193,121,1,206,
    10,208,120,118,102,208,192,73,9,226,127,192,183,219,76,116,
    158,137,26,112,134,173,5,99,11,206,139,240,20,39,225,80,
    175,68,226,139,103,103,40,41,142,52,106,22,114,123,52,37,
    46,137,226,7,113,232,13,164,186,143,125,119,232,197,222,192,
    117,78,143,71,191,9,98,217,82,81,60,250,76,14,176,173,
    149,179,249,81,178,55,244,84,215,97,2,38,105,102,48,84,
    76,56,10,165,90,192,78,59,8,125,119,16,249,167,125,169,
    230,137,170,219,14,250,210,117,249,229,39,131,97,20,171,143,
    227,56,138,29,82,46,15,246,35,47,95,65,170,109,245,163,
    68,214,104,55,222,198,33,242,138,102,183,135,76,145,24,96,
    166,105,177,47,147,86,28,12,21,218,76,83,164,217,68,173,
    70,214,226,38,33,235,213,7,161,170,119,59,237,164,222,232,
    122,177,108,116,101,88,239,200,193,254,110,20,7,157,32,220,
    77,148,119,220,151,187,143,222,121,119,127,247,103,187,239,213,
    143,79,131,190,95,127,249,225,7,245,225,72,117,163,176,62,
    216,175,7,161,146,168,174,126,253,70,69,237,225,228,21,218,
    242,69,208,113,3,22,214,237,202,254,80,198,139,52,74,90,
    6,81,21,21,81,20,166,168,137,69,236,21,240,107,138,109,
    99,65,28,5,36,110,139,84,64,152,179,166,81,70,166,23,
    112,98,64,188,77,24,234,225,71,144,209,17,73,13,122,103,
    240,187,223,145,158,244,104,207,36,100,232,193,51,198,29,2,
    16,103,30,16,20,66,96,240,20,160,87,4,13,42,196,162,
    70,89,60,162,22,167,19,25,3,137,91,144,252,29,80,239,
    8,167,51,72,161,54,54,65,132,85,80,101,242,112,28,221,
    192,13,255,196,104,109,212,136,253,35,198,138,234,6,73,244,
    34,100,139,80,159,253,171,129,154,249,98,244,249,113,15,213,
    150,236,224,192,87,209,169,221,242,194,48,82,182,231,251,182,
    167,84,28,28,159,42,153,216,42,178,31,36,53,50,178,179,
    156,193,45,167,55,26,102,240,34,40,32,188,244,131,31,180,
    20,62,172,242,3,91,33,145,10,161,210,141,252,4,199,137,
    68,71,42,135,152,84,164,228,136,25,97,36,185,52,149,182,
    199,121,119,240,249,163,140,19,134,107,173,152,129,43,145,253,
    182,42,51,78,189,36,113,153,19,26,103,72,18,225,231,94,
    255,84,50,117,4,149,66,134,168,171,121,152,25,40,239,146,
    128,153,62,88,200,48,10,253,17,242,28,180,222,38,118,238,
    50,52,43,12,206,117,4,230,28,182,69,252,91,20,27,70,
    203,74,225,88,204,32,73,129,83,1,3,66,164,152,64,120,
    142,49,72,213,12,142,50,44,39,123,239,155,212,163,197,206,
    54,53,63,160,230,13,106,118,50,85,204,66,31,139,151,245,
    241,152,120,48,88,9,44,46,25,210,204,196,245,47,120,224,
    189,137,7,98,128,109,144,39,25,228,111,19,79,178,40,24,
    199,135,212,226,84,246,81,19,146,47,41,244,147,199,49,49,
    114,46,116,19,234,77,156,135,149,231,84,73,41,243,25,238,
    29,2,243,52,162,59,83,136,118,200,110,12,103,231,94,22,
    79,93,154,161,129,236,108,17,169,194,53,218,183,169,249,225,
    44,77,48,129,100,231,10,36,159,16,59,213,20,146,139,12,
    197,50,126,171,70,203,76,237,146,159,193,171,151,160,72,56,
    180,174,193,225,91,212,51,175,106,226,123,0,193,84,254,223,
    78,65,144,88,54,166,197,60,194,206,104,147,164,155,6,223,
    38,38,25,79,195,77,204,27,12,206,27,222,225,188,129,115,
    15,206,186,116,224,55,57,246,235,78,129,212,212,54,97,35,
    205,7,146,18,182,195,56,122,57,178,163,182,173,88,15,20,
    167,15,30,36,123,15,146,39,24,129,237,67,142,125,58,6,
    235,40,27,203,33,69,73,90,250,241,203,150,228,211,151,159,
    92,87,7,69,151,3,164,155,158,234,136,195,117,82,178,145,
    105,159,143,135,68,197,116,42,204,76,255,229,92,255,36,206,
    167,196,64,153,149,111,138,77,196,92,89,48,151,174,62,33,
    56,247,227,183,248,253,21,25,132,52,33,129,178,115,167,161,
    101,96,241,72,80,231,167,23,112,53,3,225,156,58,238,246,
    251,12,79,197,9,158,232,107,102,110,243,23,224,76,89,192,
    159,129,16,131,192,72,221,38,247,50,130,200,42,77,255,3,
    176,127,93,147,131,112,252,106,80,222,193,51,48,172,37,143,
    121,170,78,73,62,133,191,78,57,103,150,56,152,105,46,60,
    157,56,88,121,236,99,168,189,86,114,96,93,12,146,100,176,
    174,151,208,52,29,249,38,254,62,57,114,242,212,21,35,255,
    44,112,55,175,183,118,137,203,111,38,168,163,163,119,75,172,
    26,83,88,122,151,154,71,57,140,68,54,246,127,102,120,7,
    110,206,29,92,125,18,125,77,92,89,44,199,210,156,90,194,
    191,151,232,228,254,83,200,252,231,81,238,63,146,207,205,87,
    92,74,81,107,16,56,198,134,192,58,22,211,75,42,27,45,
    144,5,104,22,201,211,184,64,16,169,35,138,44,58,82,44,
    189,112,40,179,178,142,180,26,115,124,104,211,83,243,114,102,
    81,135,172,127,208,247,6,199,190,119,216,163,237,137,135,86,
    230,154,70,38,80,117,90,32,114,43,113,147,76,252,184,159,
    9,246,124,102,17,231,3,96,118,181,64,236,95,126,212,226,
    48,243,101,87,218,3,57,56,198,202,186,27,12,237,118,223,
    235,176,5,205,84,224,207,51,129,21,67,224,114,58,148,60,
    164,54,178,91,81,136,71,198,41,109,107,251,18,203,76,233,
    219,187,54,159,55,118,144,216,222,49,190,245,90,74,187,201,
    69,239,231,252,220,139,59,9,167,226,39,47,168,59,83,4,
    184,110,16,6,88,168,244,33,63,242,117,193,155,31,31,92,
    130,104,175,195,211,25,11,72,53,210,177,145,82,35,103,143,
    154,31,195,172,79,153,247,65,95,141,36,164,214,162,216,50,
    74,134,162,52,244,154,233,95,16,157,228,106,24,248,219,235,
    132,1,125,145,149,6,131,34,205,148,115,116,247,65,109,137,
    142,156,102,57,27,92,224,182,194,131,139,217,224,29,110,151,
    120,176,154,93,160,45,243,224,10,52,87,233,230,137,70,214,
    40,192,204,253,183,1,134,157,113,166,110,152,252,79,227,138,
    243,248,123,35,143,243,33,164,169,203,77,49,69,76,11,187,
    168,99,74,79,100,85,216,180,164,124,89,100,223,6,86,183,
    21,75,79,73,109,212,237,25,42,129,163,150,102,230,249,36,
    96,92,173,17,62,202,229,29,115,66,55,90,99,91,235,226,
    148,109,45,158,134,247,177,88,176,184,88,56,160,98,225,140,
    149,227,26,186,94,152,0,187,144,235,136,42,165,80,190,184,
    142,55,173,39,93,25,16,143,222,112,40,67,223,121,8,211,
    201,62,191,158,25,126,158,104,192,79,178,44,83,172,97,118,
    127,213,195,233,136,152,146,159,141,94,200,125,122,150,230,103,
    31,24,103,62,80,227,35,34,63,39,156,3,106,248,100,200,
    15,5,231,23,185,241,126,114,43,192,195,211,129,231,118,131,
    78,215,61,198,211,8,203,208,255,104,62,102,131,92,196,94,
    24,85,111,222,74,33,9,190,149,188,209,107,76,35,250,124,
    225,134,15,234,193,173,243,179,91,123,162,252,122,51,137,56,
    133,250,244,153,113,194,225,192,151,125,169,228,205,104,87,164,
    235,244,38,198,151,152,115,68,35,44,119,185,84,196,231,190,
    235,206,246,72,254,57,238,22,211,182,116,13,141,71,178,40,
    226,161,188,46,240,215,40,21,75,130,115,162,75,255,215,208,
    188,146,155,235,178,104,148,56,28,108,151,114,20,241,173,123,
    150,133,16,224,184,216,63,242,6,250,110,148,239,248,156,31,
    65,122,203,226,188,157,163,145,147,129,122,182,192,197,48,194,
    249,26,167,103,206,123,52,78,189,193,254,94,38,220,158,22,
    174,17,12,244,21,49,223,251,15,246,213,242,165,105,126,236,
    97,127,253,210,104,34,227,192,235,19,92,136,227,108,152,235,
    145,203,116,137,159,252,137,19,25,69,62,126,73,163,108,230,
    88,118,130,4,73,49,157,124,77,26,251,72,223,234,173,219,
    193,60,69,99,166,224,208,197,135,190,147,57,164,155,194,228,
    16,27,186,241,45,45,149,16,40,20,28,77,81,198,240,104,
    153,149,106,201,170,44,148,172,210,156,201,151,111,139,88,154,
    150,173,210,66,69,208,239,14,66,169,108,236,172,148,196,191,
    1,123,119,179,116,
};

EmbeddedPython embedded_m5_internal_param_RubyDirectoryMemory(
    "m5/internal/param_RubyDirectoryMemory.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_RubyDirectoryMemory.py",
    "m5.internal.param_RubyDirectoryMemory",
    data_m5_internal_param_RubyDirectoryMemory,
    2293,
    7360);

} // anonymous namespace