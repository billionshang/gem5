#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DerivO3CPU[] = {
    120,156,197,91,105,123,219,198,17,94,128,20,101,202,146,45,
    223,183,205,28,78,20,39,182,18,219,178,157,198,117,106,203,
    118,171,212,177,101,82,174,29,37,45,3,1,43,17,18,9,
    176,192,82,50,83,185,151,210,52,189,146,222,247,125,223,247,
    241,47,250,244,75,255,76,191,180,51,3,14,184,36,65,145,
    125,218,71,138,165,201,242,221,119,175,217,153,217,89,16,178,
    69,227,191,1,248,125,87,78,136,240,175,166,16,14,252,24,
    162,44,68,197,16,179,134,48,164,33,156,221,98,105,64,4,
    103,133,51,32,94,23,98,214,20,210,20,107,80,72,137,151,
    77,225,13,83,155,140,40,167,8,49,68,125,72,200,180,152,
    29,16,119,189,29,34,45,51,98,105,72,4,175,10,195,48,
    60,67,220,115,6,133,179,69,188,14,189,67,33,75,29,110,
    17,8,14,17,152,21,206,86,2,135,132,51,76,133,173,162,
    62,42,228,176,152,29,65,218,236,54,232,246,4,116,187,157,
    186,253,7,118,235,64,205,30,225,108,67,58,204,235,37,100,
    166,145,73,227,109,167,94,70,121,150,59,196,236,78,46,239,
    210,202,187,181,242,30,173,188,87,43,239,211,202,251,181,242,
    1,173,124,80,43,31,210,202,135,181,242,17,173,124,84,43,
    31,211,202,57,173,252,144,86,126,88,43,63,162,149,31,213,
    202,199,181,242,99,90,249,113,173,60,166,149,159,208,202,39,
    180,242,147,90,249,41,173,124,82,43,159,210,202,227,90,249,
    105,42,195,206,237,20,139,207,136,197,211,98,241,140,152,7,
    99,218,17,239,210,89,33,83,98,113,66,204,78,8,9,63,
    103,197,26,216,155,179,83,107,113,142,90,236,138,91,156,167,
    22,23,196,236,5,33,225,231,124,212,34,35,10,99,123,193,
    134,221,127,195,127,99,6,148,212,48,136,101,25,132,174,239,
    21,93,111,222,119,77,172,207,160,64,139,183,81,12,54,76,
    127,18,77,255,23,130,236,222,49,27,166,255,64,64,199,6,
    174,165,108,138,7,84,120,96,138,250,152,88,53,196,98,90,
    56,41,177,10,195,12,224,4,22,12,177,102,138,87,82,72,
    120,0,50,13,6,122,84,164,85,100,247,139,100,160,81,79,
    131,226,193,128,88,29,16,133,123,171,38,2,75,89,17,252,
    68,188,118,152,58,221,66,157,154,98,21,100,90,172,165,197,
    131,140,184,11,36,128,22,179,184,124,227,222,42,172,20,144,
    194,88,26,102,123,83,91,46,46,197,113,3,207,170,72,181,
    3,202,197,170,21,88,149,226,85,25,184,203,183,206,76,78,
    223,25,27,98,154,31,158,170,90,170,148,167,118,41,84,72,
    165,170,168,63,223,147,106,43,20,230,93,207,41,86,124,167,
    86,150,106,11,118,86,156,119,203,178,88,164,202,169,74,213,
    15,212,181,32,240,131,60,234,148,192,178,111,197,45,80,163,
    118,217,15,229,24,142,70,195,228,177,123,133,236,249,42,245,
    136,19,160,185,98,99,71,134,118,224,86,21,108,85,212,35,
    178,177,183,49,220,36,18,225,171,32,198,43,158,26,47,45,
    204,135,227,133,146,21,200,66,73,122,227,11,178,50,113,210,
    15,220,5,215,59,25,42,107,174,44,79,158,126,250,153,137,
    147,207,158,60,51,62,87,115,203,206,248,253,11,231,198,171,
    117,85,242,189,241,202,196,184,235,41,9,90,42,143,183,235,
    231,20,112,118,226,72,43,238,66,209,165,53,22,75,178,92,
    149,193,8,162,7,113,22,198,168,49,108,100,140,148,49,102,
    140,64,105,0,126,83,198,97,115,171,113,211,197,85,218,184,
    114,180,176,180,110,83,184,209,134,88,50,69,112,24,45,102,
    17,126,12,220,98,176,155,2,214,153,84,119,27,213,19,161,
    139,41,180,131,8,92,37,43,3,115,3,230,69,220,120,79,
    144,169,12,136,197,140,136,76,8,44,47,178,169,160,142,18,
    232,216,141,9,157,167,69,248,21,1,234,6,227,89,21,13,
    195,90,75,9,195,27,21,106,8,227,35,160,123,97,192,143,
    147,109,22,198,112,250,55,201,68,84,201,13,253,21,143,54,
    2,203,228,77,5,208,204,116,253,214,220,162,180,85,120,12,
    128,151,252,90,206,182,60,207,87,57,203,113,114,150,82,129,
    59,87,83,50,204,41,63,119,60,28,195,189,205,239,96,43,
    139,251,171,87,217,170,208,2,192,170,162,15,142,107,43,248,
    176,139,62,208,46,132,82,129,133,148,124,39,4,28,187,88,
    144,42,143,147,84,168,100,159,38,66,6,84,68,42,14,15,
    188,109,240,249,50,207,132,172,116,44,195,54,21,202,242,188,
    26,34,243,180,194,176,72,51,65,156,44,17,59,94,182,202,
    53,73,189,131,45,41,152,16,22,163,57,108,180,45,238,199,
    117,177,26,104,109,158,239,57,117,152,170,107,63,142,179,216,
    79,22,57,76,54,185,7,236,113,16,100,6,254,159,49,246,
    154,118,186,97,133,25,182,68,140,142,74,144,29,24,13,83,
    0,171,92,131,72,52,102,82,40,161,229,145,175,62,140,37,
    108,156,63,140,226,8,138,163,40,142,177,6,54,80,13,35,
    237,106,56,143,67,155,180,118,90,37,110,91,138,87,233,180,
    248,219,129,166,191,65,240,44,160,223,152,232,93,77,191,73,
    99,160,13,46,161,4,42,121,100,74,132,51,24,214,209,191,
    168,51,116,37,112,10,44,53,93,133,116,150,31,69,93,108,
    97,43,207,163,233,234,246,187,160,217,111,30,183,139,140,55,
    127,128,131,102,17,25,145,217,230,15,97,87,3,9,74,207,
    161,120,104,19,52,223,52,192,133,14,3,124,14,103,49,218,
    48,192,17,50,188,33,248,29,53,237,84,99,59,226,99,117,
    87,155,225,161,213,165,19,172,238,49,44,165,58,21,176,121,
    6,215,88,246,117,205,224,112,166,166,190,186,155,80,168,239,
    195,69,233,166,182,15,210,133,187,222,62,200,0,76,202,0,
    158,166,12,128,178,8,202,71,163,160,158,162,184,30,21,6,
    80,59,243,41,177,183,113,178,135,89,144,213,192,191,95,207,
    249,243,57,69,203,199,24,124,241,120,120,234,120,248,28,68,
    215,220,37,138,107,81,124,141,34,104,32,171,24,1,177,233,
    181,251,182,164,3,149,62,21,139,81,192,43,82,240,43,54,
    14,106,176,186,61,168,91,147,149,78,161,63,84,1,70,252,
    141,86,251,80,172,118,92,197,11,56,238,16,233,60,101,236,
    3,11,27,50,104,114,197,40,232,83,242,70,181,240,123,5,
    247,1,21,32,5,94,87,242,133,104,234,180,42,92,95,254,
    169,22,43,218,184,53,229,199,97,144,59,108,61,153,166,245,
    224,111,138,125,227,147,130,50,92,67,188,33,208,62,192,12,
    26,190,17,187,18,26,196,46,164,127,64,144,19,37,100,19,
    20,155,10,152,65,16,3,66,86,120,158,168,81,114,241,130,
    120,83,243,64,78,1,82,141,28,86,79,1,210,113,92,35,
    195,234,235,152,79,183,6,64,220,167,146,21,34,45,138,106,
    77,167,110,158,34,113,238,9,81,125,3,173,108,75,52,98,
    17,39,247,74,211,198,240,16,61,100,236,50,53,203,121,6,
    197,233,216,104,12,198,54,102,158,199,68,247,195,191,24,157,
    41,47,227,100,210,52,253,237,131,228,62,205,46,98,255,24,
    96,255,56,29,251,135,164,195,239,117,186,235,160,52,209,10,
    214,76,3,46,238,144,17,226,61,57,45,228,128,152,205,160,
    39,81,42,111,52,28,205,224,160,135,33,178,229,100,37,245,
    220,140,20,23,27,66,180,199,40,238,111,116,48,193,109,190,
    88,182,42,115,142,117,233,13,28,21,135,182,217,245,76,94,
    199,168,190,14,116,27,163,219,82,232,227,4,175,103,121,163,
    3,201,57,24,36,94,7,185,141,227,219,20,61,102,74,50,
    87,145,149,57,184,232,150,220,106,110,190,108,45,208,126,165,
    26,235,188,197,235,84,180,225,237,25,76,120,2,165,159,179,
    125,15,226,126,205,86,126,144,115,36,92,255,164,147,59,153,
    163,67,35,231,134,57,107,14,106,45,91,69,110,208,234,212,
    148,64,91,193,66,72,185,242,210,10,22,55,99,191,139,112,
    203,119,225,2,241,166,136,143,235,232,254,25,159,1,116,53,
    136,188,10,78,86,184,216,169,122,20,233,48,155,201,159,66,
    241,132,216,164,163,226,44,12,242,9,28,13,149,152,49,14,
    153,89,83,141,182,248,244,52,182,10,59,61,251,95,233,62,
    60,59,122,24,215,240,239,12,50,229,32,62,111,64,153,197,
    227,98,118,136,193,173,36,135,9,28,97,112,27,201,237,4,
    142,50,184,131,228,78,2,119,49,184,155,228,30,2,247,50,
    184,143,228,126,2,15,48,120,144,228,33,2,15,51,120,132,
    228,81,2,143,49,152,35,249,16,129,15,51,248,8,201,71,
    9,60,206,224,99,36,31,39,112,140,193,39,72,158,32,240,
    73,6,159,34,121,146,192,83,12,142,147,124,154,192,103,24,
    60,77,242,12,129,103,25,156,32,121,142,192,243,12,94,32,
    249,44,129,239,96,240,57,146,23,9,124,39,131,151,72,62,
    79,224,187,24,188,76,242,10,129,147,12,94,37,121,141,192,
    235,12,190,155,228,123,8,156,98,240,5,146,239,37,240,6,
    131,47,146,188,73,224,45,6,167,73,222,38,48,207,96,129,
    228,12,129,119,24,124,31,201,187,4,222,99,240,37,146,179,
    4,190,204,224,43,36,223,79,224,7,24,44,146,124,149,64,
    139,193,57,146,54,129,14,131,146,228,60,129,11,12,150,72,
    186,4,46,50,184,68,178,76,96,133,65,143,164,79,96,149,
    193,15,146,12,8,12,25,84,36,107,4,46,51,184,66,242,
    62,129,117,6,95,35,249,33,2,87,25,124,64,242,195,4,
    126,132,193,143,146,252,24,129,31,103,112,141,228,235,4,126,
    130,193,55,72,126,146,192,55,25,252,20,201,79,19,248,25,
    6,63,75,242,115,4,190,197,224,219,36,63,79,224,23,24,
    252,34,201,47,17,248,101,6,191,66,242,171,4,126,141,193,
    175,147,252,6,129,223,100,240,91,36,191,77,224,119,24,252,
    46,201,239,17,248,125,6,127,64,242,135,4,254,136,193,31,
    147,252,9,129,63,101,240,103,36,127,78,224,47,24,252,37,
    201,95,17,248,107,6,127,67,242,183,4,254,142,193,223,147,
    252,3,129,127,228,175,28,254,68,224,159,197,236,95,240,217,
    50,34,127,197,12,101,240,127,205,80,232,88,223,140,3,253,
    237,255,107,98,146,63,191,217,203,200,95,16,141,43,77,183,
    164,196,208,215,56,18,37,37,139,6,63,121,209,23,72,79,
    129,247,37,156,127,69,59,144,150,146,209,206,29,222,248,37,
    83,146,19,205,225,139,205,68,163,243,185,192,229,120,117,107,
    116,173,171,239,166,13,141,30,63,209,134,26,119,189,131,34,
    13,217,19,62,32,184,136,15,8,86,73,21,69,51,122,70,
    208,52,218,129,88,35,187,65,120,114,165,216,174,149,232,33,
    0,78,205,170,86,165,231,228,79,8,253,94,79,213,27,109,
    27,152,84,253,93,104,87,172,148,177,27,46,242,157,190,138,
    249,163,182,90,218,217,129,216,59,55,97,143,201,172,255,201,
    102,61,246,55,161,39,145,249,139,40,40,109,140,51,198,252,
    243,241,14,29,73,178,217,27,215,11,51,5,247,53,137,79,
    148,122,48,224,186,71,217,44,3,234,104,34,253,246,53,15,
    46,225,50,164,30,123,80,176,75,124,8,20,35,234,225,196,
    6,133,219,147,37,105,47,221,240,45,39,234,183,15,26,246,
    141,142,220,130,170,227,93,26,94,149,85,98,21,74,238,188,
    162,33,250,99,226,40,163,209,40,45,21,201,43,47,244,86,
    78,161,67,57,49,146,188,63,133,194,84,143,29,140,25,188,
    131,12,36,211,225,50,229,46,187,170,222,189,195,152,193,29,
    50,160,114,73,244,57,203,94,154,244,43,241,36,123,146,176,
    91,124,8,173,97,244,216,161,179,81,96,121,118,105,58,144,
    14,117,220,139,131,253,162,203,55,161,228,38,182,101,151,228,
    180,31,168,176,123,183,26,135,187,109,66,244,220,168,179,137,
    95,169,184,106,198,191,42,109,223,145,87,101,217,138,116,220,
    55,25,7,194,67,44,161,78,61,190,94,39,215,165,178,75,
    205,1,251,229,226,120,59,181,241,154,85,201,222,193,188,169,
    107,119,155,131,245,199,100,63,106,175,88,95,57,121,137,95,
    143,245,169,73,157,220,174,73,173,46,217,60,35,226,93,215,
    81,165,238,54,172,147,216,134,53,44,89,239,14,109,98,127,
    123,148,192,229,61,234,172,74,214,6,243,250,82,93,18,153,
    85,151,80,151,172,149,136,216,67,117,58,137,85,167,97,201,
    1,223,113,195,170,5,203,109,246,221,7,141,207,133,22,84,
    61,154,212,112,30,117,121,165,54,63,47,131,56,120,245,69,
    196,49,182,3,177,13,87,143,116,109,124,187,38,107,50,30,
    164,31,30,142,177,141,199,136,225,100,187,33,78,103,224,233,
    151,203,54,214,89,149,236,221,17,47,176,170,55,32,23,245,
    236,117,226,64,7,147,227,64,123,69,114,16,38,86,115,247,
    123,113,56,80,55,161,46,154,246,131,21,43,112,244,51,171,
    31,94,188,35,45,176,58,148,216,180,54,237,251,101,234,122,
    189,122,236,18,115,231,232,99,178,14,93,185,50,227,79,82,
    152,233,17,117,59,152,172,237,246,138,117,154,183,219,80,127,
    204,150,129,116,251,73,116,39,98,181,197,195,190,136,236,119,
    109,248,58,147,108,15,131,253,49,91,150,163,7,192,196,40,
    234,134,97,13,2,229,181,251,210,174,169,94,33,55,137,204,
    33,55,161,46,217,230,137,216,195,47,52,14,251,69,19,74,
    206,251,60,41,157,112,166,112,171,123,102,24,51,56,51,100,
    64,61,148,72,175,85,166,90,82,226,222,44,236,24,191,109,
    214,193,228,176,15,140,233,82,61,156,156,204,203,133,117,110,
    13,173,52,62,29,90,208,100,171,104,80,174,151,125,75,197,
    67,244,199,100,251,105,175,72,14,51,13,214,148,215,28,166,
    31,30,135,163,86,184,171,18,242,183,174,232,59,209,7,77,
    211,85,19,85,135,187,53,244,231,162,158,215,37,96,159,131,
    141,62,225,115,178,143,4,228,113,125,38,210,73,100,118,168,
    132,186,228,67,145,137,253,36,105,9,92,62,64,59,171,146,
    13,134,121,189,19,233,14,38,155,86,123,197,250,205,97,255,
    250,28,40,102,182,15,196,21,201,249,93,196,234,145,4,234,
    36,78,2,53,44,249,12,8,43,42,58,185,166,253,178,107,
    175,115,88,180,19,249,176,104,195,147,125,11,72,180,105,218,
    32,253,240,216,7,91,225,228,213,3,103,234,182,214,127,79,
    18,171,72,195,186,78,106,234,246,76,41,144,97,201,47,59,
    235,78,94,231,105,147,215,224,228,24,13,156,27,5,125,246,
    189,89,28,201,117,176,235,206,1,163,117,1,125,17,181,45,
    214,113,117,162,75,227,155,181,10,109,147,235,45,32,153,159,
    54,253,23,116,28,113,79,52,98,103,109,87,165,128,239,244,
    161,186,38,75,83,93,12,118,213,8,48,250,83,93,11,81,
    83,157,142,119,177,202,15,214,172,176,212,195,187,117,82,108,
    186,77,76,61,153,216,72,249,1,101,214,69,187,44,173,160,
    88,5,130,31,45,227,191,225,227,120,248,154,105,114,117,242,
    124,85,219,5,166,39,137,23,165,97,201,135,221,202,92,83,
    85,235,18,248,52,108,124,166,7,215,244,221,131,35,203,82,
    201,142,135,237,20,144,27,111,120,58,112,22,7,126,189,88,
    140,222,78,131,207,229,98,113,83,94,32,120,39,12,242,22,
    142,246,97,65,47,16,24,25,51,107,238,49,54,248,159,153,
    205,100,13,122,55,164,237,207,45,34,117,60,43,248,173,175,
    122,152,71,36,143,214,31,61,57,167,191,10,224,215,50,240,
    33,59,61,151,189,9,231,82,244,167,6,152,43,229,49,162,
    210,155,162,121,204,10,162,39,240,248,58,45,189,106,23,189,
    234,232,201,21,122,111,133,94,83,201,159,65,28,125,189,50,
    113,138,245,119,42,210,223,149,248,1,165,139,239,189,208,95,
    39,84,38,232,166,216,73,46,184,149,232,197,119,250,227,10,
    189,222,9,44,40,239,105,67,67,216,28,171,140,55,211,253,
    137,253,93,191,67,119,205,3,109,149,215,239,92,149,161,93,
    92,150,52,163,110,77,145,211,209,244,86,181,119,211,136,211,
    81,41,33,17,132,186,73,84,91,71,191,13,101,89,161,4,
    75,235,210,239,189,11,231,102,110,92,161,152,151,88,57,109,
    225,187,180,96,224,119,173,242,146,236,54,187,66,61,84,178,
    210,177,1,52,187,23,101,197,15,234,47,66,2,73,206,172,
    215,95,118,156,32,111,121,11,146,215,222,190,221,151,27,111,
    47,69,125,48,43,151,56,135,86,110,23,99,128,202,134,49,
    28,75,172,159,44,251,246,146,116,26,156,35,221,57,87,253,
    10,26,79,119,149,163,86,143,118,211,234,13,223,182,202,151,
    171,96,189,201,107,129,14,92,123,218,133,196,123,217,181,101,
    151,181,52,235,219,103,1,35,76,21,46,175,111,80,17,71,
    29,108,171,156,244,107,88,228,182,237,59,22,181,157,242,66,
    53,3,186,6,123,104,111,63,29,248,182,12,67,110,159,172,
    159,6,137,2,7,87,209,85,169,213,98,49,48,55,202,244,
    150,85,219,215,202,20,199,3,185,224,130,237,5,212,188,65,
    142,130,61,197,213,228,107,184,222,112,51,66,126,244,150,99,
    244,42,247,37,58,231,151,65,224,95,131,100,183,103,33,252,
    227,55,174,41,99,200,24,49,210,169,225,209,108,122,120,107,
    54,157,29,76,209,171,250,35,198,46,115,40,157,221,58,108,
    252,47,255,142,65,176,31,50,143,189,39,107,252,7,28,130,
    136,47,
};

EmbeddedPython embedded_m5_internal_param_DerivO3CPU(
    "m5/internal/param_DerivO3CPU.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_DerivO3CPU.py",
    "m5.internal.param_DerivO3CPU",
    data_m5_internal_param_DerivO3CPU,
    3954,
    14921);

} // anonymous namespace