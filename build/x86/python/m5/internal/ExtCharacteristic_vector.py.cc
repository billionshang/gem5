#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_ExtCharacteristic_vector[] = {
    120,156,205,92,125,136,29,87,21,63,51,239,99,243,222,238,
    102,55,217,100,55,31,219,228,37,109,218,109,53,217,126,165,
    159,33,90,107,44,173,152,218,217,74,218,109,117,58,251,230,
    238,219,217,125,111,230,117,102,54,201,171,27,165,110,180,126,
    162,226,7,42,34,34,22,84,16,4,65,16,4,65,16,4,
    65,20,4,65,16,132,130,32,8,254,39,8,66,61,191,51,
    51,239,99,247,229,181,201,203,118,38,187,123,114,223,188,251,
    238,156,223,185,191,123,238,61,103,238,125,85,138,255,21,248,
    239,189,21,162,224,140,70,100,243,175,70,117,162,134,70,139,
    26,105,74,35,123,31,173,21,200,191,159,236,2,93,37,90,
    212,73,233,180,201,133,28,189,160,147,59,38,159,41,82,61,
    39,87,52,106,149,73,229,105,177,64,23,220,61,148,87,69,
    90,43,147,255,18,105,154,230,106,244,156,61,66,246,46,186,
    202,173,115,161,36,13,238,34,92,44,203,197,18,217,163,114,
    177,76,246,152,20,70,169,53,73,106,140,22,199,81,109,113,
    55,55,123,23,55,59,33,205,254,17,205,218,252,206,126,178,
    119,163,58,235,245,60,106,230,81,83,238,55,33,173,76,146,
    45,173,44,51,158,61,237,138,123,72,229,104,117,47,45,238,
    37,197,191,123,104,147,33,199,112,166,104,113,31,217,123,147,
    15,77,181,63,180,95,62,52,77,139,211,164,248,119,127,244,
    161,34,45,204,77,179,37,157,55,249,223,28,91,146,194,49,
    22,23,149,31,56,158,107,58,238,178,231,232,120,191,8,1,
    187,87,33,70,226,14,120,28,29,240,99,18,235,219,122,220,
    1,87,136,27,214,96,223,186,78,87,164,112,69,167,214,28,
    109,104,180,154,39,59,71,27,124,155,2,20,168,105,180,169,
    211,139,57,84,184,194,50,207,102,58,66,249,48,178,254,170,
    152,41,106,105,132,174,20,104,163,64,11,207,109,232,184,176,
    86,34,255,117,122,101,86,26,221,37,141,234,180,193,50,79,
    155,121,186,82,164,11,92,137,47,173,150,0,95,123,110,131,
    145,242,149,133,185,60,107,123,190,11,46,160,216,142,239,90,
    13,21,30,228,178,121,238,114,248,248,138,229,91,213,80,249,
    78,16,58,85,243,162,170,134,158,63,87,78,170,123,193,169,
    166,21,174,24,242,249,28,12,211,104,134,210,174,231,170,112,
    148,11,203,142,107,155,13,207,94,175,171,112,23,26,53,151,
    157,186,50,77,121,243,201,70,211,243,195,115,190,239,249,6,
    108,43,23,235,158,213,254,4,44,91,173,123,129,154,195,221,
    228,54,6,154,15,81,123,185,41,45,66,1,209,25,31,182,
    85,80,245,157,102,200,93,22,181,136,218,104,109,14,157,37,
    34,88,97,49,223,112,195,249,149,218,114,48,191,192,8,213,
    194,138,114,231,107,170,113,250,164,231,59,53,199,61,25,132,
    214,82,93,157,188,247,238,123,78,159,124,248,228,125,243,75,
    235,78,221,158,191,252,208,3,243,205,86,184,226,185,243,141,
    211,243,142,203,118,113,173,250,252,181,236,116,138,235,238,197,
    29,47,57,53,211,17,172,230,138,170,55,149,63,142,171,135,
    160,141,54,169,141,105,69,45,167,205,105,227,92,42,240,95,
    78,155,213,71,181,243,14,208,86,97,1,48,46,223,205,49,
    116,188,70,107,58,249,179,96,208,42,255,106,232,114,230,209,
    2,222,211,229,189,103,96,166,232,234,106,14,188,136,46,110,
    8,235,152,126,92,243,12,136,224,146,80,167,64,171,69,138,
    40,197,76,140,56,230,183,32,185,58,154,209,185,241,60,5,
    223,32,54,59,147,105,131,98,162,109,230,72,115,39,41,44,
    99,212,242,213,105,190,225,167,132,171,11,115,80,255,188,80,
    37,92,113,2,239,146,43,29,130,178,140,174,5,182,204,135,
    91,79,47,173,178,189,130,163,124,225,121,111,189,82,181,92,
    215,11,43,150,109,87,172,48,244,157,165,245,80,5,149,208,
    171,156,8,230,208,199,198,158,132,109,237,246,90,205,132,93,
    96,2,179,43,122,97,59,213,144,95,76,201,11,233,133,64,
    133,204,148,21,207,14,248,58,154,168,169,208,128,146,33,140,
    236,137,34,66,36,19,85,113,123,174,183,155,95,63,150,104,
    34,108,157,43,38,220,10,84,125,57,44,11,77,173,32,48,
    69,19,92,23,70,162,225,139,86,125,93,73,235,204,41,230,
    134,20,35,29,210,226,228,1,224,75,204,33,24,93,207,181,
    91,172,178,83,189,3,218,28,16,102,142,9,55,247,51,47,
    71,88,22,249,255,162,54,173,87,243,49,27,139,9,35,225,
    53,67,18,62,104,49,37,152,157,155,236,161,230,116,113,49,
    2,83,198,238,113,148,240,97,99,22,226,22,136,35,16,71,
    19,75,164,96,142,241,173,230,120,16,42,232,98,3,65,139,
    110,204,37,104,237,158,241,119,176,51,254,216,185,46,96,28,
    233,24,109,157,113,148,135,35,246,207,66,114,85,25,161,57,
    10,158,133,219,199,120,147,198,48,180,120,144,160,212,25,58,
    98,59,99,18,54,217,149,176,222,0,149,187,249,92,235,226,
    179,129,110,19,50,27,7,19,103,106,162,70,68,99,227,48,
    154,42,244,49,126,5,226,88,138,61,208,33,100,109,27,33,
    31,133,54,147,49,33,199,133,136,101,254,155,212,171,185,184,
    91,218,211,239,212,22,34,130,133,249,62,44,188,29,165,220,
    118,67,164,79,192,24,254,7,186,8,8,141,245,110,148,231,
    185,208,154,1,184,110,234,205,240,242,226,130,59,195,43,6,
    93,86,12,119,203,138,65,86,29,178,138,138,156,126,78,252,
    126,84,40,192,74,203,57,154,142,87,2,65,137,101,211,247,
    46,183,42,222,114,37,20,51,192,71,159,57,17,156,58,17,
    60,202,222,183,114,86,252,94,228,127,35,15,235,171,38,60,
    36,62,122,238,114,85,201,196,43,175,76,51,114,136,166,56,
    71,51,158,208,153,133,251,97,99,61,49,190,76,13,65,232,
    99,70,72,203,252,229,182,249,129,230,41,220,191,44,182,207,
    105,51,204,184,178,38,74,154,209,228,32,139,62,121,151,255,
    222,135,254,128,33,20,97,177,109,44,68,16,4,29,112,26,
    239,238,97,213,59,143,205,152,231,155,125,36,97,83,177,195,
    38,252,229,146,49,243,26,201,10,89,163,207,16,248,194,180,
    136,199,76,123,136,129,32,83,168,254,49,146,193,213,103,245,
    33,190,107,1,43,14,169,193,46,45,120,80,170,70,139,145,
    167,232,179,93,35,51,89,50,228,226,53,112,247,146,33,223,
    246,123,66,180,183,181,44,200,247,58,72,244,215,138,21,160,
    90,228,245,58,131,189,51,219,180,215,172,236,245,83,96,221,
    174,232,206,38,148,124,177,195,57,76,186,135,181,41,189,139,
    73,247,64,220,219,38,145,150,92,123,103,245,61,74,215,94,
    52,152,209,28,244,2,148,202,11,140,137,17,89,53,69,235,
    187,39,185,57,139,155,105,143,157,66,50,118,222,104,143,29,
    37,19,230,85,137,159,32,117,48,99,83,215,56,36,229,85,
    37,34,192,60,169,2,45,22,73,141,32,204,65,160,89,72,
    2,205,98,28,104,118,98,211,49,41,151,164,60,46,177,41,
    33,160,140,99,211,137,36,54,229,168,114,92,10,123,226,240,
    147,3,201,56,224,156,66,192,137,194,190,56,224,228,184,145,
    163,73,20,166,227,104,114,113,6,177,53,10,7,16,192,162,
    112,144,236,105,41,28,34,123,70,10,135,225,22,48,193,201,
    216,75,254,196,147,195,239,247,44,31,164,111,207,71,189,222,
    102,115,68,84,136,203,105,121,72,112,245,76,221,106,44,217,
    214,217,26,238,14,21,170,137,31,209,19,60,147,221,120,224,
    3,180,107,65,146,151,167,19,92,23,211,242,142,15,240,205,
    218,120,196,23,216,94,85,92,226,179,43,170,210,80,141,37,
    142,254,87,156,102,101,185,110,213,164,255,114,49,222,167,19,
    188,161,48,118,235,178,45,184,11,210,171,84,61,151,39,183,
    117,220,175,98,43,142,133,149,93,57,89,145,153,177,226,4,
    21,107,137,223,101,205,162,49,221,235,169,36,138,176,252,90,
    32,1,195,218,37,20,211,236,127,211,116,92,135,163,41,135,
    122,215,38,61,140,134,206,118,135,200,2,171,208,118,90,179,
    148,222,68,136,174,110,180,169,155,40,221,166,238,120,212,149,
    171,90,178,72,239,230,173,36,18,246,109,115,103,166,132,118,
    233,67,131,103,246,58,189,18,229,13,218,147,124,247,224,108,
    35,140,38,232,237,32,167,182,131,116,220,170,223,181,94,195,
    39,220,180,120,8,122,65,31,191,139,131,55,13,168,173,186,
    129,26,103,211,235,81,193,9,117,214,135,198,57,211,7,39,
    223,205,114,171,170,11,235,233,20,177,194,183,36,42,93,30,
    26,111,159,81,170,94,94,183,234,25,1,11,95,40,250,124,
    188,143,23,189,14,103,212,135,190,85,175,217,74,221,23,9,
    115,161,201,39,110,58,62,87,93,14,179,129,15,154,188,58,
    28,190,62,195,210,20,132,166,153,62,198,56,145,42,218,92,
    189,233,56,155,190,186,232,120,235,65,54,112,38,218,188,54,
    180,231,153,222,14,213,178,47,110,113,180,105,78,42,8,138,
    99,141,62,63,52,218,253,253,8,172,94,102,250,102,195,209,
    22,133,195,80,232,75,59,131,213,85,25,195,10,133,190,50,
    52,214,190,142,201,177,108,187,7,109,154,52,142,99,17,81,
    233,107,59,132,55,88,95,202,26,94,81,233,155,59,225,165,
    76,51,75,221,43,169,214,72,163,111,19,109,203,130,3,237,
    19,253,208,126,177,223,244,211,23,237,214,206,125,56,117,180,
    162,209,119,105,251,76,219,19,87,111,116,226,106,209,54,19,
    243,39,51,147,223,49,205,239,117,180,159,19,171,182,211,223,
    146,7,140,18,135,77,223,107,42,63,108,69,201,93,60,216,
    49,78,65,220,217,227,106,109,85,87,161,50,123,251,45,156,
    164,246,51,47,91,5,161,239,181,76,51,54,31,127,192,52,
    37,10,54,222,3,241,24,196,227,16,231,32,158,128,120,18,
    226,131,16,31,130,120,26,226,25,136,5,8,100,200,141,11,
    16,207,67,32,143,105,188,216,99,217,20,194,250,251,249,102,
    203,184,43,172,88,212,14,235,37,189,168,149,180,146,94,202,
    141,241,79,233,90,63,186,60,78,139,218,217,190,133,99,123,
    14,214,214,222,70,14,54,218,16,20,103,98,139,73,234,117,
    36,73,189,202,14,32,20,74,146,128,141,178,178,165,36,43,
    27,101,95,199,146,236,235,120,146,125,221,157,100,95,39,146,
    236,235,100,146,125,221,147,100,95,247,38,217,215,169,36,251,
    186,47,201,190,238,79,178,175,211,73,246,117,38,201,190,30,
    72,178,175,7,201,62,144,228,99,15,198,249,88,251,144,20,
    102,201,62,44,133,91,200,158,149,194,17,178,111,145,194,81,
    178,143,72,161,66,246,81,41,28,35,187,34,133,227,100,31,
    147,194,173,100,31,151,194,109,100,223,42,133,19,100,223,38,
    133,219,73,221,65,171,115,180,120,39,217,39,228,202,93,72,
    2,227,177,227,80,73,224,52,87,25,146,64,123,157,110,102,
    238,215,120,48,43,112,140,135,40,126,20,118,173,188,239,117,
    198,61,199,6,140,64,241,152,240,105,217,240,224,137,54,63,
    162,1,243,79,185,221,187,155,91,178,187,85,202,192,84,36,
    206,250,39,125,0,92,71,151,221,54,168,203,76,60,236,122,
    69,249,94,22,226,243,104,95,71,91,161,159,14,135,123,32,
    85,77,115,201,243,234,89,0,29,45,54,34,109,126,54,28,
    226,202,96,196,117,229,102,1,112,180,182,17,101,126,222,133,
    183,251,137,188,224,157,162,222,133,112,244,116,125,59,234,19,
    131,81,215,84,24,212,157,42,162,218,206,35,40,77,252,3,
    228,106,90,102,24,163,120,19,83,172,221,47,182,244,253,245,
    7,5,111,97,136,160,99,136,108,196,8,145,5,58,106,253,
    242,29,96,3,47,169,183,177,193,88,131,168,167,110,137,142,
    110,191,26,154,11,111,225,244,249,86,60,61,54,50,67,133,
    209,196,0,145,86,191,222,105,252,60,236,50,136,191,173,213,
    111,118,26,127,144,73,252,109,173,126,75,67,205,131,179,131,
    192,55,189,102,250,115,32,58,147,21,249,93,23,206,27,75,
    123,29,29,4,213,106,54,149,107,103,40,153,27,41,244,251,
    225,122,247,200,32,200,170,209,12,51,240,180,80,30,135,66,
    149,63,12,135,245,150,65,88,3,231,149,244,55,105,68,103,
    5,88,147,63,13,205,229,193,96,47,89,205,46,38,167,24,
    97,71,136,89,157,63,239,32,143,151,20,171,156,126,231,130,
    199,162,202,95,118,208,35,195,71,165,142,20,84,101,69,254,
    58,28,206,129,238,216,207,72,167,194,19,71,186,252,109,7,
    189,147,159,137,110,197,88,133,38,127,223,193,177,90,173,43,
    43,3,57,175,232,72,33,171,242,198,112,88,111,31,132,181,
    134,141,221,245,186,87,205,70,158,15,104,122,84,250,199,112,
    216,7,230,140,120,193,102,46,89,213,181,244,97,203,6,143,
    88,155,127,110,65,124,253,177,194,224,5,149,111,5,42,35,
    81,130,172,170,160,207,191,182,96,78,14,75,9,230,247,119,
    48,51,224,232,96,242,62,73,242,38,7,216,112,44,250,130,
    123,136,242,236,30,112,164,232,61,56,82,180,33,7,60,76,
    61,58,85,212,73,6,23,168,123,18,115,213,37,243,90,182,
    138,30,5,96,3,156,129,93,210,93,9,6,24,77,222,77,
    43,141,140,71,146,255,38,74,206,98,76,104,57,109,159,54,
    126,163,11,181,227,3,71,201,122,176,18,13,147,108,196,29,
    114,248,43,209,233,63,59,56,13,44,251,158,155,129,141,124,
    224,171,168,242,223,225,176,14,156,220,179,225,6,49,185,67,
    147,255,117,33,189,225,196,225,224,72,58,8,156,154,219,53,
    162,207,166,77,107,9,167,69,171,55,105,216,9,96,240,170,
    85,73,156,153,141,25,64,150,174,162,144,174,237,40,106,199,
    13,148,31,102,8,117,164,80,161,11,245,141,249,238,202,91,
    244,181,242,47,102,105,95,103,172,209,46,109,231,150,117,85,
    171,105,85,157,44,100,141,176,172,75,180,25,237,131,184,103,
    215,84,118,79,35,237,214,226,221,7,115,239,162,238,13,83,
    198,71,33,100,139,84,103,119,20,30,179,203,83,110,67,65,
    224,208,154,129,147,88,6,206,52,25,56,253,99,188,12,129,
    6,13,28,27,49,46,65,180,40,89,106,93,129,248,36,196,
    171,16,155,16,159,134,192,206,103,227,115,16,95,128,192,118,
    89,227,203,16,95,133,144,77,90,95,135,192,222,67,227,91,
    16,223,129,192,118,53,3,187,190,140,239,67,252,160,199,95,
    196,91,184,174,185,2,52,81,251,165,30,251,167,208,9,22,
    223,236,135,184,43,142,124,23,181,195,90,81,199,230,170,235,
    250,25,217,186,249,170,164,201,244,183,229,171,130,34,136,216,
    108,26,157,56,110,5,6,174,24,19,109,179,73,172,146,236,
    143,3,3,100,69,118,222,106,68,95,56,34,223,156,97,220,
    10,129,192,211,184,163,77,15,124,213,131,28,243,142,142,221,
    243,202,91,142,23,202,105,66,227,62,8,108,36,11,241,114,
    203,86,72,108,166,243,85,141,205,194,55,69,251,141,211,167,
    18,195,157,82,238,122,99,123,207,201,247,238,52,78,139,233,
    6,63,67,236,110,60,205,94,142,206,174,70,223,62,112,22,
    207,79,130,71,88,224,139,77,74,19,37,238,113,124,221,78,
    78,43,243,42,63,159,27,155,44,229,199,70,75,249,210,72,
    78,190,101,98,92,155,210,203,249,210,232,244,35,37,173,204,
    53,167,215,74,218,255,1,89,15,243,83,
};

EmbeddedPython embedded_m5_internal_ExtCharacteristic_vector(
    "m5/internal/ExtCharacteristic_vector.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/ExtCharacteristic_vector.py",
    "m5.internal.ExtCharacteristic_vector",
    data_m5_internal_ExtCharacteristic_vector,
    3499,
    19318);

} // anonymous namespace