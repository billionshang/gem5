#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_Float_vector[] = {
    120,156,205,92,123,136,36,71,25,255,186,231,177,55,115,187,
    183,207,219,189,87,238,230,146,92,50,137,222,109,94,151,135,
    9,23,99,76,66,34,94,76,111,228,146,205,105,167,119,186,
    118,183,119,103,186,39,221,189,119,55,113,79,137,123,26,159,
    168,248,64,69,68,124,32,1,65,16,4,65,16,4,65,16,
    132,128,32,8,130,160,8,130,224,127,130,32,168,223,239,235,
    238,153,158,199,73,46,179,55,125,183,59,223,213,244,212,84,
    125,191,175,126,245,85,213,87,85,91,163,248,95,129,95,239,
    174,16,5,119,105,68,54,255,106,84,39,106,104,180,172,145,
    166,52,178,231,104,179,64,254,125,100,23,232,10,209,178,78,
    74,167,29,78,228,232,37,157,220,113,249,78,145,234,57,121,
    162,81,171,76,42,79,203,5,58,231,78,83,94,21,105,179,
    76,254,203,164,105,154,171,209,11,246,24,217,123,232,10,151,
    206,137,146,20,184,135,240,176,44,15,75,100,239,149,135,101,
    178,199,37,177,151,90,83,164,198,105,121,2,217,150,247,113,
    177,119,114,177,147,82,236,155,40,214,230,79,246,147,189,15,
    217,89,175,23,145,51,143,156,82,223,164,148,50,69,182,148,
    178,202,120,166,219,25,167,73,229,104,99,134,150,103,72,241,
    239,52,237,48,100,123,38,201,56,219,206,56,43,25,231,104,
    121,142,20,255,206,70,25,139,180,84,157,103,235,57,255,229,
    127,85,182,30,133,227,44,46,40,63,112,60,215,116,220,85,
    207,209,241,121,17,2,182,174,65,140,197,70,127,28,70,127,
    131,196,226,182,30,27,253,50,113,193,26,108,90,215,233,178,
    36,46,235,212,170,210,182,70,27,121,178,115,180,205,213,20,
    160,192,154,70,59,58,157,207,33,195,101,150,121,54,205,81,
    202,135,145,197,55,196,52,81,73,99,116,185,64,219,5,90,
    122,97,91,199,131,205,18,249,63,160,87,143,72,161,123,164,
    80,157,182,89,230,105,39,79,151,139,116,142,51,241,163,141,
    18,224,107,47,108,51,82,126,178,84,205,179,182,103,83,112,
    1,197,118,124,215,106,168,112,130,211,230,147,117,207,10,205,
    11,170,22,122,126,181,156,100,241,130,83,77,43,92,55,228,
    59,57,24,163,209,12,165,44,207,85,225,94,78,172,58,174,
    109,54,60,123,171,174,194,61,40,200,92,117,234,202,52,229,
    195,167,27,77,207,15,159,240,125,207,55,96,79,121,200,21,
    181,191,1,107,214,234,94,160,170,168,77,170,49,80,124,136,
    220,171,77,41,17,10,136,158,248,178,173,130,154,239,52,67,
    110,166,168,68,228,70,105,85,52,144,136,224,60,139,197,134,
    27,46,174,175,173,6,139,75,235,150,175,150,214,149,187,184,
    166,26,167,79,122,190,179,230,184,39,131,208,90,169,171,147,
    247,220,117,247,233,147,15,157,188,119,113,101,203,169,219,139,
    151,30,188,127,177,217,10,215,61,119,177,113,122,209,113,67,
    197,22,170,47,166,109,115,138,63,159,65,45,23,157,53,211,
    17,124,230,186,170,55,149,15,51,6,135,160,129,54,165,141,
    107,69,45,167,85,181,9,78,21,248,149,211,142,232,123,181,
    179,14,16,214,128,26,204,202,167,185,132,6,214,104,83,39,
    255,8,152,178,193,191,26,154,150,249,178,132,207,116,249,236,
    57,152,38,122,186,145,67,251,71,15,183,133,93,76,51,206,
    249,8,26,220,37,161,72,129,54,138,20,81,135,25,23,113,
    201,111,65,114,118,20,163,115,225,121,10,190,74,108,106,38,
    205,54,197,132,218,201,145,230,78,81,88,70,143,228,167,243,
    92,225,199,133,147,75,85,168,127,86,232,17,174,59,129,119,
    209,149,70,64,90,122,209,18,91,230,3,173,103,87,54,216,
    94,193,49,126,240,162,183,85,169,89,174,235,133,21,203,182,
    43,86,24,250,206,202,86,168,130,74,232,85,78,4,85,180,
    171,49,157,48,172,93,94,171,153,48,10,173,207,140,138,222,
    216,78,45,228,55,179,242,70,90,33,80,33,179,99,221,179,
    3,126,142,34,214,84,104,64,201,16,70,246,68,17,33,143,
    137,172,168,158,243,237,227,247,143,37,154,8,67,171,197,132,
    79,129,170,175,134,101,161,166,21,4,166,104,130,231,194,66,
    20,124,193,170,111,41,41,157,121,20,178,66,72,70,58,140,
    146,135,7,128,41,49,129,224,114,61,215,110,177,154,78,237,
    118,104,112,64,216,56,46,124,220,207,92,28,99,89,228,255,
    139,218,188,94,203,199,12,44,38,44,132,71,12,73,56,160,
    197,52,96,70,238,176,247,169,234,226,62,4,154,244,209,155,
    145,194,151,141,35,16,55,65,28,133,56,150,160,31,145,9,
    38,122,77,240,0,170,213,5,183,32,68,115,229,18,132,118,
    87,63,59,216,233,103,236,44,151,208,95,116,244,170,78,127,
    201,195,177,250,103,32,57,171,244,196,28,5,207,195,141,163,
    95,73,97,232,66,220,25,144,234,116,17,177,151,49,5,59,
    236,73,216,109,128,178,105,222,174,165,120,107,160,169,132,180,
    198,193,196,81,154,200,17,209,213,56,140,162,10,3,12,94,
    129,56,62,98,171,119,136,183,214,71,188,135,161,193,84,76,
    188,9,33,92,153,95,83,122,45,23,55,69,123,8,157,237,
    33,28,216,150,31,192,182,219,144,202,245,131,207,134,104,49,
    228,39,83,68,131,150,122,26,217,89,78,180,22,0,40,77,
    177,5,158,22,156,115,23,120,164,215,101,164,191,75,70,122,
    153,45,200,140,39,114,226,57,241,227,81,162,0,203,172,230,
    104,62,30,193,131,18,203,166,239,93,106,85,188,213,74,40,
    208,225,115,31,57,17,156,58,17,60,204,222,180,114,70,252,
    88,228,79,35,143,233,171,38,60,30,190,250,196,165,154,146,
    193,83,222,153,102,228,224,76,113,118,102,60,40,51,219,246,
    195,174,122,98,112,113,245,65,232,195,195,143,210,228,229,182,
    201,129,224,25,212,89,22,123,231,180,5,102,86,89,19,197,
    204,200,193,203,4,77,62,229,215,123,208,6,0,175,8,147,
    97,99,41,82,91,16,1,155,241,206,46,246,140,6,143,177,
    200,21,124,48,97,77,177,195,26,188,114,73,127,120,157,100,
    6,171,209,39,9,188,224,230,143,251,67,187,251,128,8,179,
    200,254,97,146,142,51,96,214,32,190,104,9,51,5,201,193,
    46,42,120,64,178,70,147,136,103,232,83,169,94,151,12,245,
    185,120,142,154,30,234,243,109,63,38,132,122,75,195,121,190,
    219,225,161,141,214,173,0,217,34,47,214,233,200,157,17,163,
    61,191,100,47,62,34,118,237,137,106,51,161,216,249,14,183,
    48,88,30,214,102,245,20,99,238,134,184,167,77,22,45,121,
    118,253,117,60,70,87,31,224,205,104,236,120,9,138,228,69,
    245,201,49,153,213,68,243,175,167,185,72,139,139,105,247,139,
    66,210,47,254,210,238,23,74,6,186,43,178,142,129,212,193,
    128,29,93,227,229,32,207,250,176,250,202,147,42,208,114,145,
    212,24,150,27,88,228,21,146,69,94,49,94,228,117,214,133,
    227,146,46,73,122,66,214,133,132,197,92,188,46,156,76,214,
    133,188,162,155,144,196,116,188,244,227,69,92,188,216,155,197,
    98,15,137,185,120,177,183,204,203,195,25,73,204,199,171,186,
    229,5,172,107,145,56,128,197,35,18,7,201,158,151,196,33,
    178,23,36,113,24,93,30,131,148,244,177,228,37,158,25,126,
    188,107,216,151,246,60,27,181,116,155,181,17,33,33,46,141,
    210,227,129,147,143,212,173,198,138,109,157,89,67,141,168,182,
    150,248,8,61,193,48,149,198,128,254,173,93,13,134,188,61,
    157,96,185,48,74,111,119,63,87,208,198,32,125,219,246,106,
    226,226,158,95,87,149,134,106,172,240,106,123,221,105,86,86,
    235,214,154,180,83,46,198,248,108,130,49,20,102,246,78,171,
    130,59,33,189,74,205,115,121,80,218,66,125,21,91,241,58,
    84,217,149,147,21,25,209,42,78,80,177,86,248,83,171,22,
    70,253,181,219,243,200,108,222,242,215,2,153,184,111,94,68,
    114,212,237,108,154,142,235,240,74,198,161,238,121,68,23,91,
    161,167,221,33,169,64,41,180,157,208,17,26,237,0,134,38,
    109,180,105,153,40,218,166,229,68,212,100,27,90,50,89,78,
    115,82,22,235,115,125,238,201,148,165,84,54,112,224,93,189,
    142,245,163,181,121,123,64,78,119,182,54,170,104,48,237,7,
    54,219,15,204,113,107,126,106,14,133,111,184,163,228,24,168,
    3,29,252,20,191,118,13,156,173,210,224,140,51,163,109,57,
    193,6,21,182,134,198,182,48,0,155,195,186,185,53,149,194,
    119,122,196,248,224,31,18,53,46,13,141,113,64,175,83,175,
    108,89,245,12,1,194,135,137,14,31,25,224,253,174,193,161,
    12,160,102,205,107,182,50,241,39,194,74,212,254,209,93,199,
    228,170,75,97,118,152,80,251,107,195,97,26,208,205,76,65,
    101,154,217,224,138,3,139,162,193,149,93,199,214,244,213,5,
    199,219,10,178,195,150,104,240,250,208,222,99,190,31,158,101,
    95,232,113,144,163,30,0,176,168,140,181,248,204,208,8,247,
    15,34,167,122,133,169,153,157,131,44,10,63,161,196,231,175,
    15,62,87,221,0,248,160,196,23,135,198,55,208,185,56,150,
    109,119,33,28,53,69,227,57,190,168,241,229,235,132,49,216,
    90,185,17,48,138,26,95,187,30,158,198,52,179,110,70,9,
    49,70,90,124,131,168,47,226,11,132,79,13,66,248,185,65,
    67,197,64,132,189,141,248,80,38,8,69,139,111,81,255,72,
    216,181,22,221,238,172,69,69,195,12,199,110,135,63,53,205,
    111,119,52,174,138,245,218,225,93,137,133,69,193,179,166,239,
    53,149,31,182,162,64,38,54,40,140,83,16,119,116,185,72,
    91,213,85,168,204,238,246,9,167,168,189,95,99,171,32,244,
    189,150,105,198,38,227,47,152,166,172,34,141,71,33,30,131,
    120,28,226,9,136,167,32,158,134,120,31,196,251,33,158,133,
    120,14,98,9,2,209,96,227,28,196,139,16,136,229,25,231,
    187,172,57,162,165,240,125,92,193,42,106,130,229,138,218,97,
    189,164,23,181,146,86,210,75,185,113,254,41,93,237,71,143,
    207,77,160,156,232,8,65,127,188,209,214,222,66,188,49,58,
    120,18,71,29,139,73,152,113,44,9,51,202,73,19,36,74,
    18,108,140,34,144,165,36,2,25,69,26,199,147,72,227,68,
    18,105,220,151,68,26,39,147,72,227,84,18,105,156,78,34,
    141,51,73,164,113,54,137,52,206,37,145,198,253,73,164,113,
    62,137,52,46,36,145,198,3,73,164,241,32,217,7,146,216,
    227,193,56,246,104,31,146,196,17,178,15,75,226,38,178,143,
    72,226,40,217,55,73,226,24,217,71,37,81,33,251,152,36,
    142,147,93,145,196,205,100,31,151,196,45,100,223,44,137,91,
    201,190,69,18,39,200,190,85,18,183,145,186,157,54,170,180,
    124,7,217,39,228,201,157,8,120,98,155,108,168,128,231,168,
    103,1,18,80,250,62,237,102,156,211,120,32,75,8,198,131,
    20,111,227,92,45,198,121,141,107,139,253,61,189,75,188,30,
    252,82,118,158,55,209,224,135,244,127,198,138,114,187,229,118,
    122,162,151,53,202,104,216,16,199,250,198,0,165,175,161,57,
    14,244,54,135,137,13,153,87,149,239,101,181,142,141,206,9,
    180,149,248,209,112,248,250,232,102,154,43,158,87,207,118,145,
    30,105,240,227,225,144,205,245,35,171,43,55,43,96,209,252,
    65,20,248,73,10,87,122,135,87,112,205,82,247,164,50,218,
    173,237,71,119,176,31,221,154,10,131,186,83,195,42,175,179,
    237,161,73,255,133,220,24,37,220,113,138,15,179,196,26,253,
    180,167,45,175,125,34,61,0,112,208,1,156,221,92,58,66,
    218,81,229,103,215,169,117,121,234,217,215,186,198,38,68,61,
    19,196,29,125,126,62,116,219,14,112,178,92,60,15,59,141,
    76,155,118,111,2,52,210,228,23,215,3,39,119,145,27,4,
    103,91,147,95,94,15,156,193,13,131,179,173,201,175,104,168,
    241,101,170,23,100,211,107,102,51,182,160,113,184,242,95,167,
    240,188,189,112,204,108,47,36,171,217,84,174,157,113,208,48,
    82,226,55,195,181,214,76,47,52,213,104,134,25,237,26,201,
    86,24,170,255,237,112,152,166,123,49,5,206,171,217,108,172,
    71,103,168,185,246,55,135,230,96,63,168,139,86,51,197,192,
    17,175,246,34,100,172,194,239,118,153,127,43,138,85,203,142,
    127,82,253,239,119,217,3,194,87,100,230,1,185,242,63,12,
    135,167,207,253,249,25,54,18,60,95,84,255,31,119,217,75,
    248,153,53,19,250,18,106,255,211,46,247,165,90,93,89,25,
    197,71,162,235,76,92,253,159,135,195,116,168,23,211,26,14,
    170,214,235,94,45,187,216,15,180,238,82,227,175,195,97,236,
    139,53,240,164,197,92,177,106,155,25,110,154,199,26,252,173,
    7,217,181,207,121,251,39,24,190,21,168,12,103,187,50,203,
    128,14,127,239,193,150,92,200,16,108,239,237,96,99,96,209,
    5,198,57,9,228,37,23,99,112,125,242,156,123,136,242,220,
    125,113,133,225,81,92,97,216,150,131,230,166,30,221,98,232,
    4,252,10,148,30,28,92,117,209,76,219,36,10,223,226,0,
    144,129,19,157,169,133,44,140,35,159,142,50,60,136,109,161,
    127,16,37,231,192,39,181,156,54,167,77,12,179,151,217,205,
    238,173,96,61,162,119,118,243,103,185,60,146,232,241,207,93,
    118,187,171,190,231,102,116,72,9,60,147,234,255,53,28,166,
    190,193,49,59,119,132,193,17,181,255,59,133,232,109,7,144,
    250,87,114,65,224,172,185,169,30,119,38,11,58,202,114,78,
    52,249,15,13,235,112,251,103,107,74,214,63,217,121,92,153,
    178,137,18,154,182,235,232,28,55,80,126,152,49,186,72,137,
    124,10,221,219,243,149,125,177,121,54,155,242,47,100,125,190,
    44,214,98,76,219,221,105,78,205,106,90,53,39,171,104,3,
    166,57,137,6,229,1,200,186,78,123,220,88,55,15,38,180,
    120,151,181,250,14,74,31,244,48,62,4,33,71,59,58,167,
    58,176,205,40,59,126,134,130,192,69,20,3,55,45,12,220,
    95,48,112,234,223,120,5,2,5,26,56,70,110,92,132,104,
    81,50,37,185,12,241,49,136,215,32,118,32,62,1,129,19,
    149,198,167,33,62,11,129,227,121,198,23,32,190,4,33,135,
    75,190,2,129,243,80,198,215,33,190,9,129,163,53,6,78,
    171,24,223,129,248,110,87,223,142,143,158,116,205,142,76,228,
    120,185,203,206,35,50,182,197,21,124,15,53,225,202,101,81,
    59,172,21,117,28,4,185,166,159,177,222,131,34,37,77,134,
    155,158,63,171,17,193,66,83,70,183,255,90,129,129,39,198,
    100,219,60,209,97,214,248,252,14,90,90,102,49,103,173,70,
    116,105,95,110,162,27,183,64,224,248,131,113,123,155,6,216,
    53,145,43,151,209,85,87,158,125,202,213,32,185,9,100,220,
    11,129,67,47,33,222,246,28,201,194,97,31,159,215,218,1,
    63,16,99,244,239,192,164,179,140,186,125,162,91,98,209,93,
    221,51,136,98,7,56,117,128,43,254,165,201,18,183,21,254,
    216,68,78,43,243,220,53,159,27,159,42,229,199,247,150,242,
    165,177,156,220,195,158,208,102,245,114,190,180,119,254,93,37,
    173,172,207,111,150,180,255,1,125,21,219,199,
};

EmbeddedPython embedded_m5_internal_Float_vector(
    "m5/internal/Float_vector.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/Float_vector.py",
    "m5.internal.Float_vector",
    data_m5_internal_Float_vector,
    3436,
    17998);

} // anonymous namespace