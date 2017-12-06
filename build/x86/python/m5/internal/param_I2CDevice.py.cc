#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I2CDevice[] = {
    120,156,197,88,239,114,219,198,17,223,3,64,74,164,40,139,
    178,44,201,182,212,136,77,199,13,235,169,196,68,137,226,116,
    162,104,154,166,233,76,242,65,73,193,116,108,51,153,162,16,
    112,36,65,129,0,7,56,89,102,70,234,135,202,211,246,5,
    250,8,253,208,183,233,27,181,187,123,0,72,81,118,39,51,
    233,80,50,113,62,28,238,246,246,207,111,255,220,121,144,253,
    149,240,249,117,3,32,237,10,0,31,127,2,66,128,161,128,
    142,0,33,5,248,247,224,180,4,201,7,224,151,224,21,64,
    199,0,105,192,21,118,76,248,214,128,168,198,107,202,16,154,
    60,34,96,92,5,105,65,167,4,79,163,85,176,100,25,78,
    171,144,252,9,132,16,145,128,103,254,2,248,139,240,10,169,
    99,167,194,4,23,129,6,171,60,88,1,127,137,7,171,224,
    215,184,179,4,227,58,200,26,116,150,105,90,231,14,146,125,
    140,100,87,152,236,191,137,172,143,95,214,193,191,67,211,145,
    175,231,52,211,162,153,188,223,10,83,169,231,92,174,66,231,
    110,222,95,155,234,223,227,62,238,116,23,6,235,48,216,128,
    193,38,160,66,252,213,130,234,125,144,38,12,30,64,231,1,
    72,252,221,135,43,212,143,127,119,106,197,67,94,177,86,172,
    216,226,21,219,208,217,6,137,191,45,189,162,12,237,230,6,
    234,60,248,15,254,53,81,231,160,106,216,188,144,73,26,196,
    145,19,68,221,56,48,232,123,153,26,178,144,71,205,66,102,
    170,207,200,84,255,2,182,147,111,100,166,186,4,36,44,72,
    150,208,128,75,238,92,26,48,110,194,133,128,129,5,190,9,
    23,184,77,137,24,232,9,184,50,224,59,147,38,92,98,107,
    161,66,223,2,75,105,59,13,88,161,154,210,2,92,150,224,
    162,4,237,103,23,6,13,156,86,32,249,39,124,191,205,68,
    23,153,168,1,23,216,90,112,101,193,101,25,158,226,36,28,
    26,84,72,124,241,236,2,37,197,145,118,211,66,110,143,167,
    196,37,81,252,32,137,220,161,84,117,236,59,35,55,113,135,
    206,23,251,159,253,86,190,8,60,217,172,230,179,226,116,111,
    228,170,190,205,203,76,210,199,112,164,152,92,28,73,181,132,
    157,110,16,249,206,48,246,207,66,169,22,137,150,211,13,66,
    233,56,252,241,139,225,40,78,212,231,73,18,39,54,169,148,
    7,195,216,45,86,144,66,189,48,78,101,147,118,227,109,108,
    34,175,104,118,119,196,20,137,1,102,149,22,251,50,245,146,
    96,164,208,82,154,34,205,38,106,77,178,17,55,169,131,77,
    107,24,169,86,191,215,77,91,237,190,155,200,118,95,70,173,
    158,28,30,236,198,73,208,11,162,221,84,185,39,161,220,221,
    127,247,189,131,221,95,237,190,223,58,57,11,66,191,245,242,
    163,15,91,163,177,234,199,81,107,120,208,10,34,37,81,73,
    97,107,70,61,123,56,229,46,109,116,30,244,156,128,69,116,
    250,50,28,201,100,153,70,31,18,19,162,46,106,162,44,76,
    209,20,203,216,43,225,99,138,109,99,73,28,7,36,164,71,
    130,19,190,172,105,68,145,153,5,156,26,144,108,19,94,6,
    248,19,100,96,68,77,155,190,25,252,237,247,164,29,61,58,
    48,9,5,122,240,130,49,134,96,195,153,135,100,246,8,24,
    40,37,24,148,65,3,8,113,167,17,149,140,169,197,233,68,
    198,64,226,22,164,255,0,212,54,66,231,2,50,88,93,153,
    32,162,58,168,42,121,51,142,110,224,134,127,97,100,182,155,
    196,254,49,35,68,245,131,52,62,143,216,14,212,103,95,106,
    163,102,190,30,127,117,50,144,158,74,119,112,224,121,124,214,
    240,220,40,138,85,195,245,253,134,171,84,18,156,156,41,153,
    54,84,220,120,148,54,201,180,246,106,14,178,130,222,120,148,
    131,138,0,128,160,210,47,126,224,41,124,89,227,23,182,66,
    42,21,2,164,31,251,41,142,19,137,158,84,54,49,169,72,
    201,49,51,194,248,113,104,42,109,143,243,238,224,251,167,57,
    39,12,210,102,57,135,84,42,195,174,170,50,58,221,52,117,
    152,19,26,103,32,18,225,23,110,120,38,153,58,66,73,33,
    67,212,213,60,204,25,138,247,73,172,92,11,44,90,20,71,
    254,24,57,13,188,119,136,137,251,12,200,26,67,114,29,225,
    184,128,109,25,255,47,139,13,195,179,50,16,150,115,32,82,
    104,84,192,48,16,25,18,16,148,87,24,134,154,6,199,17,
    150,142,61,245,109,234,209,98,123,155,154,159,80,243,22,53,
    59,185,2,230,167,133,229,89,45,60,161,157,13,22,157,133,
    36,163,153,185,144,254,53,111,123,48,241,54,12,156,109,242,
    26,131,124,107,226,53,22,5,217,228,136,90,156,202,254,104,
    66,250,13,133,116,242,46,38,70,142,132,46,65,189,137,163,
    176,202,108,10,178,205,197,28,227,54,1,119,26,189,189,41,
    244,218,100,45,134,174,253,32,143,152,14,205,208,160,181,183,
    136,84,233,53,58,111,80,243,211,249,43,126,2,191,222,13,
    248,125,76,76,212,51,248,45,51,236,170,248,212,13,207,204,
    172,81,100,212,181,25,216,17,230,172,215,96,238,231,212,51,
    111,202,127,107,112,203,164,254,221,20,220,136,81,99,90,184,
    99,236,140,55,73,166,105,160,109,98,161,240,52,218,196,220,
    111,112,238,127,151,115,63,215,15,92,57,233,128,110,114,76,
    215,157,18,41,167,107,194,70,150,211,211,10,182,163,36,126,
    57,110,196,221,134,98,233,41,254,30,62,74,247,30,165,31,
    99,100,109,28,113,76,211,177,85,71,207,68,142,40,250,209,
    210,207,95,122,146,115,41,191,57,142,14,118,14,7,62,39,
    203,209,136,185,117,82,173,145,235,156,195,126,170,18,138,246,
    115,214,122,181,208,58,9,241,37,109,91,101,149,155,98,19,
    241,85,21,204,155,163,227,61,87,109,252,21,159,223,144,25,
    72,126,9,84,87,219,109,205,57,11,69,226,217,191,188,134,
    161,185,137,100,183,112,143,63,228,216,41,79,176,67,143,153,
    59,198,223,128,43,91,1,127,5,66,7,130,32,115,140,194,
    143,8,14,107,52,253,143,192,30,244,154,58,130,227,82,155,
    106,7,158,129,225,42,125,194,83,117,89,241,37,252,125,202,
    253,242,228,111,102,181,235,116,242,183,138,152,198,176,250,65,
    9,222,186,30,252,200,76,125,55,165,105,58,162,77,60,122,
    146,64,138,162,19,35,250,252,48,182,168,55,116,136,183,239,
    38,8,163,244,185,37,214,140,41,220,188,71,205,126,1,25,
    145,143,205,133,205,29,120,115,214,119,116,54,249,150,120,177,
    152,251,149,5,246,240,130,66,225,27,165,220,55,246,11,223,
    144,156,245,94,241,1,135,90,131,32,112,101,8,60,93,98,
    33,72,135,57,11,100,9,58,101,242,34,46,224,69,230,100,
    34,143,119,20,29,175,165,84,86,206,177,86,91,129,2,109,
    96,106,94,206,57,142,144,141,15,67,119,120,226,187,71,3,
    218,148,118,246,114,183,51,114,49,234,211,98,144,203,136,55,
    73,194,175,7,185,56,47,230,28,67,62,4,102,82,139,193,
    30,227,199,30,7,142,111,250,178,49,148,195,19,60,219,246,
    131,81,163,27,186,61,182,150,153,137,249,85,46,166,98,115,
    207,22,46,233,99,106,227,134,23,71,24,240,207,60,21,39,
    13,95,226,145,79,250,141,221,6,103,139,70,144,54,220,19,
    252,234,122,74,187,192,117,127,230,170,217,77,122,41,23,200,
    167,231,212,189,5,107,59,120,174,15,240,208,16,66,145,166,
    245,145,179,8,254,124,28,208,30,133,25,21,15,115,106,172,
    99,28,21,49,246,30,53,191,128,219,201,17,31,128,190,136,
    72,73,133,101,177,101,84,12,181,50,237,206,95,211,154,244,
    166,83,63,255,33,78,173,47,139,112,130,44,195,96,129,219,
    69,202,14,116,23,100,101,119,65,52,184,4,157,90,126,7,
    181,76,190,95,254,177,190,207,30,115,11,190,146,254,95,93,
    222,126,114,203,82,216,31,65,86,39,188,201,221,175,21,163,
    159,106,119,215,214,193,106,98,124,143,37,214,39,30,150,88,
    60,141,30,98,85,106,113,85,122,72,85,233,5,87,174,142,
    161,11,211,137,81,249,32,194,247,48,180,125,36,207,157,25,
    76,234,194,147,144,226,142,70,50,242,237,199,48,93,75,242,
    231,57,235,142,252,249,28,166,18,187,41,238,97,241,120,19,
    201,20,185,166,100,101,196,150,10,236,110,223,142,213,255,156,
    91,189,121,231,90,248,178,15,169,169,95,139,85,218,50,219,
    55,35,133,19,236,123,14,214,105,9,157,94,254,247,4,172,
    46,56,128,230,3,172,62,69,151,4,190,12,165,146,179,6,
    215,23,138,58,142,250,18,243,66,60,198,3,5,151,229,248,
    30,58,206,109,4,208,79,112,143,4,178,195,17,6,80,60,
    131,174,27,149,114,69,112,158,154,185,237,213,188,209,193,82,
    23,159,227,212,102,47,91,41,52,202,183,146,121,142,32,189,
    115,113,117,236,14,245,45,18,223,139,216,63,131,236,180,106,
    191,83,24,133,78,244,92,241,235,243,22,250,11,231,80,78,
    153,246,251,52,78,189,225,193,94,46,204,158,22,166,29,12,
    245,101,26,223,139,14,15,212,234,204,52,63,113,177,191,62,
    51,154,202,36,112,195,224,123,125,137,150,15,115,234,152,165,
    75,252,20,111,156,112,216,198,133,22,217,160,137,236,5,41,
    18,97,10,197,236,204,209,63,121,19,214,166,87,222,130,241,
    117,177,167,207,178,71,116,155,146,30,97,67,119,97,149,149,
    138,40,27,228,255,38,30,29,151,133,101,214,234,21,171,182,
    84,177,42,11,38,95,85,44,99,193,95,181,42,75,53,65,
    255,118,16,48,85,99,103,185,34,254,11,165,245,160,179,
};

EmbeddedPython embedded_m5_internal_param_I2CDevice(
    "m5/internal/param_I2CDevice.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_I2CDevice.py",
    "m5.internal.param_I2CDevice",
    data_m5_internal_param_I2CDevice,
    2175,
    6588);

} // anonymous namespace