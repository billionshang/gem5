#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_PciConfigAll[] = {
    120,156,197,88,95,111,27,199,17,159,189,59,82,34,37,89,
    255,253,87,182,232,36,138,89,163,18,19,39,142,83,196,117,
    235,56,41,144,0,81,220,99,90,59,76,208,235,137,183,164,
    142,58,222,17,119,43,217,12,164,22,136,140,54,15,5,250,
    212,143,208,135,126,155,126,154,190,182,51,179,119,199,147,72,
    185,1,90,72,22,185,30,238,206,206,238,204,252,102,118,118,
    219,144,254,43,225,247,151,53,128,228,95,2,192,195,143,128,
    0,160,47,160,37,64,72,1,222,10,236,149,32,126,31,188,
    18,188,2,104,25,32,13,56,70,194,132,111,12,8,103,121,
    78,25,2,147,123,4,12,171,32,45,104,149,224,89,184,8,
    150,44,195,94,21,226,223,131,16,34,20,240,220,155,2,111,
    26,94,161,116,36,42,44,112,26,168,179,202,157,21,240,102,
    184,179,10,222,44,19,51,48,92,0,57,11,173,57,98,107,
    93,66,177,119,81,236,60,139,253,39,137,245,112,100,21,188,
    75,196,142,251,250,154,56,45,226,228,245,230,89,202,66,182,
    203,69,104,45,101,244,114,129,94,41,208,171,5,250,114,129,
    190,82,160,175,22,232,107,5,250,122,129,190,81,160,215,10,
    244,205,2,125,171,64,175,23,232,26,211,168,249,18,244,110,
    67,239,13,232,189,9,29,116,198,98,174,229,91,32,77,232,
    109,64,107,3,36,126,222,130,99,244,151,183,84,152,241,54,
    207,88,206,103,220,225,25,117,104,213,65,226,231,142,158,81,
    134,102,253,50,98,192,255,55,254,171,35,6,64,205,98,115,
    32,227,196,143,66,199,15,59,145,111,208,120,153,26,66,76,
    155,154,169,20,58,79,8,58,255,0,198,141,103,164,208,57,
    2,20,44,72,151,192,128,35,38,142,12,24,214,225,80,64,
    207,2,207,132,67,92,166,68,27,232,10,56,54,224,91,147,
    24,142,176,181,208,193,183,192,82,26,55,61,118,176,150,52,
    5,71,37,56,44,65,243,249,161,65,29,123,21,136,255,14,
    223,173,177,208,105,22,106,192,33,182,22,28,91,112,84,134,
    103,200,132,93,189,10,169,47,158,31,162,166,216,211,172,91,
    184,219,237,130,186,164,138,231,199,161,219,151,106,25,105,103,
    224,198,110,223,121,218,246,159,68,97,199,239,62,14,130,122,
    53,99,140,146,173,129,171,118,109,158,105,146,73,250,3,197,
    18,163,80,170,25,36,58,126,232,57,253,200,219,15,164,154,
    38,113,78,199,15,164,227,240,224,103,253,65,20,171,79,227,
    56,138,109,178,42,119,6,145,155,207,32,155,182,131,40,145,
    117,90,141,151,177,73,188,34,238,206,128,37,210,6,120,183,
    52,217,147,73,59,246,7,10,157,165,37,18,55,73,171,147,
    155,184,73,118,176,105,244,67,213,216,237,118,146,70,115,215,
    141,101,115,87,134,141,174,236,223,223,140,98,191,235,135,155,
    137,114,119,2,185,121,239,157,119,239,111,254,108,243,189,198,
    206,190,31,120,141,151,31,126,208,24,12,213,110,20,54,250,
    247,27,126,168,36,218,41,104,140,91,104,11,185,150,104,173,
    23,126,215,241,89,75,103,87,6,3,25,207,81,239,117,218,
    135,88,16,179,162,44,76,81,23,115,72,149,240,107,138,53,
    99,70,108,251,164,103,155,116,39,148,89,69,92,145,179,5,
    236,25,16,175,17,106,122,248,17,228,102,196,78,147,198,12,
    30,251,53,25,72,247,246,76,194,130,238,60,100,164,33,228,
    144,243,33,57,63,4,134,75,9,122,101,208,48,66,244,105,
    92,197,67,106,145,157,196,24,40,220,130,228,111,128,6,71,
    0,29,66,10,174,99,19,68,184,0,170,74,57,6,123,47,
    227,130,223,51,62,155,117,218,254,54,131,68,237,250,73,244,
    34,100,87,16,205,17,213,68,203,60,29,126,185,211,147,109,
    149,172,99,199,215,209,126,173,237,134,97,164,106,174,231,213,
    92,165,98,127,103,95,201,164,166,162,218,70,82,39,239,218,
    139,25,206,114,121,195,65,134,43,194,0,226,74,255,240,252,
    182,194,31,12,96,135,189,144,72,133,24,217,141,188,4,251,
    73,68,87,42,155,54,169,200,200,17,111,132,33,228,16,43,
    45,143,124,151,240,247,227,108,39,140,211,122,57,67,85,34,
    131,142,170,50,64,221,36,113,120,39,212,207,88,36,193,7,
    110,176,47,89,58,162,73,225,134,136,212,123,56,127,52,94,
    37,205,50,67,176,118,97,20,122,67,220,172,223,190,67,251,
    184,202,152,156,101,84,174,34,34,167,176,45,227,255,101,113,
    217,104,91,41,14,203,25,22,41,71,42,96,36,136,20,12,
    136,203,99,204,71,117,131,19,10,43,200,241,250,6,81,52,
    217,94,163,230,38,53,183,168,89,207,108,112,174,134,152,59,
    109,136,7,180,184,193,218,179,158,228,58,51,211,211,59,17,
    115,215,70,49,135,73,180,73,177,99,80,132,141,98,199,162,
    132,27,63,162,22,89,57,42,77,72,190,162,244,78,49,198,
    194,40,156,48,48,136,26,133,11,91,205,94,32,107,76,103,
    72,183,9,190,69,12,119,11,24,182,201,97,12,96,251,90,
    150,58,29,226,208,208,181,111,144,168,210,4,179,215,168,185,
    125,33,182,31,129,176,59,6,194,143,104,31,11,41,8,231,
    24,124,85,252,46,24,109,51,117,72,126,192,46,159,2,31,
    33,207,154,128,188,183,137,50,199,77,112,145,160,75,21,255,
    85,1,116,180,87,163,168,223,54,18,195,43,164,86,17,110,
    87,176,116,120,22,94,193,106,192,224,106,224,29,174,6,184,
    162,224,218,78,39,119,147,243,187,38,74,100,159,142,9,151,
    211,83,62,169,96,59,136,163,151,195,90,212,169,41,54,0,
    229,226,135,27,201,214,70,242,17,102,217,218,35,206,111,58,
    207,234,76,26,203,1,101,66,154,250,233,203,182,228,163,149,
    127,57,142,78,124,14,39,65,39,61,178,17,121,171,100,93,
    35,51,59,31,1,137,138,41,243,159,191,225,171,185,225,73,
    143,207,105,229,42,91,221,20,87,16,101,85,193,219,115,116,
    250,231,82,142,71,241,251,49,121,130,76,32,129,138,127,187,
    169,55,207,122,145,134,246,79,79,32,233,60,181,178,27,184,
    204,111,50,4,149,71,8,162,175,153,69,200,159,129,43,94,
    1,127,2,194,8,66,33,141,144,60,160,8,20,203,196,254,
    59,224,80,154,80,89,112,142,106,82,53,193,28,152,186,146,
    7,204,170,11,141,207,225,135,66,28,102,229,128,153,214,180,
    197,114,192,202,243,27,131,235,71,29,249,214,201,68,72,158,
    218,117,19,98,211,217,109,20,218,163,243,36,175,68,49,187,
    159,43,210,166,245,154,14,109,239,219,17,206,232,64,189,33,
    150,141,2,122,222,165,230,94,14,28,145,245,157,215,78,215,
    225,236,82,192,209,231,203,55,180,29,139,21,152,159,226,122,
    173,40,36,143,147,82,22,39,247,242,56,145,124,20,190,226,
    27,16,181,6,97,225,216,16,120,29,198,26,145,110,159,22,
    200,18,180,202,20,81,92,222,139,52,224,68,150,254,40,89,
    158,56,103,217,68,219,218,120,57,28,180,167,169,121,121,254,
    105,133,156,253,48,112,251,59,158,251,232,128,214,165,197,219,
    89,8,26,153,38,11,69,77,40,124,196,89,202,240,207,251,
    153,70,7,231,159,82,62,160,101,51,77,56,128,188,168,205,
    121,228,171,93,89,235,203,254,14,94,129,119,253,65,173,19,
    184,93,246,153,153,106,250,101,166,169,98,167,159,174,105,146,
    187,212,70,181,118,20,226,41,176,223,86,81,92,243,36,94,
    11,165,87,219,172,241,17,82,243,147,154,187,131,163,110,91,
    233,112,56,25,222,92,86,187,113,55,225,10,122,239,5,145,
    23,227,115,199,241,67,31,47,22,47,33,63,190,245,205,52,
    63,17,248,202,160,163,11,79,90,188,240,169,161,206,122,84,
    223,216,91,212,252,4,46,236,224,120,31,151,217,167,245,200,
    144,101,113,195,168,24,124,79,45,242,61,165,153,201,120,140,
    255,229,199,196,184,126,236,74,35,189,76,156,114,138,222,35,
    168,173,208,241,209,170,102,157,51,220,206,114,231,92,214,121,
    137,219,121,238,92,200,30,217,22,185,115,9,90,203,244,26,
    68,61,43,148,61,166,254,215,236,193,1,119,49,161,246,199,
    255,107,210,176,31,92,188,34,246,135,144,22,30,103,37,12,
    81,212,114,78,39,140,158,200,238,73,69,21,249,229,230,218,
    68,92,58,237,88,186,74,106,255,173,93,132,218,156,132,244,
    46,190,31,165,129,241,42,254,113,174,225,49,23,96,195,21,
    118,171,190,48,178,91,197,179,240,58,150,243,22,151,243,15,
    169,156,63,100,115,56,134,174,232,71,224,45,229,86,161,139,
    119,40,95,56,227,150,209,69,59,109,206,29,12,100,232,217,
    119,161,88,135,243,240,249,99,132,210,222,15,80,40,135,76,
    177,130,133,247,120,220,82,142,47,104,204,254,45,229,145,122,
    33,158,102,128,255,53,3,120,157,115,124,158,232,237,135,212,
    112,106,207,179,186,253,139,220,79,215,39,163,119,103,63,161,
    43,224,235,134,177,40,227,243,23,105,46,213,38,176,13,2,
    87,117,162,184,207,162,254,27,15,201,227,119,210,180,67,221,
    152,60,33,241,191,147,44,240,117,227,36,140,31,191,240,7,
    251,150,195,212,147,129,84,114,2,38,21,217,39,125,188,240,
    36,158,240,209,16,239,139,124,229,194,223,129,227,92,208,57,
    248,115,92,230,15,180,30,29,126,120,14,138,50,158,132,171,
    2,255,140,74,185,34,184,244,56,245,206,175,55,73,94,214,
    215,139,97,98,115,218,155,207,93,206,70,206,206,124,66,7,
    95,147,183,221,190,126,57,228,135,48,251,77,72,31,38,236,
    59,57,116,200,132,124,167,211,247,106,12,111,46,139,184,10,
    178,223,203,208,212,191,191,149,105,181,149,106,149,121,212,224,
    97,117,115,34,215,103,161,138,81,121,180,125,192,15,48,227,
    28,205,97,162,164,198,69,113,80,134,251,125,231,11,217,143,
    226,225,23,145,39,213,218,169,241,199,158,23,219,110,216,149,
    206,129,164,178,78,221,62,205,144,214,116,90,70,198,85,155,
    184,135,147,188,99,123,209,76,56,168,95,140,25,244,227,227,
    79,130,168,189,39,189,148,103,178,57,152,231,147,168,239,98,
    255,228,85,154,126,182,202,226,169,113,47,166,89,171,167,122,
    19,25,251,110,128,1,113,134,106,31,187,137,223,126,234,71,
    159,200,3,191,45,207,88,116,52,78,48,202,6,213,10,97,
    106,146,20,42,51,79,118,113,113,55,118,106,114,236,197,178,
    235,163,139,99,22,119,114,86,122,118,80,64,156,149,73,138,
    18,46,38,94,245,125,75,63,48,61,162,135,206,228,183,216,
    208,75,117,101,190,130,177,75,167,138,41,170,120,174,88,230,
    236,66,197,154,157,169,88,149,41,147,159,16,231,240,242,93,
    181,42,51,179,226,117,127,235,24,245,85,99,125,169,34,254,
    3,130,123,228,94,
};

EmbeddedPython embedded_m5_internal_param_PciConfigAll(
    "m5/internal/param_PciConfigAll.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_PciConfigAll.py",
    "m5.internal.param_PciConfigAll",
    data_m5_internal_param_PciConfigAll,
    2437,
    7691);

} // anonymous namespace