#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Clock_vector[] = {
    120,156,205,92,123,136,36,71,25,255,186,231,177,55,179,187,
    183,187,183,123,187,247,202,221,228,113,201,36,122,183,121,93,
    30,38,156,198,24,67,34,94,76,111,228,146,205,105,167,119,
    186,118,183,119,103,186,39,221,189,119,55,113,79,137,123,26,
    159,168,248,64,69,68,124,32,1,65,16,4,65,16,4,65,
    16,132,128,32,8,130,160,8,130,224,127,130,32,168,223,239,
    235,238,153,158,199,73,46,179,59,125,183,59,223,213,244,212,
    84,125,191,175,126,245,85,213,87,85,91,163,248,95,129,95,
    239,170,16,5,119,107,68,54,255,106,84,39,106,104,180,172,
    145,166,52,178,231,104,179,64,254,253,100,23,232,42,209,178,
    78,74,167,29,78,228,232,69,157,220,9,249,78,145,234,57,
    121,162,81,171,76,42,79,203,5,58,239,206,80,94,21,105,
    179,76,254,75,164,105,154,171,209,243,246,24,217,251,232,42,
    151,206,137,146,20,184,143,240,176,44,15,75,100,143,203,195,
    50,217,19,146,24,167,214,52,169,9,90,158,68,182,229,253,
    92,236,93,92,236,148,20,251,6,138,181,249,147,131,100,239,
    71,118,214,235,5,228,204,35,167,212,55,37,165,76,147,45,
    165,172,50,158,153,118,198,25,82,57,218,56,64,203,7,72,
    241,239,12,237,48,100,251,64,146,113,182,157,113,86,50,206,
    209,242,28,41,254,157,141,50,22,105,169,58,207,214,115,254,
    203,255,170,108,61,10,39,88,92,84,126,224,120,174,233,184,
    171,158,163,227,243,34,4,108,93,131,24,139,141,254,56,140,
    254,58,137,197,109,61,54,250,21,226,130,53,216,180,174,211,
    21,73,92,209,169,85,165,109,141,54,242,100,231,104,155,171,
    41,64,129,53,141,118,116,186,144,67,134,43,44,243,108,154,
    227,148,15,35,139,111,136,105,162,146,198,232,74,129,182,11,
    180,244,252,182,142,7,155,37,242,127,64,175,28,147,66,247,
    73,161,58,109,179,204,211,78,158,174,20,233,60,103,226,71,
    27,37,192,215,158,223,102,164,252,100,169,154,103,109,207,165,
    224,2,138,237,248,174,213,80,225,36,167,205,199,235,94,109,
    211,188,168,106,161,231,87,203,73,22,47,56,221,180,194,117,
    67,190,147,131,49,26,205,80,202,242,92,21,142,115,98,213,
    113,109,179,225,217,91,117,21,238,67,65,230,170,83,87,166,
    41,31,62,213,104,122,126,248,132,239,123,190,1,123,202,195,
    186,103,181,191,1,107,214,234,94,160,170,168,77,170,49,80,
    124,136,220,171,77,41,17,10,136,158,248,178,173,130,154,239,
    52,67,110,166,168,68,228,70,105,85,52,144,136,224,2,139,
    197,134,27,46,174,175,173,6,139,75,235,150,175,150,214,149,
    187,184,166,26,103,78,121,190,179,230,184,167,130,208,90,169,
    171,83,247,222,125,207,153,83,15,159,186,111,113,101,203,169,
    219,139,151,31,122,96,177,217,10,215,61,119,177,113,102,209,
    113,67,197,22,170,47,166,109,115,154,63,63,128,90,46,57,
    107,166,35,248,204,117,85,111,42,31,102,12,142,64,3,109,
    90,155,208,138,90,78,171,106,147,156,42,240,43,167,29,211,
    199,181,115,14,16,214,128,26,204,202,167,185,132,6,214,104,
    83,39,255,24,152,178,193,191,26,154,150,249,178,132,207,116,
    249,236,89,152,38,122,186,145,67,251,71,15,183,133,93,76,
    51,206,249,40,26,220,37,161,72,129,54,138,20,81,135,25,
    23,113,201,111,65,114,118,20,163,115,225,121,10,190,74,108,
    106,38,205,54,197,132,218,201,145,230,78,83,88,70,143,228,
    167,243,92,225,199,133,147,75,85,168,127,78,232,17,174,59,
    129,119,201,149,70,64,90,122,209,18,91,230,3,173,103,86,
    54,216,94,193,9,126,240,130,183,85,169,89,174,235,133,21,
    203,182,43,86,24,250,206,202,86,168,130,74,232,85,78,6,
    85,180,171,49,147,48,172,93,94,171,153,48,10,173,207,140,
    138,222,216,78,45,228,55,179,242,70,90,33,80,33,179,99,
    221,179,3,126,142,34,214,84,104,64,201,16,70,246,68,17,
    33,143,137,172,168,158,243,237,231,247,143,37,154,8,67,171,
    197,132,79,129,170,175,134,101,161,166,21,4,166,104,130,231,
    194,66,20,124,209,170,111,41,41,157,121,20,178,66,72,70,
    58,140,146,135,135,128,41,49,129,224,114,61,215,110,177,154,
    78,237,14,104,112,72,216,56,33,124,60,200,92,28,99,89,
    228,255,139,218,188,94,203,199,12,44,38,44,132,71,12,73,
    56,160,197,52,96,70,238,176,247,169,234,226,62,4,154,244,
    209,91,144,194,151,141,99,16,55,65,28,135,56,145,160,31,
    145,9,38,123,77,240,32,170,213,5,183,32,68,115,229,18,
    132,118,87,63,59,220,233,103,236,44,151,208,95,116,244,170,
    78,127,201,195,177,250,103,33,57,171,244,196,28,5,207,193,
    141,163,95,73,97,232,66,220,25,144,234,116,17,177,151,49,
    13,59,236,75,216,109,128,178,105,222,174,165,120,107,160,169,
    132,180,198,225,196,81,154,200,17,209,213,56,138,162,10,3,
    12,94,129,184,121,196,86,239,16,111,173,143,120,143,64,131,
    233,152,120,147,66,184,50,191,166,245,90,46,110,138,246,16,
    58,219,67,56,176,45,63,128,109,183,35,149,235,7,159,13,
    209,98,200,239,77,17,13,90,234,105,100,231,56,209,90,0,
    160,52,197,22,120,90,112,222,93,224,145,94,151,145,254,110,
    25,233,101,182,32,51,158,200,137,231,196,143,71,137,2,44,
    179,154,163,249,120,4,15,74,44,155,190,119,185,85,241,86,
    43,161,64,135,207,125,244,100,112,250,100,240,8,123,211,202,
    89,241,99,145,63,141,60,166,175,154,240,120,248,234,19,151,
    107,74,6,79,121,103,154,145,131,51,197,217,153,241,160,204,
    108,59,8,187,234,137,193,197,213,7,161,15,15,63,74,147,
    151,219,38,7,130,167,81,103,89,236,157,211,22,152,89,101,
    77,20,51,35,7,47,19,52,249,148,95,239,70,27,0,188,
    34,76,134,141,165,72,109,65,4,108,198,219,187,216,51,26,
    60,198,34,87,240,193,132,53,197,14,107,240,202,37,253,225,
    53,146,25,172,70,159,36,240,130,155,63,238,15,237,238,3,
    34,204,34,251,135,73,58,206,128,89,131,248,162,37,204,20,
    36,7,187,168,224,65,201,26,77,34,158,166,79,165,122,93,
    50,212,231,226,57,106,122,168,207,183,253,152,16,234,77,13,
    231,249,110,135,135,54,90,183,2,100,139,188,88,167,35,119,
    70,140,246,252,146,189,248,136,216,181,47,170,205,132,98,23,
    58,220,194,96,121,84,155,213,83,140,185,7,226,222,54,89,
    180,228,217,222,235,120,130,174,61,192,155,209,216,241,34,20,
    201,139,234,83,99,50,171,137,230,95,79,113,145,22,23,211,
    238,23,133,164,95,252,165,221,47,148,12,116,87,101,29,3,
    169,131,1,59,186,198,203,65,158,245,97,245,149,39,85,160,
    229,34,169,49,44,55,176,200,43,36,139,188,98,188,200,235,
    172,11,39,36,93,146,244,164,172,11,9,139,185,120,93,56,
    149,172,11,121,69,55,41,137,153,120,233,199,139,184,120,177,
    55,139,197,30,18,115,241,98,111,153,151,135,7,36,49,31,
    175,234,150,23,176,174,69,226,16,22,143,72,28,38,123,94,
    18,71,200,94,144,196,81,116,121,12,82,210,199,146,151,120,
    102,248,241,174,97,95,218,243,92,212,210,109,214,70,132,132,
    184,60,74,143,7,78,62,90,183,26,43,182,117,118,13,53,
    162,218,90,226,35,244,4,195,116,26,3,250,183,118,45,24,
    242,246,76,130,229,226,40,189,221,3,92,65,27,131,244,109,
    219,171,137,139,123,110,93,85,26,170,177,194,171,237,117,167,
    89,89,173,91,107,210,78,185,24,227,51,9,198,80,152,217,
    59,173,10,238,130,244,42,53,207,229,65,105,11,245,85,108,
    197,235,80,101,87,78,85,100,68,171,56,65,197,90,225,79,
    173,90,24,245,215,110,207,35,179,121,203,95,11,100,226,190,
    121,9,201,81,183,179,105,58,174,195,43,25,135,186,231,17,
    93,108,133,158,118,135,164,2,165,208,118,66,199,104,180,3,
    24,154,180,209,166,101,162,104,155,150,147,81,147,109,104,201,
    100,57,205,73,89,172,207,245,185,39,83,150,82,217,192,129,
    119,245,58,214,143,214,230,237,1,57,221,217,218,168,162,193,
    180,31,216,108,63,48,199,173,249,169,57,20,190,225,142,146,
    99,160,14,116,240,83,252,218,53,112,182,74,131,51,206,142,
    182,229,4,27,84,216,26,26,219,194,0,108,14,235,230,214,
    84,10,223,153,17,227,131,127,72,212,184,60,52,198,1,189,
    78,189,188,101,213,51,4,8,31,38,58,124,100,128,247,187,
    14,135,50,128,154,53,175,217,202,196,159,8,43,81,251,71,
    119,29,147,171,46,135,217,97,66,237,175,14,135,105,64,55,
    51,5,149,105,102,131,43,14,44,138,6,87,119,29,91,211,
    87,23,29,111,43,200,14,91,162,193,107,67,123,143,249,126,
    120,150,125,177,199,65,142,122,0,192,162,50,214,226,51,67,
    35,60,56,136,156,234,101,166,102,118,14,178,40,252,132,18,
    159,223,27,124,174,186,1,240,65,137,47,14,141,111,160,115,
    113,44,219,238,66,56,106,138,198,115,124,81,227,203,123,132,
    49,216,90,185,17,48,138,26,95,219,11,79,99,154,89,55,
    163,132,24,35,45,190,65,212,23,241,5,194,39,7,33,252,
    220,160,161,98,32,194,222,70,124,56,19,132,162,197,183,168,
    127,36,236,90,139,110,119,214,162,162,97,134,99,183,195,159,
    154,230,183,59,26,87,197,122,237,240,174,196,194,162,224,89,
    211,247,154,202,15,91,81,32,19,27,20,198,105,136,59,187,
    92,164,173,234,42,84,102,119,251,132,211,212,222,175,177,85,
    16,250,94,203,52,99,147,241,23,76,83,86,145,198,59,33,
    30,131,120,28,226,9,136,39,33,158,130,120,31,196,251,33,
    158,129,120,22,98,9,2,209,96,227,60,196,11,16,136,229,
    25,23,186,172,57,162,165,240,253,92,193,42,106,130,229,138,
    218,81,189,164,23,181,146,86,210,75,185,9,254,41,93,235,
    71,143,207,77,160,156,232,8,65,127,188,209,214,222,68,188,
    49,58,120,18,71,29,139,73,152,113,44,9,51,202,73,19,
    36,74,18,108,140,34,144,165,36,2,25,69,26,39,146,72,
    227,100,18,105,220,159,68,26,167,146,72,227,116,18,105,156,
    73,34,141,7,146,72,227,108,18,105,156,75,34,141,7,147,
    72,227,124,18,105,92,72,34,141,135,146,72,227,97,178,15,
    37,177,199,195,113,236,209,62,34,137,99,100,31,149,196,77,
    100,31,147,196,113,178,111,146,196,9,178,143,75,162,66,246,
    9,73,220,76,118,69,18,183,144,125,179,36,110,37,251,22,
    73,220,70,246,173,146,56,73,246,109,146,184,157,212,29,180,
    81,165,229,59,201,62,41,79,238,66,192,19,219,100,67,5,
    60,71,61,11,144,128,210,247,105,55,227,156,198,131,89,66,
    48,30,162,120,27,231,90,49,206,235,92,91,28,236,233,93,
    226,245,224,151,178,243,188,137,6,63,164,255,51,86,148,219,
    45,183,211,19,189,172,81,70,195,134,56,214,215,7,40,125,
    29,205,113,168,183,57,76,108,200,188,162,124,47,171,117,108,
    116,78,160,173,196,143,134,195,215,71,55,211,92,241,188,122,
    182,139,244,72,131,31,15,135,108,174,31,89,93,185,89,1,
    139,230,15,162,192,79,82,184,210,59,188,130,107,150,186,39,
    149,209,110,109,63,186,195,253,232,214,84,24,212,157,26,86,
    121,157,109,15,77,250,47,228,198,40,225,78,80,124,152,37,
    214,232,167,61,109,121,253,19,233,1,128,131,14,224,236,230,
    210,17,210,142,42,63,219,163,214,229,169,103,95,235,26,155,
    16,245,76,16,119,244,249,249,208,109,59,192,201,114,241,60,
    236,52,50,109,218,241,4,104,164,201,47,246,2,39,119,145,
    27,4,103,91,147,95,238,5,206,224,134,193,217,214,228,87,
    52,212,248,50,221,11,178,233,53,179,25,91,208,56,92,249,
    175,83,120,222,90,56,102,182,23,146,213,108,42,215,206,56,
    104,24,41,241,155,225,90,235,64,47,52,213,104,134,25,237,
    26,201,86,24,170,255,237,112,152,102,122,49,5,206,43,217,
    108,172,71,103,168,185,246,55,134,230,96,63,168,75,86,51,
    197,192,17,175,246,34,100,172,194,239,118,153,127,43,138,85,
    203,142,127,82,253,239,119,217,3,194,87,100,230,1,185,242,
    63,12,135,167,207,253,249,25,54,18,60,95,84,255,31,119,
    217,75,248,153,53,19,250,18,106,255,211,46,247,165,90,93,
    89,25,197,71,162,235,76,92,253,159,135,195,116,164,23,211,
    26,14,170,214,57,153,93,236,7,90,119,169,241,215,225,48,
    246,197,26,120,210,98,174,88,181,205,12,55,205,99,13,254,
    214,131,236,250,231,188,253,19,12,223,10,84,134,179,93,153,
    101,64,135,191,247,96,75,46,100,8,182,247,116,176,49,176,
    232,2,227,156,4,242,146,139,49,184,62,121,222,61,66,121,
    238,190,184,194,240,78,92,97,216,150,131,230,166,30,221,98,
    232,4,252,10,148,30,28,92,117,201,76,219,36,10,223,226,
    0,144,129,19,157,169,133,44,140,35,159,142,50,60,136,109,
    161,127,16,37,231,192,167,180,156,54,167,77,14,179,151,217,
    205,238,173,96,61,162,119,118,243,103,185,60,146,232,241,207,
    93,118,187,171,190,231,102,116,72,9,60,147,234,255,53,28,
    166,190,193,49,59,119,132,193,17,181,255,59,133,232,45,7,
    144,250,87,114,65,224,172,185,169,30,119,54,11,58,202,114,
    78,52,249,15,13,235,112,251,103,107,74,214,63,217,121,92,
    153,178,137,18,154,182,235,232,28,55,80,126,152,49,186,72,
    137,124,10,221,91,243,149,125,177,121,54,155,242,47,102,125,
    190,44,214,98,76,219,221,105,78,205,106,90,53,39,171,104,
    3,166,57,137,6,229,1,200,186,78,123,220,88,55,15,38,
    181,120,151,181,250,54,74,31,244,48,62,4,33,71,59,58,
    167,58,176,205,40,59,126,134,130,192,69,20,3,55,45,12,
    220,95,48,112,234,223,120,25,2,5,26,56,70,110,92,130,
    104,81,50,37,185,2,241,49,136,87,33,118,32,62,1,129,
    19,149,198,167,33,62,11,129,227,121,198,23,32,190,4,33,
    135,75,190,2,129,243,80,198,215,33,190,9,129,163,53,6,
    78,171,24,223,129,248,110,87,223,142,143,158,116,205,142,76,
    228,120,169,203,206,35,50,182,197,21,124,15,53,225,202,101,
    81,59,170,21,117,28,4,185,174,159,177,222,131,34,37,77,
    134,155,158,63,171,17,193,66,83,70,183,255,90,129,129,39,
    198,84,219,60,209,97,214,248,252,14,90,90,102,49,231,172,
    70,116,105,95,110,162,27,183,66,224,248,131,113,71,155,6,
    216,53,145,43,151,209,85,87,158,125,202,213,32,185,9,100,
    220,7,129,67,47,33,222,246,28,201,194,97,31,159,215,218,
    1,63,16,99,244,239,192,164,179,140,186,125,162,91,98,209,
    93,221,179,136,98,7,56,117,128,43,254,165,169,18,183,21,
    254,216,68,78,43,243,220,53,159,155,152,46,229,39,198,75,
    249,210,88,78,238,97,79,106,179,122,57,95,26,159,127,71,
    73,43,235,243,155,37,237,127,27,242,215,173,
};

EmbeddedPython embedded_m5_internal_Clock_vector(
    "m5/internal/Clock_vector.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/Clock_vector.py",
    "m5.internal.Clock_vector",
    data_m5_internal_Clock_vector,
    3436,
    17998);

} // anonymous namespace