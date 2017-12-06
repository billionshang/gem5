#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_range[] = {
    120,156,205,90,235,111,27,89,21,63,51,126,36,118,226,230,
    157,244,145,182,238,139,53,43,218,236,110,183,219,133,118,187,
    219,23,208,213,110,182,140,11,237,122,23,134,137,231,198,158,
    212,158,49,51,147,52,94,37,18,34,21,47,193,55,16,18,
    18,18,18,2,105,37,36,36,36,36,16,95,249,192,7,62,
    240,23,1,231,119,230,97,187,105,17,37,181,161,177,111,239,
    92,223,57,247,252,238,249,221,115,238,61,51,117,138,255,229,
    248,251,78,153,40,248,135,70,100,243,71,163,22,81,91,163,
    154,70,154,210,200,62,74,15,115,228,191,78,118,142,30,19,
    213,116,82,58,237,113,37,67,31,233,228,78,202,61,121,106,
    101,164,69,163,110,145,84,150,106,57,186,239,206,80,86,229,
    233,97,145,252,111,146,166,105,174,70,15,236,49,178,199,233,
    49,75,231,74,65,4,142,19,26,139,210,88,32,123,66,26,
    139,100,79,74,101,130,186,211,164,38,169,86,66,183,218,33,
    22,251,50,139,157,18,177,127,135,88,155,127,57,70,246,33,
    116,103,189,62,68,207,44,122,202,120,83,34,101,154,108,145,
    178,206,120,102,210,142,51,164,50,180,49,75,181,89,82,252,
    153,161,61,64,230,166,57,170,205,145,154,163,141,121,170,205,
    147,61,43,50,22,164,247,2,42,246,156,180,44,74,203,34,
    42,246,188,180,44,73,203,82,82,57,140,50,17,122,132,106,
    71,164,245,104,127,235,49,170,177,242,11,137,114,139,169,114,
    203,210,247,56,213,142,147,226,207,114,116,7,235,116,130,106,
    39,68,185,147,84,59,41,149,50,213,202,82,57,69,181,83,
    100,47,137,42,167,229,254,211,168,216,135,165,229,140,180,156,
    65,197,62,34,45,103,165,229,44,42,108,194,106,101,153,185,
    224,252,147,255,85,152,11,20,78,114,177,165,252,192,241,92,
    211,113,215,61,71,199,239,121,20,96,78,29,197,88,76,161,
    155,160,208,167,36,252,177,245,152,66,187,68,26,174,137,90,
    58,237,74,101,87,167,110,133,118,52,218,200,146,157,161,29,
    30,38,7,104,13,141,246,116,250,56,131,14,187,92,102,217,
    208,39,40,27,70,252,217,16,67,71,146,198,104,55,71,59,
    57,170,62,216,209,209,240,176,64,254,175,233,147,101,17,58,
    46,66,117,218,225,50,75,123,89,218,205,211,125,238,196,77,
    27,5,76,172,246,96,135,145,114,75,181,146,101,109,87,251,
    224,2,138,237,248,174,213,86,33,64,154,190,229,54,84,165,
    152,252,230,5,23,58,86,216,52,164,115,6,179,208,238,132,
    34,196,115,85,56,193,149,117,199,181,205,182,103,111,182,84,
    56,14,9,230,186,211,82,166,41,63,222,105,119,60,63,188,
    237,251,158,111,96,34,165,177,229,89,233,29,152,198,122,203,
    11,84,5,163,201,48,6,196,135,232,189,222,17,137,80,64,
    20,196,205,182,10,234,190,211,9,217,62,145,68,244,134,180,
    10,44,35,69,176,202,197,74,219,13,87,154,141,245,96,165,
    218,180,124,85,109,42,119,165,161,218,151,206,123,190,211,112,
    220,243,65,104,173,181,212,249,215,94,121,245,210,249,207,159,
    191,184,178,182,233,180,236,149,237,55,223,88,233,116,195,166,
    231,174,4,143,156,198,138,204,198,5,110,153,133,92,110,49,
    29,65,100,54,85,171,163,252,18,90,143,98,76,109,90,155,
    212,242,90,70,171,104,37,174,229,248,155,209,150,245,9,109,
    213,1,166,58,112,98,126,179,253,180,129,45,53,122,168,147,
    191,12,82,108,240,71,131,21,153,26,85,252,166,203,111,95,
    193,100,68,173,27,25,152,58,106,220,17,34,49,163,184,231,
    85,216,214,37,97,67,142,54,242,20,177,132,201,21,209,198,
    239,162,228,238,16,163,179,240,44,5,63,37,158,92,230,199,
    14,197,220,217,203,144,230,78,83,88,132,43,225,214,69,30,
    240,59,66,191,106,5,234,175,10,33,194,166,19,120,143,92,
    153,118,212,101,193,84,121,102,238,118,63,88,219,80,245,48,
    56,201,13,31,122,155,229,186,229,186,94,88,182,108,187,108,
    133,161,239,172,109,134,42,40,135,94,249,92,80,129,37,141,
    153,132,83,169,188,110,39,225,16,236,205,28,138,46,108,167,
    30,242,197,156,92,136,21,2,21,50,31,154,158,29,112,59,
    68,52,84,104,64,73,33,177,39,138,8,93,76,116,197,240,
    220,239,16,95,95,79,52,17,78,86,242,9,131,2,213,90,
    15,139,66,70,43,8,76,209,4,237,194,59,8,222,178,90,
    155,209,18,97,230,132,172,16,170,145,14,195,101,222,97,160,
    72,64,11,18,215,115,237,46,43,230,212,95,194,152,135,133,
    127,147,194,192,5,102,223,24,151,121,254,63,175,45,234,245,
    108,204,185,124,194,187,69,32,38,177,186,22,27,158,57,184,
    199,174,165,162,139,111,16,48,178,14,79,163,134,155,13,248,
    72,227,56,138,19,40,78,38,120,135,6,186,244,36,232,203,
    24,72,23,164,130,9,38,201,36,152,236,129,181,116,164,183,
    150,216,247,85,177,38,116,172,156,222,154,200,194,79,250,215,
    80,114,87,89,109,25,10,238,193,43,99,237,136,48,44,19,
    38,60,106,189,101,32,51,100,76,3,249,120,194,96,3,180,
    236,231,102,163,143,155,6,140,35,196,52,142,36,238,207,68,
    143,136,146,198,49,136,202,61,101,138,203,40,78,13,125,158,
    123,228,106,236,35,215,21,140,57,29,147,171,36,164,42,242,
    119,90,175,103,226,201,79,99,224,220,19,164,2,163,178,79,
    97,212,103,80,203,236,135,59,42,50,197,32,191,216,71,38,
    232,165,247,99,129,2,221,37,64,232,167,209,18,71,242,251,
    238,18,7,103,93,130,243,43,18,156,37,192,203,150,43,114,
    198,25,241,199,81,37,135,185,88,207,208,98,28,116,131,2,
    151,29,223,219,238,150,189,245,114,40,96,225,59,175,158,11,
    46,156,11,174,176,87,44,95,19,127,20,249,197,200,243,249,
    170,3,207,133,91,111,111,215,149,132,61,185,50,205,200,81,
    153,226,180,204,56,156,50,163,22,48,147,122,50,197,226,178,
    131,208,135,167,30,238,36,23,211,73,134,206,239,98,148,162,
    204,112,70,91,98,246,20,53,81,197,140,92,179,236,162,228,
    87,254,222,192,172,3,174,34,236,191,141,106,164,168,96,0,
    26,227,115,3,12,25,22,2,99,133,69,126,53,97,70,190,
    199,12,124,51,9,203,191,71,178,101,213,232,187,4,219,179,
    137,99,150,167,139,2,198,158,67,247,111,144,44,135,167,68,
    120,241,41,85,68,117,233,193,174,38,184,44,93,163,128,255,
    46,125,191,111,45,37,97,57,19,111,29,251,195,114,54,245,
    71,66,154,255,40,244,102,7,29,23,172,210,180,2,116,139,
    188,81,111,121,246,124,125,186,251,99,111,60,52,6,141,71,
    242,77,168,242,113,143,63,8,108,199,180,57,189,143,21,175,
    162,120,45,37,132,150,180,13,67,171,147,244,236,240,107,70,
    126,254,35,12,157,21,101,167,198,100,95,112,179,91,111,241,
    62,53,97,121,46,97,249,173,148,229,74,130,209,99,57,58,
    160,212,97,221,61,93,227,243,100,116,146,228,61,24,78,43,
    121,82,99,216,225,227,148,152,139,79,137,188,66,48,136,16,
    52,249,138,235,130,163,27,136,125,50,53,171,209,164,165,38,
    143,172,137,98,123,184,46,1,6,189,218,178,218,107,182,117,
    173,129,49,48,80,61,89,82,122,162,245,116,191,214,88,14,
    218,179,20,151,203,75,137,246,91,195,117,7,111,176,200,84,
    107,33,191,237,213,197,7,220,107,170,114,91,181,215,248,148,
    216,116,58,229,245,150,213,16,91,36,33,241,75,137,169,195,
    4,210,143,162,51,224,188,224,76,54,35,56,219,222,119,143,
    114,72,201,74,72,121,27,33,101,71,156,130,169,71,81,165,
    103,66,217,35,200,121,7,171,194,85,143,204,136,99,81,176,
    0,29,172,78,71,185,182,241,242,192,26,150,61,172,229,55,
    162,126,195,55,183,201,103,102,135,247,234,27,189,245,59,197,
    17,96,158,35,192,126,186,66,183,62,136,178,140,115,233,130,
    94,30,182,194,98,225,111,37,22,142,142,36,105,188,145,195,
    66,180,238,57,102,243,81,47,236,70,126,246,2,138,207,162,
    184,154,154,4,235,206,86,124,154,85,177,85,194,105,74,183,
    131,124,96,13,125,175,203,145,90,2,32,95,183,76,115,4,
    225,236,117,22,185,158,152,33,207,46,52,175,23,242,133,158,
    25,210,245,87,234,49,149,246,45,190,148,114,190,215,126,223,
    169,251,222,221,155,189,104,176,217,169,15,23,195,117,56,41,
    26,220,172,61,167,238,232,225,122,126,219,106,245,171,111,220,
    24,250,252,223,140,220,218,65,116,199,246,208,9,140,193,153,
    31,129,234,240,93,223,238,169,46,27,206,235,182,237,27,232,
    176,63,170,253,137,158,63,170,197,193,108,12,57,184,52,33,
    138,74,65,114,165,81,54,180,16,103,67,145,40,229,202,100,
    146,40,45,37,137,210,67,100,151,164,50,21,231,66,145,244,
    140,178,159,51,200,126,162,50,27,103,63,145,221,156,151,92,
    230,98,146,221,92,66,40,133,71,63,80,40,149,136,52,124,
    79,245,67,122,145,17,212,184,60,90,165,141,55,41,222,65,
    255,111,163,167,184,3,142,158,41,157,163,201,249,2,138,193,
    208,105,92,73,166,110,184,211,132,48,242,99,122,118,184,124,
    14,127,177,208,191,78,57,18,135,202,111,41,107,75,217,35,
    138,168,146,222,232,27,246,39,7,115,127,211,3,112,248,144,
    210,28,29,18,236,168,162,17,127,118,48,16,131,54,105,240,
    0,155,45,203,119,194,238,40,109,210,55,236,207,15,6,103,
    102,0,14,239,108,156,142,10,70,5,37,78,102,96,200,95,
    28,12,198,161,65,24,206,39,106,84,24,36,217,204,227,253,
    242,96,0,166,6,0,108,89,45,103,100,75,35,206,134,59,
    246,175,94,36,4,86,194,15,71,9,65,6,252,205,193,32,
    148,6,32,240,241,107,84,0,16,165,120,184,79,15,166,254,
    220,128,250,161,39,235,217,109,140,10,4,182,149,233,160,191,
    237,131,146,102,221,168,111,131,147,66,137,50,102,251,209,204,
    15,160,105,43,191,161,130,251,78,216,236,203,134,226,22,127,
    248,121,208,222,216,191,123,193,168,36,184,6,120,202,214,67,
    101,212,134,110,41,128,234,13,253,251,3,131,154,29,4,21,
    84,55,215,144,89,28,37,36,100,43,146,129,255,240,130,1,
    213,61,55,180,28,55,120,130,121,214,240,17,37,35,255,241,
    41,142,225,255,42,239,242,103,74,242,46,242,132,44,205,187,
    24,111,161,120,90,166,229,203,40,240,92,193,120,15,5,244,
    50,238,162,48,80,220,67,241,53,20,15,80,32,37,107,124,
    29,133,137,98,45,53,20,36,199,169,154,222,17,224,109,252,
    252,206,0,238,161,129,191,205,34,127,0,217,103,41,77,203,
    140,21,50,207,248,211,11,255,45,35,229,117,10,12,122,123,
    59,106,77,103,104,184,248,240,44,246,47,7,94,79,169,246,
    119,220,145,106,175,88,228,95,15,172,125,33,209,190,138,141,
    101,79,255,187,67,215,31,9,191,191,245,244,151,211,236,19,
    111,48,69,10,156,163,228,137,78,55,192,2,34,99,42,85,
    95,222,185,73,146,158,111,37,128,86,173,118,244,210,132,188,
    23,96,156,161,248,121,174,241,82,186,88,241,136,91,30,163,
    69,143,40,249,156,45,15,41,229,185,146,113,17,5,146,146,
    178,237,136,242,164,146,33,245,85,195,9,56,182,200,214,184,
    190,197,187,50,88,255,125,107,251,158,83,127,40,41,64,201,
    165,73,86,74,30,199,220,112,26,183,93,219,177,220,27,221,
    80,125,224,219,202,23,57,236,251,120,182,220,80,156,241,254,
    62,33,212,126,207,9,195,150,250,183,119,47,60,171,155,44,
    221,16,239,79,244,237,90,251,245,199,134,43,206,212,25,94,
    251,6,203,136,129,160,191,108,119,239,184,178,113,190,215,244,
    149,101,223,185,37,119,196,109,119,61,63,188,115,75,150,143,
    176,80,76,57,124,127,20,61,164,137,158,30,95,195,81,81,
    94,166,192,171,36,133,169,2,251,38,188,198,148,209,138,90,
    73,203,102,38,167,11,217,201,137,66,182,48,150,145,119,1,
    74,218,156,94,204,22,38,22,39,11,124,85,208,196,95,165,
    127,37,77,190,218,226,197,248,215,39,122,252,11,49,235,192,
    2,
};

EmbeddedPython embedded_m5_internal_range(
    "m5/internal/range.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/swig/range.py",
    "m5.internal.range",
    data_m5_internal_range,
    2769,
    10637);

} // anonymous namespace