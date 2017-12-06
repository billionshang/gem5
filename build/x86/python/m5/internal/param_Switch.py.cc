#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Switch[] = {
    120,156,197,88,91,115,219,198,21,62,11,128,148,72,73,22,
    101,89,146,109,41,22,218,142,27,214,83,137,137,19,197,233,
    196,117,155,235,76,243,160,164,96,58,118,20,79,81,8,88,
    146,160,64,128,3,172,36,51,35,189,84,158,182,211,247,254,
    132,62,244,223,244,31,181,231,156,5,64,72,178,59,153,105,
    75,203,196,122,177,56,187,123,46,223,185,236,250,144,255,213,
    240,249,181,13,144,253,85,0,4,248,19,16,1,140,4,28,
    8,16,82,64,112,11,142,106,144,190,15,65,13,94,2,28,
    24,32,13,184,192,142,9,223,25,16,47,242,156,58,68,38,
    143,8,152,52,65,90,112,80,131,167,241,10,88,178,14,71,
    77,72,255,0,66,136,88,192,179,96,14,130,121,120,137,171,
    99,167,193,11,206,3,13,54,121,176,1,193,2,15,54,33,
    88,228,206,2,76,90,32,23,225,96,137,200,14,110,224,178,
    15,112,217,101,94,246,159,180,108,128,95,214,32,184,65,228,
    200,215,183,68,105,17,37,239,183,204,171,180,10,46,87,224,
    224,102,209,95,173,244,111,85,250,107,149,254,122,165,191,193,
    125,228,230,38,12,111,195,240,14,12,239,66,15,21,180,82,
    238,188,9,210,132,225,22,28,108,129,196,223,38,92,160,14,
    131,155,149,25,111,241,140,213,114,198,61,158,177,13,7,219,
    32,241,119,79,207,168,67,183,189,142,118,9,255,133,127,109,
    180,11,168,69,108,78,100,154,133,73,236,134,113,47,9,13,
    250,94,167,134,172,232,83,51,151,155,243,83,50,231,63,128,
    109,25,24,185,57,207,1,23,22,36,75,100,192,57,119,206,
    13,152,180,225,76,192,208,130,192,132,51,220,166,70,12,244,
    5,92,24,240,220,36,130,115,108,45,84,250,61,176,148,182,
    229,144,149,174,87,154,131,243,26,156,213,160,251,236,204,160,
    129,163,6,164,127,135,239,183,120,209,121,94,212,128,51,108,
    45,184,176,224,188,14,79,145,8,135,134,13,18,95,60,59,
    67,73,113,164,219,182,144,219,253,138,184,36,74,16,166,177,
    55,146,106,9,251,238,216,75,189,145,219,61,13,149,63,104,
    55,11,146,36,219,29,123,106,224,240,28,147,148,49,26,43,
    94,43,137,165,90,192,78,47,140,3,119,148,4,199,145,84,
    243,180,144,219,11,35,233,186,252,241,55,163,113,146,170,207,
    211,52,73,29,210,39,15,70,137,87,206,32,109,250,81,146,
    201,54,237,198,219,56,180,188,34,234,222,152,87,36,6,152,
    79,154,28,200,204,79,195,177,66,51,233,21,137,154,86,107,
    147,129,184,201,158,99,211,25,197,170,51,232,247,178,78,119,
    224,165,178,59,144,113,167,47,71,123,59,73,26,246,195,120,
    39,83,222,97,36,119,30,190,243,238,222,206,47,118,222,235,
    28,30,135,81,208,121,241,225,7,157,241,68,13,146,184,51,
    218,235,132,177,146,168,161,168,83,213,205,46,126,191,73,187,
    156,134,125,55,100,249,220,129,140,198,50,37,53,102,119,137,
    3,209,18,139,162,46,76,209,22,75,216,171,225,99,138,45,
    99,65,236,135,36,161,79,82,19,178,172,42,150,200,192,2,
    142,12,72,183,8,41,67,252,9,50,45,226,165,75,223,12,
    254,246,91,82,141,30,29,154,100,127,61,120,198,232,66,152,
    33,229,99,50,120,12,12,145,26,12,235,160,161,131,136,211,
    88,74,39,212,34,57,45,99,224,226,22,100,127,3,84,53,
    130,230,12,114,64,93,152,32,226,22,168,38,249,58,142,174,
    227,134,127,100,76,118,219,196,254,62,195,67,13,194,44,57,
    141,217,8,212,103,47,66,61,245,191,158,124,117,56,148,190,
    202,182,113,224,219,228,216,246,189,56,78,148,237,5,129,237,
    41,149,134,135,199,74,102,182,74,236,251,89,155,236,234,172,
    20,8,43,215,155,140,11,68,145,245,17,81,250,37,8,125,
    133,47,171,252,194,86,200,164,66,116,12,146,32,195,113,90,
    162,47,149,67,76,42,82,114,194,140,48,120,92,34,165,237,
    145,238,6,190,127,92,112,194,8,109,215,11,60,101,50,234,
    169,38,67,211,203,50,151,57,161,113,70,33,45,124,226,69,
    199,146,87,71,28,41,100,136,186,154,135,89,226,240,54,201,
    84,168,128,229,138,147,56,152,32,155,161,255,54,113,112,155,
    209,184,200,120,92,67,44,206,97,91,199,255,235,98,221,240,
    173,28,129,245,2,133,20,17,21,48,6,68,14,3,68,228,
    5,70,159,182,193,225,131,69,99,31,253,49,245,104,178,179,
    69,205,91,212,220,163,102,187,144,126,70,42,88,186,170,130,
    71,180,173,193,114,179,132,100,46,179,144,48,184,228,103,119,
    166,126,134,193,178,75,254,98,144,87,77,253,197,162,192,154,
    62,161,22,73,217,19,77,200,190,161,48,78,126,197,139,145,
    11,161,51,80,111,234,34,172,47,167,69,122,152,47,208,237,
    16,100,171,184,237,87,112,235,144,169,24,180,206,157,34,80,
    186,68,161,225,234,108,210,82,181,87,40,220,166,230,71,51,
    214,250,20,120,253,107,192,251,136,56,104,229,192,91,98,192,
    53,241,105,25,190,153,155,162,76,161,171,87,0,71,104,179,
    94,129,182,159,82,207,188,46,252,155,1,90,46,242,23,21,
    160,17,151,70,85,178,125,236,76,54,72,160,42,196,54,176,
    44,120,26,111,96,166,55,56,211,191,195,153,158,171,5,174,
    165,116,16,55,57,142,235,78,141,52,211,51,97,61,207,224,
    89,3,219,113,154,188,152,216,73,207,86,44,58,197,220,199,
    247,179,221,251,217,71,24,77,237,39,28,199,116,60,213,17,
    51,149,99,138,120,52,245,243,23,190,228,228,201,111,174,171,
    3,156,203,193,206,205,147,50,162,109,141,244,106,20,10,231,
    80,159,169,148,34,252,44,85,222,44,85,78,18,124,73,123,
    54,89,223,166,216,64,100,53,5,51,230,234,0,207,5,26,
    127,197,231,19,178,1,9,47,129,202,108,167,171,217,102,137,
    72,54,231,231,151,208,51,27,121,156,14,110,240,187,2,53,
    245,41,106,232,49,11,127,248,51,112,5,43,224,79,64,184,
    64,243,231,254,80,186,15,1,97,149,200,127,15,236,56,175,
    168,26,56,22,117,169,82,96,10,12,81,217,35,38,213,69,
    196,151,240,151,138,215,21,169,222,204,107,212,106,170,183,202,
    56,198,128,250,65,233,220,186,28,240,200,70,3,47,35,50,
    29,197,166,142,60,205,24,101,125,137,81,124,70,232,154,215,
    187,185,196,216,243,41,182,40,89,110,138,85,163,130,152,119,
    169,121,88,130,69,20,99,255,127,30,183,225,245,9,222,213,
    185,227,59,98,196,98,214,151,231,184,14,209,211,75,127,168,
    21,254,240,176,244,7,201,9,238,37,159,95,168,53,200,242,
    23,134,192,3,38,86,123,116,158,179,64,214,224,160,78,158,
    195,37,186,200,29,75,20,1,142,194,225,165,236,201,106,217,
    215,10,43,141,175,237,74,205,139,89,6,14,50,237,227,200,
    27,29,6,222,147,17,237,72,219,250,133,171,25,133,12,173,
    170,12,228,38,226,117,98,240,235,94,33,203,201,44,131,198,
    7,184,65,41,3,187,72,144,248,28,41,190,25,72,123,36,
    71,135,120,104,29,132,99,187,23,121,125,182,147,153,203,248,
    85,33,163,98,67,95,173,78,178,7,212,38,182,159,196,24,
    219,143,125,149,164,118,32,241,56,39,3,123,199,230,196,96,
    135,153,237,29,226,87,207,87,26,246,151,29,152,139,98,47,
    237,103,140,187,163,83,234,206,218,206,46,158,214,67,60,16,
    36,80,166,99,125,150,44,227,60,151,250,218,139,48,115,226,
    65,77,77,116,68,163,74,197,217,165,230,103,240,6,210,193,
    251,184,65,68,59,145,242,234,98,211,104,24,197,249,9,41,
    190,38,234,236,186,23,31,254,16,47,214,23,68,185,47,215,
    137,82,206,209,125,1,181,13,74,7,116,255,83,203,239,127,
    104,80,223,255,212,121,228,6,121,253,220,127,235,245,236,46,
    179,118,148,147,255,169,179,59,143,222,164,8,206,135,144,151,
    4,175,115,116,81,149,111,73,59,250,80,20,39,149,170,112,
    124,83,178,122,5,91,174,159,74,79,73,109,173,173,217,138,
    202,1,67,239,63,153,58,238,245,58,250,227,82,170,11,46,
    135,38,183,216,136,250,152,198,70,20,79,227,187,88,80,91,
    92,80,63,166,130,250,140,85,224,26,186,166,158,130,180,86,
    106,130,176,16,203,83,183,170,13,93,48,19,91,222,120,44,
    227,192,121,0,213,26,152,63,207,18,11,20,156,206,161,82,
    150,152,226,22,22,189,215,125,146,98,112,69,74,182,102,173,
    244,194,25,219,149,33,252,178,128,112,123,25,170,129,216,121,
    76,13,135,222,50,234,58,191,42,173,114,247,42,62,79,194,
    84,185,177,84,25,29,185,254,211,103,44,142,248,60,83,142,
    176,246,24,240,129,140,164,146,151,44,205,230,207,143,224,129,
    196,236,150,76,240,4,196,71,9,124,143,92,119,230,153,224,
    151,184,193,49,237,68,153,10,51,129,168,99,46,88,51,26,
    245,134,224,100,123,229,46,90,179,102,67,81,50,79,50,135,
    3,198,114,169,74,190,54,45,114,29,105,157,213,179,239,141,
    244,77,23,95,223,56,63,129,252,104,237,188,93,154,132,238,
    30,248,156,162,207,135,232,36,92,8,112,222,119,222,163,113,
    58,124,143,246,118,11,89,118,181,44,159,120,89,232,59,9,
    158,2,82,190,186,29,237,113,237,122,157,240,211,40,241,143,
    100,160,111,7,95,179,24,211,124,150,140,60,28,223,124,37,
    69,55,28,229,43,172,92,249,30,164,52,107,237,202,104,38,
    211,208,139,194,239,245,133,98,49,204,147,175,243,79,87,47,
    149,119,206,211,149,224,201,192,73,101,63,204,136,120,229,50,
    113,30,75,200,160,234,206,85,192,86,39,206,26,99,186,38,
    214,7,252,39,36,97,246,25,54,116,47,216,88,110,32,222,
    40,190,152,120,164,94,18,150,185,216,106,88,139,11,13,171,
    49,103,242,229,205,18,30,135,154,86,99,97,81,76,255,109,
    35,54,155,198,118,171,33,254,13,37,162,242,242,
};

EmbeddedPython embedded_m5_internal_param_Switch(
    "m5/internal/param_Switch.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_Switch.py",
    "m5.internal.param_Switch",
    data_m5_internal_param_Switch,
    2253,
    6889);

} // anonymous namespace