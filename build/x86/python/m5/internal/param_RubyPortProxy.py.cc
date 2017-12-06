#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyPortProxy[] = {
    120,156,205,88,253,110,27,199,17,159,189,59,82,34,37,89,
    146,245,101,91,178,117,142,99,155,53,42,49,113,162,56,69,
    92,183,110,154,2,13,96,197,61,186,176,163,4,189,158,120,
    75,242,40,242,142,184,91,89,102,32,21,104,101,180,5,250,
    119,31,161,127,228,109,250,28,125,137,118,102,246,238,120,146,
    40,32,64,11,179,50,185,30,238,205,205,206,199,111,102,103,
    183,9,233,95,9,191,63,183,1,146,127,9,0,31,63,2,
    122,0,125,1,123,2,132,20,224,47,195,65,9,226,143,193,
    47,193,91,128,61,3,164,1,167,72,152,240,141,1,225,44,
    191,83,134,158,201,51,2,134,85,144,22,236,149,224,101,184,
    8,150,44,195,65,21,226,223,131,16,34,20,240,202,159,2,
    127,26,222,162,116,36,42,44,112,26,104,178,202,147,21,240,
    103,120,178,10,254,44,19,51,48,92,0,57,11,123,115,196,
    182,119,5,197,62,64,177,243,44,246,159,36,214,199,39,43,
    224,95,33,118,212,235,107,226,180,136,147,215,155,103,41,11,
    153,150,139,176,119,53,163,151,10,244,114,129,94,41,208,171,
    5,122,173,64,95,43,208,215,11,244,141,2,189,94,160,55,
    10,244,205,2,125,171,64,111,50,141,214,94,133,174,13,221,
    219,208,125,15,90,24,128,197,220,178,59,32,77,232,190,15,
    123,239,131,196,207,29,56,197,24,249,87,11,111,220,229,55,
    150,242,55,238,241,27,247,97,239,62,72,252,220,211,111,148,
    161,81,91,197,184,7,255,198,191,26,198,29,212,44,14,175,
    101,156,4,81,232,6,97,43,10,12,122,94,166,129,80,210,
    164,97,42,133,203,231,4,151,239,129,177,226,27,41,92,78,
    0,5,11,178,165,103,192,9,19,39,6,12,107,112,44,160,
    107,129,111,194,49,46,83,34,5,218,2,78,13,248,214,36,
    134,19,28,45,12,234,45,176,148,198,74,151,131,170,37,77,
    193,73,9,142,75,208,120,117,108,208,196,65,5,226,127,192,
    119,27,44,116,154,133,26,112,140,163,5,167,22,156,148,225,
    37,50,225,84,183,66,230,139,87,199,104,41,206,52,106,22,
    106,187,91,48,151,76,241,131,56,244,250,82,45,35,237,14,
    188,216,235,187,206,225,254,240,121,20,171,231,113,244,102,88,
    171,102,156,81,178,61,240,84,199,225,87,77,242,73,127,160,
    88,100,20,74,53,131,68,43,8,125,183,31,249,135,61,169,
    166,73,158,219,10,122,210,117,249,225,175,251,3,148,249,69,
    28,71,177,67,110,229,201,94,228,229,111,144,83,155,189,40,
    145,53,90,141,151,113,72,188,34,238,214,128,37,146,2,172,
    46,189,236,203,164,25,7,3,133,209,210,18,137,155,164,213,
    40,78,60,36,20,178,122,63,84,245,78,187,149,212,27,29,
    47,150,141,142,12,235,109,217,223,217,138,226,160,29,132,91,
    137,242,246,123,114,235,225,7,31,238,108,253,100,235,163,250,
    254,97,208,243,235,111,62,253,164,62,24,170,78,20,214,251,
    59,245,32,84,18,29,213,171,143,113,209,54,178,93,165,197,
    142,130,182,27,176,153,110,71,246,6,50,158,163,217,27,164,
    136,88,16,179,162,44,76,81,19,115,72,149,240,107,138,13,
    99,70,236,6,100,104,147,140,39,156,89,69,100,81,184,5,
    28,24,16,111,16,110,186,248,17,20,104,68,79,131,158,25,
    252,236,55,228,33,61,219,53,9,13,122,242,152,177,134,160,
    67,206,199,20,254,16,24,48,37,232,150,65,3,9,241,167,
    145,21,15,105,68,118,18,99,160,112,11,146,191,3,122,28,
    33,116,12,41,188,78,77,16,225,2,168,42,85,22,156,93,
    197,5,255,196,8,109,212,72,253,93,70,137,234,4,73,116,
    20,114,44,136,230,156,106,160,103,158,15,191,218,239,202,166,
    74,54,113,226,235,232,208,110,122,97,24,41,219,243,125,219,
    83,42,14,246,15,149,76,108,21,217,119,147,26,133,215,89,
    204,128,150,203,27,14,50,96,17,8,16,88,250,135,31,52,
    21,254,88,226,31,28,133,68,42,4,73,39,242,19,156,39,
    17,109,169,28,82,82,145,147,35,86,132,49,228,18,43,45,
    143,124,87,240,247,211,76,19,6,106,173,156,193,42,145,189,
    150,170,50,66,189,36,113,89,19,154,103,48,146,224,215,94,
    239,80,178,116,132,147,66,133,136,212,58,76,0,142,215,200,
    180,204,19,108,94,24,133,254,16,181,13,154,247,73,145,107,
    12,202,89,134,229,10,66,114,10,199,50,254,95,22,171,70,
    211,74,129,88,206,192,72,101,82,1,67,65,164,104,64,96,
    158,98,73,170,25,92,83,216,66,206,216,247,136,162,151,157,
    13,26,110,210,112,139,134,205,204,9,239,214,19,115,231,61,
    241,136,86,55,216,124,54,148,130,103,102,134,250,103,178,238,
    250,40,235,176,144,54,40,123,12,202,177,81,246,88,84,116,
    227,39,52,34,43,231,165,9,201,11,42,241,148,101,44,140,
    18,10,83,131,168,81,194,176,219,156,5,114,199,116,134,117,
    135,0,92,68,113,187,128,98,135,34,198,16,118,174,103,213,
    211,37,14,13,94,103,157,68,149,198,248,221,166,225,246,100,
    156,63,130,97,251,2,12,63,35,69,22,82,24,206,49,252,
    170,248,93,48,154,102,26,145,124,151,93,58,7,63,194,158,
    53,6,123,247,136,50,47,250,96,162,176,75,45,255,85,1,
    118,164,172,81,52,112,23,137,225,26,217,85,4,220,26,54,
    16,47,195,53,236,9,12,238,9,62,224,158,128,251,10,238,
    234,116,129,55,185,198,107,162,68,14,106,153,176,154,238,245,
    73,5,199,1,233,100,71,45,91,177,7,168,30,63,190,155,
    108,223,77,62,195,74,107,63,225,26,167,107,173,174,166,177,
    28,80,53,164,87,191,120,211,148,188,191,242,47,215,213,197,
    207,229,66,232,166,251,54,98,111,133,220,107,100,126,231,109,
    32,81,49,85,255,9,120,190,154,123,158,12,249,146,150,174,
    178,219,77,177,134,56,171,10,214,207,213,123,0,119,116,252,
    20,191,191,160,80,144,15,36,80,223,239,52,180,246,108,24,
    153,232,252,248,12,150,222,169,89,78,29,215,249,109,134,161,
    242,8,67,244,53,179,36,249,11,112,231,43,224,207,64,40,
    65,48,164,73,146,231,20,193,98,137,216,127,7,156,77,99,
    250,11,174,83,13,234,41,152,3,203,87,242,136,89,117,187,
    241,37,252,181,144,138,89,83,96,166,189,109,177,41,176,242,
    26,199,240,250,65,27,191,117,182,24,82,168,58,94,66,108,
    186,194,141,178,123,180,169,228,13,41,86,248,119,139,181,105,
    189,168,75,250,125,59,66,26,109,171,235,98,201,40,224,231,
    67,26,30,230,208,17,217,220,59,83,117,19,46,239,8,92,
    189,203,124,67,250,88,108,193,252,20,87,176,51,82,242,92,
    41,101,185,242,48,207,21,201,59,226,91,62,12,209,104,16,
    28,78,13,129,167,97,108,22,233,240,105,129,44,193,94,153,
    178,138,27,125,145,38,157,200,106,32,173,119,102,187,101,39,
    237,106,247,229,136,208,193,166,225,205,4,106,11,197,251,113,
    207,235,239,251,222,147,67,90,152,86,111,102,105,104,100,166,
    44,20,77,161,20,18,151,89,195,63,119,50,147,94,79,160,
    174,124,130,235,228,166,112,22,249,81,147,139,201,139,142,180,
    251,178,191,143,231,225,78,48,176,91,61,175,205,81,51,83,
    83,191,202,76,85,28,246,243,205,77,242,128,198,200,110,70,
    33,110,6,135,77,21,197,182,47,241,136,40,125,123,203,230,
    157,196,14,18,219,219,199,167,94,83,233,148,56,155,227,220,
    97,123,113,59,225,102,250,224,136,200,9,69,221,117,131,48,
    192,67,198,17,228,219,184,62,166,230,27,3,31,31,116,134,
    225,142,139,135,63,53,212,181,143,26,29,103,155,134,31,193,
    228,246,143,143,117,160,32,33,87,150,197,186,81,49,184,213,
    60,195,248,156,222,77,46,38,250,179,31,146,232,250,194,43,
    77,247,114,118,83,54,5,146,143,145,116,153,85,78,47,179,
    176,6,76,253,183,53,128,179,102,66,249,242,135,255,105,234,
    59,143,254,15,44,113,62,133,180,135,184,44,237,69,209,204,
    57,141,166,174,200,142,61,69,27,249,46,230,198,120,108,185,
    205,88,122,74,234,16,110,76,196,112,46,38,90,141,63,142,
    178,249,98,83,254,52,183,241,148,187,169,225,50,71,86,159,
    0,57,178,226,101,120,3,187,115,139,187,243,199,212,157,31,
    179,67,92,67,55,232,35,0,151,114,191,172,225,16,202,35,
    119,140,111,116,19,78,218,121,131,129,12,125,231,1,20,251,
    106,126,60,1,156,80,253,122,11,133,230,198,20,203,216,72,
    95,204,94,170,214,5,155,57,196,165,60,95,39,19,108,70,
    249,223,50,148,215,232,240,51,42,217,206,99,26,184,72,231,
    245,217,249,25,100,53,59,199,177,47,123,82,201,113,33,83,
    244,114,122,90,247,37,238,100,209,16,143,71,124,192,192,223,
    61,215,157,84,185,255,41,174,115,2,233,113,15,203,189,40,
    27,21,179,82,174,8,222,93,207,221,107,107,253,104,212,109,
    244,48,113,184,38,204,231,94,224,187,215,108,87,35,175,241,
    129,112,215,235,235,123,50,190,245,113,238,64,122,6,119,238,
    231,46,165,187,10,62,187,232,19,36,34,159,119,126,222,232,
    157,143,50,7,247,119,182,51,131,182,207,26,196,151,191,253,
    29,181,113,41,87,99,152,40,217,87,183,198,50,52,130,254,
    160,39,159,201,126,20,15,149,61,150,229,105,218,128,164,76,
    235,99,153,240,161,190,189,228,62,250,226,243,207,123,81,243,
    64,250,41,207,205,203,121,126,25,245,61,156,31,191,10,106,
    155,74,88,60,247,220,143,233,173,149,115,179,137,140,3,175,
    23,124,39,249,162,101,140,60,237,154,243,139,201,240,144,45,
    66,115,159,69,190,188,224,219,167,190,31,59,94,216,150,238,
    107,73,109,155,186,125,158,225,140,203,50,46,194,72,198,194,
    205,208,185,72,78,23,118,4,221,142,92,216,35,56,145,98,
    217,14,80,239,152,101,228,143,117,133,36,88,115,28,199,109,
    45,197,151,39,148,119,250,132,160,47,70,158,208,21,93,242,
    2,7,186,100,173,204,87,48,7,169,120,154,162,138,229,211,
    50,103,23,42,214,236,76,197,170,76,153,124,247,53,135,39,
    198,170,85,153,153,21,151,255,219,196,12,174,26,155,40,235,
    63,48,83,145,32,
};

EmbeddedPython embedded_m5_internal_param_RubyPortProxy(
    "m5/internal/param_RubyPortProxy.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_RubyPortProxy.py",
    "m5.internal.param_RubyPortProxy",
    data_m5_internal_param_RubyPortProxy,
    2325,
    7355);

} // anonymous namespace