#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Prefetcher[] = {
    120,156,197,89,221,115,219,198,17,223,3,64,74,164,36,75,
    178,190,108,75,182,224,175,134,245,84,98,226,68,113,58,113,
    221,186,105,58,211,204,68,113,193,116,236,40,153,34,16,113,
    36,65,145,0,11,156,108,211,149,250,80,121,250,241,214,151,
    252,9,125,232,63,210,231,254,51,125,78,118,247,8,16,164,
    168,177,103,218,145,44,242,124,88,236,237,237,238,253,118,111,
    239,88,135,193,191,2,126,127,97,3,36,255,22,0,62,126,
    4,116,0,186,2,246,4,8,41,192,95,134,131,2,196,31,
    128,95,128,215,0,123,6,72,3,78,176,99,194,215,6,132,
    179,60,166,8,29,147,41,2,250,101,144,22,236,21,224,105,
    184,8,150,44,194,65,25,226,111,65,8,17,10,120,230,79,
    129,63,13,175,81,58,118,74,44,112,26,136,88,102,98,9,
    252,25,38,150,193,159,229,206,12,244,23,64,206,194,222,28,
    177,237,93,66,177,247,80,236,60,139,253,15,137,245,241,205,
    10,248,151,136,29,245,250,138,56,45,226,228,249,230,89,202,
    66,170,229,34,236,93,78,251,75,185,254,114,174,191,146,235,
    175,230,250,107,185,254,149,92,255,106,174,127,45,215,95,207,
    245,55,184,143,150,92,134,246,117,104,223,128,246,38,52,208,
    185,139,153,214,54,72,19,218,55,97,239,38,72,252,216,112,
    130,254,247,47,231,70,220,226,17,75,217,136,219,60,226,14,
    236,221,1,137,159,219,122,68,17,106,149,85,92,211,224,123,
    252,87,193,53,5,53,139,205,115,25,39,65,20,186,65,216,
    136,2,131,222,23,169,33,4,212,169,153,26,64,225,19,130,
    194,191,128,113,224,27,3,40,28,3,10,22,100,75,199,128,
    99,238,28,27,208,175,192,145,128,182,5,190,9,71,56,77,
    129,20,104,10,56,49,224,27,147,24,142,177,181,112,193,110,
    128,165,52,14,218,188,96,90,210,20,28,23,224,168,0,181,
    103,71,6,17,14,74,16,255,19,94,109,176,208,105,22,106,
    192,17,182,22,156,88,112,92,132,167,200,132,164,118,137,204,
    23,207,142,208,82,164,212,42,22,106,187,155,51,151,76,241,
    131,56,244,186,82,45,98,223,237,121,177,215,117,159,196,178,
    33,85,189,37,227,74,57,101,139,146,237,158,167,90,14,143,
    51,201,33,221,158,98,121,81,40,213,12,118,26,65,232,187,
    221,200,63,236,72,53,77,194,220,70,208,145,174,203,47,127,
    211,237,69,177,250,52,142,163,216,33,159,50,177,19,121,217,
    8,242,104,189,19,37,178,66,179,241,52,14,137,87,196,221,
    232,177,68,82,128,117,165,193,190,76,234,113,208,83,184,84,
    90,34,113,147,180,10,45,18,55,201,183,216,84,187,161,170,
    182,154,141,164,90,107,121,177,172,181,100,88,109,202,238,206,
    86,20,7,205,32,220,74,148,183,223,145,91,247,223,125,111,
    103,235,167,91,239,87,247,15,131,142,95,125,249,209,135,213,
    94,95,181,162,176,218,221,169,6,161,146,232,165,78,117,220,
    63,219,200,115,153,102,122,17,52,221,128,109,116,91,178,211,
    147,241,28,81,175,145,22,98,65,204,138,162,48,69,69,204,
    97,175,128,95,83,108,24,51,98,55,32,43,235,100,57,33,
    204,202,99,138,22,90,192,129,1,241,6,33,166,141,31,65,
    75,140,184,169,209,59,131,223,253,150,220,163,169,109,147,112,
    160,137,71,140,50,132,27,114,62,164,133,15,129,161,82,128,
    118,17,52,132,16,121,26,83,113,159,90,100,39,49,6,10,
    183,32,249,14,208,221,8,158,35,24,0,235,196,4,17,46,
    128,42,83,190,64,234,42,78,248,103,198,102,173,66,234,239,
    50,68,84,43,72,162,23,33,47,4,245,57,154,106,232,153,
    39,253,47,246,219,178,174,146,77,36,124,21,29,218,117,47,
    12,35,101,123,190,111,123,74,197,193,254,161,146,137,173,34,
    251,110,82,161,181,117,22,83,148,101,242,250,189,20,85,132,
    0,68,149,126,240,131,186,194,135,37,126,224,85,72,164,66,
    132,180,34,63,65,58,137,104,74,229,144,146,138,156,28,177,
    34,12,32,151,88,105,122,228,187,132,207,143,83,77,24,165,
    149,98,138,169,68,118,26,170,204,240,244,146,196,101,77,136,
    206,72,36,193,207,189,206,161,100,233,136,37,133,10,81,87,
    235,112,222,88,188,66,118,165,110,96,219,194,40,244,251,168,
    106,80,127,135,180,184,194,136,156,101,76,174,32,30,167,176,
    45,226,255,69,177,106,212,173,1,10,139,41,18,41,59,42,
    96,28,136,1,20,16,149,39,152,137,42,6,167,18,54,143,
    99,245,22,245,104,176,179,65,205,117,106,110,80,179,153,122,
    224,28,221,48,55,238,134,7,52,181,193,182,179,149,180,108,
    102,106,165,63,18,111,87,135,241,134,201,179,70,113,99,80,
    116,13,227,198,162,68,27,63,162,22,89,57,34,77,72,190,
    164,180,78,241,197,194,40,148,48,40,168,55,12,21,246,153,
    179,64,190,152,78,81,238,16,116,243,248,109,230,240,235,208,
    114,49,120,157,171,105,210,116,137,67,195,214,89,39,81,133,
    9,78,183,169,185,121,1,158,31,2,176,121,10,128,31,147,
    22,11,3,0,206,49,240,202,248,93,48,234,230,96,57,178,
    109,117,105,12,120,132,58,107,2,234,126,68,61,243,180,3,
    46,14,112,3,179,127,157,3,28,105,106,228,173,219,197,78,
    127,141,140,202,67,109,13,203,133,167,225,26,86,0,6,87,
    0,239,114,5,192,85,4,215,103,58,169,155,156,215,117,167,
    64,222,105,152,176,58,216,217,147,18,182,189,56,122,217,183,
    163,134,173,216,124,202,193,15,239,38,219,119,147,143,49,187,
    218,143,56,175,233,252,170,51,104,44,123,148,1,105,232,167,
    47,235,146,55,84,126,114,93,157,240,92,78,126,238,96,163,
    70,212,173,144,111,141,212,233,156,250,19,21,83,198,63,111,
    183,151,51,183,147,21,159,209,188,101,246,185,41,214,16,97,
    101,193,202,185,58,233,115,241,198,111,241,251,75,90,7,114,
    128,4,42,223,157,154,86,157,173,34,251,156,159,140,160,232,
    252,108,114,170,56,201,239,82,244,20,135,232,161,175,153,198,
    198,95,129,43,92,1,127,1,194,7,194,96,16,27,89,40,
    17,32,150,136,253,247,192,65,52,161,154,224,220,84,163,10,
    130,57,48,101,37,15,152,85,23,23,159,193,223,114,17,152,
    150,0,230,160,134,205,151,0,86,150,215,24,88,111,181,205,
    91,163,9,144,214,169,229,37,196,166,179,218,48,168,135,187,
    72,86,123,98,86,63,71,148,77,235,25,93,82,238,155,33,
    198,104,19,93,23,75,70,14,57,239,81,115,63,3,141,72,
    105,231,163,231,38,156,189,249,187,122,79,249,154,148,177,88,
    253,249,41,14,159,161,136,44,62,10,105,124,220,207,226,67,
    242,230,247,154,207,58,212,26,132,130,19,67,224,65,22,43,
    66,58,55,90,32,11,176,87,164,72,226,82,94,12,2,77,
    164,73,143,82,228,200,206,202,238,217,213,142,203,128,160,215,
    152,154,151,231,157,76,104,153,31,118,188,238,190,239,61,138,
    105,86,154,186,158,134,158,145,218,177,144,183,131,194,70,156,
    101,10,63,238,164,246,60,63,239,68,242,33,78,146,217,193,
    97,227,71,117,206,30,95,182,164,221,149,221,125,60,232,182,
    130,158,221,232,120,77,94,47,115,96,231,23,169,157,138,23,
    124,188,130,73,238,81,27,217,245,40,196,188,127,88,87,81,
    108,251,18,143,127,210,183,183,108,222,52,236,32,177,189,125,
    124,235,213,149,14,131,209,160,230,2,218,139,155,9,215,202,
    7,47,168,123,17,235,237,226,41,63,160,3,4,100,219,181,
    62,127,102,123,0,31,13,116,84,225,206,138,7,59,213,215,
    153,142,170,25,103,155,154,31,195,5,109,21,31,224,36,127,
    160,217,200,137,69,177,110,148,12,181,48,18,211,79,104,84,
    114,58,178,255,251,54,145,173,47,167,6,241,93,36,78,57,
    69,247,13,212,150,104,187,216,43,167,196,25,110,103,153,56,
    151,18,47,113,59,207,196,133,148,184,200,237,101,38,46,165,
    196,101,110,87,152,184,154,18,215,184,189,194,196,171,41,241,
    26,183,235,76,220,72,137,215,185,189,193,196,205,244,246,205,
    102,226,77,216,187,69,215,74,68,185,77,201,105,234,127,77,
    78,28,209,23,17,203,127,252,191,230,36,231,193,69,155,225,
    124,4,131,106,230,172,124,36,242,54,206,233,124,212,22,233,
    161,43,111,32,95,0,173,77,128,190,91,143,165,167,164,94,
    185,141,243,55,153,243,155,214,225,79,195,28,115,250,72,240,
    56,179,238,132,43,186,254,50,47,168,62,121,242,130,138,167,
    225,53,60,27,88,124,54,120,72,103,131,35,118,133,107,232,
    227,193,16,180,133,204,35,203,216,132,242,133,59,238,21,93,
    255,147,106,94,175,39,67,223,185,7,249,146,158,95,159,55,
    54,40,159,254,29,114,213,149,41,150,177,134,63,29,171,180,
    117,228,172,229,149,45,100,209,121,1,107,204,176,254,71,10,
    235,202,29,200,239,31,206,67,106,120,199,200,54,11,231,231,
    217,10,109,78,198,108,132,231,174,158,215,148,116,156,124,35,
    15,86,123,250,126,42,35,169,219,147,134,96,53,120,72,187,
    93,35,232,160,49,44,250,109,248,72,60,109,130,163,100,117,
    103,226,208,195,174,139,238,140,213,97,207,237,53,18,158,227,
    173,24,105,146,121,154,100,148,174,236,179,7,99,80,117,245,
    12,111,100,34,233,51,153,116,166,169,91,147,6,245,26,110,
    143,76,102,30,150,253,22,108,36,157,178,211,8,149,111,66,
    78,13,76,250,90,227,51,95,146,44,62,225,244,19,117,115,
    18,19,150,84,65,232,118,131,36,145,90,212,155,185,72,38,
    93,3,228,137,147,125,54,14,143,55,50,165,142,205,209,56,
    144,57,23,251,178,35,149,60,149,124,184,68,25,92,118,249,
    168,73,28,245,177,0,227,131,58,62,119,92,247,66,106,169,
    159,225,36,175,104,54,74,32,88,75,137,34,86,83,43,98,
    228,207,40,21,75,130,139,216,177,223,133,180,178,119,41,170,
    107,212,208,163,51,159,5,57,255,118,145,22,143,148,15,248,
    126,101,215,235,234,171,102,190,59,117,40,20,249,62,203,121,
    39,75,22,116,233,199,23,2,250,66,6,83,57,87,215,92,
    76,59,239,19,157,128,212,221,217,78,77,219,214,166,213,16,
    61,178,203,63,157,116,119,212,250,24,143,164,48,248,92,118,
    163,184,255,121,228,75,181,49,246,254,177,239,199,142,23,98,
    102,121,46,169,184,103,136,141,48,12,42,123,45,35,229,178,
    39,170,50,202,123,74,23,205,132,47,245,47,4,156,235,78,
    191,255,164,19,213,15,164,63,224,185,126,54,207,175,162,46,
    98,252,140,89,106,65,58,203,226,216,123,159,34,67,173,140,
    81,19,25,7,94,39,120,165,127,120,72,201,156,166,198,5,
    210,242,100,79,92,151,143,85,35,12,247,88,54,131,132,114,
    231,124,158,125,176,37,19,0,217,180,211,121,33,55,244,34,
    98,67,159,140,245,245,223,35,138,118,190,192,164,95,16,74,
    243,37,140,19,218,170,77,81,198,205,218,50,103,23,74,214,
    236,76,201,42,77,153,124,189,59,39,150,140,178,85,154,153,
    21,147,254,54,49,158,202,198,230,90,73,252,0,133,216,98,
    1,
};

EmbeddedPython embedded_m5_internal_param_Prefetcher(
    "m5/internal/param_Prefetcher.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_Prefetcher.py",
    "m5.internal.param_Prefetcher",
    data_m5_internal_param_Prefetcher,
    2529,
    8037);

} // anonymous namespace