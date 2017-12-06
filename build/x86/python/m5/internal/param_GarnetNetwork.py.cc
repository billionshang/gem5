#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetwork[] = {
    120,156,205,89,235,111,27,199,17,159,189,35,41,145,146,44,
    201,178,36,63,20,139,78,234,152,113,35,209,47,197,41,226,
    186,117,92,187,72,208,40,233,49,133,29,37,232,245,196,91,
    82,71,29,239,136,187,149,101,6,210,135,70,70,90,180,64,
    191,20,253,210,239,253,208,255,166,255,81,59,51,247,224,138,
    34,1,247,1,179,54,185,30,238,206,238,206,227,55,179,179,
    235,38,164,127,138,248,253,105,21,32,254,222,0,112,241,35,
    192,7,232,10,216,17,32,164,0,247,2,236,23,33,186,7,
    110,17,94,1,236,24,32,13,56,65,194,132,175,13,8,102,
    121,78,9,124,147,123,4,244,43,32,11,176,83,132,103,193,
    34,20,100,9,246,43,16,253,6,132,16,129,128,231,238,20,
    184,211,240,10,87,71,162,204,11,78,3,117,86,184,179,12,
    238,12,119,86,192,157,101,98,6,250,11,32,103,97,103,142,
    216,118,206,225,178,55,113,217,121,94,246,31,180,172,139,35,
    203,224,158,35,118,148,235,43,226,44,16,39,239,55,207,171,
    44,100,82,46,194,206,249,140,94,210,232,11,26,189,172,209,
    43,26,189,170,209,23,53,250,146,70,95,214,232,43,26,189,
    166,209,111,105,244,85,141,94,215,232,170,70,95,211,232,183,
    53,250,29,141,254,129,70,95,215,232,119,53,250,134,70,215,
    52,250,61,141,190,169,209,63,212,232,247,153,70,79,156,135,
    206,6,116,54,161,83,135,22,130,99,49,183,250,45,144,38,
    116,110,195,206,109,144,248,185,5,39,136,31,247,188,54,227,
    14,207,88,202,103,220,229,25,247,96,231,30,72,252,220,77,
    102,148,160,81,91,65,76,122,255,196,63,53,129,148,154,197,
    230,133,140,98,47,12,108,47,104,133,158,65,227,37,106,8,
    193,77,106,166,82,40,63,38,40,255,29,24,199,174,145,66,
    249,24,112,97,65,186,248,6,28,51,113,108,64,191,6,71,
    2,58,5,112,77,56,194,109,138,36,64,91,192,137,1,223,
    152,196,112,140,109,1,1,119,21,10,42,193,113,135,1,151,
    172,52,5,199,69,56,42,66,227,249,145,65,29,251,101,136,
    254,6,223,174,241,162,211,188,168,1,71,216,22,224,164,0,
    199,37,120,134,76,216,213,41,147,250,226,249,17,106,138,61,
    141,90,1,165,221,214,212,37,85,92,47,10,156,174,84,23,
    144,182,123,78,228,116,237,159,59,81,32,213,182,84,135,97,
    180,95,171,100,156,97,188,217,115,212,158,197,83,77,178,73,
    183,167,120,201,16,217,103,144,104,121,129,107,119,67,247,192,
    151,106,154,214,179,91,158,47,109,155,7,63,233,246,194,72,
    61,137,162,48,178,200,172,220,233,135,78,62,131,140,218,244,
    195,88,214,104,55,222,198,162,229,21,113,183,122,188,34,9,
    192,226,210,100,87,198,205,200,235,41,244,86,178,34,113,211,
    106,53,242,19,55,49,185,172,222,13,84,125,175,221,138,235,
    141,61,39,146,141,61,25,212,219,178,187,181,17,70,94,219,
    11,54,98,229,236,250,114,227,206,173,219,91,27,63,218,184,
    91,223,61,240,124,183,254,242,195,15,234,189,190,218,11,131,
    122,119,171,238,5,74,162,161,252,250,8,19,109,34,219,121,
    218,236,208,107,219,30,171,105,239,73,191,39,163,57,234,189,
    76,130,136,5,49,43,74,194,20,53,49,135,84,17,191,166,
    88,51,102,196,182,71,138,54,73,121,194,89,65,71,22,185,
    91,192,190,1,209,26,225,166,131,31,65,142,70,244,52,104,
    204,224,177,95,146,133,146,222,142,73,104,72,58,143,24,107,
    8,58,228,124,64,238,15,128,1,83,132,78,9,18,32,33,
    254,18,100,69,125,106,145,157,150,49,112,241,2,196,127,1,
    180,56,66,232,8,82,120,157,152,32,130,5,80,21,202,122,
    216,187,130,27,126,199,8,109,212,72,252,109,70,137,218,243,
    226,240,48,96,95,16,205,49,213,64,203,124,209,255,124,183,
    35,155,42,94,199,142,175,194,131,106,211,9,130,80,85,29,
    215,173,58,74,69,222,238,129,146,113,85,133,213,235,113,141,
    220,107,45,102,64,203,215,235,247,50,96,17,8,16,88,201,
    15,215,107,42,252,177,196,63,216,11,177,84,8,146,189,208,
    141,177,159,150,104,75,101,145,144,138,140,28,178,32,140,33,
    155,88,105,123,228,59,135,191,31,101,146,48,80,107,165,12,
    86,177,244,91,170,194,8,117,226,216,102,73,168,159,193,72,
    11,191,112,252,3,201,171,35,156,20,10,68,100,34,195,4,
    224,120,145,84,203,44,193,234,5,97,224,246,81,90,175,121,
    131,4,185,200,160,156,101,88,46,35,36,167,176,45,225,191,
    37,177,98,52,11,41,16,75,25,24,41,77,42,96,40,136,
    20,13,8,204,19,76,73,53,131,115,10,107,200,17,251,54,
    81,52,217,90,163,230,45,106,174,82,179,158,25,225,205,90,
    98,110,216,18,247,105,119,131,213,103,69,201,121,102,166,168,
    123,42,234,46,13,162,14,19,105,131,162,199,160,24,27,68,
    79,129,146,110,244,144,90,100,229,184,52,33,254,146,82,60,
    69,25,47,70,1,133,161,65,212,32,96,216,108,214,2,153,
    99,58,195,186,69,0,214,81,220,214,80,108,145,199,24,194,
    214,165,44,123,218,196,145,128,215,186,66,75,21,71,216,189,
    74,205,181,201,24,127,0,195,246,25,24,126,68,130,44,164,
    48,156,99,248,85,240,187,96,52,205,212,35,249,41,187,52,
    4,63,194,94,97,4,246,222,37,202,60,107,131,137,194,46,
    213,252,169,6,59,18,214,208,21,220,70,162,191,74,122,233,
    128,91,197,2,226,89,176,138,53,129,193,53,193,45,174,9,
    184,174,224,138,51,73,240,38,231,248,132,40,146,129,90,38,
    172,164,103,125,92,198,182,23,133,47,251,213,176,85,85,108,
    1,202,199,15,174,199,155,215,227,143,48,211,86,31,114,142,
    75,114,109,146,77,35,217,163,108,72,83,159,188,108,74,62,
    95,249,151,109,39,201,207,230,68,104,167,231,54,98,111,153,
    204,107,100,118,231,99,32,86,17,101,255,9,88,190,146,91,
    158,20,249,148,182,174,176,217,77,177,138,56,171,8,150,207,
    78,206,0,174,232,120,20,191,31,147,43,200,6,18,232,78,
    98,53,18,233,89,49,82,209,122,255,20,150,222,168,90,86,
    29,247,249,85,134,161,210,0,67,244,53,179,32,249,29,112,
    229,43,224,123,32,148,32,24,210,32,201,99,138,96,177,68,
    236,191,6,142,166,17,245,5,231,169,6,213,20,204,129,233,
    43,190,207,172,73,185,241,41,252,94,11,197,172,40,48,211,
    218,86,47,10,10,121,142,99,120,189,214,193,95,56,157,12,
    201,85,123,78,76,108,73,134,27,68,247,224,80,201,11,82,
    204,240,111,22,107,211,201,166,54,201,247,205,0,105,116,172,
    94,17,75,134,134,159,219,212,220,201,161,35,178,190,55,38,
    234,58,140,175,8,236,228,148,249,154,228,41,176,6,243,83,
    156,193,78,173,146,199,74,49,139,149,59,121,172,72,62,17,
    95,241,101,136,90,131,224,112,98,8,188,169,99,177,72,23,
    227,2,200,34,236,148,40,170,184,208,23,105,208,137,44,7,
    210,126,167,142,91,54,210,118,98,190,28,17,137,179,169,121,
    57,129,220,66,254,126,224,59,221,93,215,121,248,29,109,76,
    187,55,179,48,52,50,85,22,116,85,40,132,196,56,109,248,
    231,86,166,210,139,9,228,149,15,112,159,92,21,142,34,55,
    108,114,50,249,114,79,86,187,178,187,139,247,225,61,175,87,
    109,249,78,155,189,102,166,170,126,158,169,170,216,237,195,197,
    77,124,147,218,176,218,12,3,60,12,14,154,42,140,170,174,
    196,43,162,116,171,27,85,62,73,170,94,92,117,118,113,212,
    105,170,36,36,78,199,56,87,216,78,212,142,185,152,222,63,
    36,114,66,94,183,109,47,240,240,146,241,10,242,99,60,185,
    166,230,7,3,95,31,146,8,195,19,23,47,127,170,159,228,
    62,42,116,172,77,106,222,131,201,157,31,247,112,159,223,210,
    134,100,202,146,184,98,148,13,46,53,79,49,126,65,115,227,
    179,129,126,248,58,129,158,60,198,165,225,94,34,78,57,69,
    239,19,212,150,233,24,217,169,100,157,51,220,206,114,231,92,
    246,222,119,142,59,231,249,13,173,196,61,139,148,45,166,254,
    219,108,193,241,53,161,200,250,227,255,52,73,88,247,255,15,
    52,177,62,132,180,218,24,151,32,132,174,230,92,146,32,58,
    34,187,32,233,58,242,171,205,229,209,40,180,155,145,116,148,
    76,92,184,54,17,197,57,237,36,98,252,105,16,247,103,203,
    247,71,185,142,39,92,119,245,47,176,103,147,187,34,123,86,
    60,11,46,99,29,95,224,58,254,1,213,241,71,108,16,219,
    72,74,249,1,128,139,185,93,86,177,9,228,161,61,194,54,
    73,185,78,210,57,189,158,12,92,235,38,232,21,56,15,79,
    0,39,148,233,254,12,90,25,100,138,11,88,114,159,141,94,
    202,235,154,206,236,226,98,30,175,147,113,54,163,252,175,25,
    202,107,244,160,55,72,238,214,3,106,56,157,231,153,220,250,
    73,238,170,119,198,64,120,247,160,213,146,145,29,123,223,74,
    186,7,190,22,31,150,103,124,185,215,250,212,198,152,121,193,
    1,69,159,29,182,236,158,215,195,169,202,105,203,152,119,250,
    247,102,208,158,164,235,200,81,118,43,71,169,43,125,169,228,
    40,64,42,50,77,250,106,225,74,60,209,195,62,94,19,249,
    162,133,191,125,219,158,212,177,247,99,220,231,15,144,166,91,
    60,246,68,9,15,190,101,177,108,148,75,101,193,149,198,208,
    27,127,34,35,151,100,124,165,232,199,22,103,189,249,220,217,
    252,14,157,157,240,132,11,190,28,111,59,221,228,205,144,95,
    192,44,242,52,191,71,88,55,114,208,208,187,13,223,227,146,
    219,52,198,54,87,65,92,244,88,119,51,28,117,183,54,51,
    165,54,19,165,62,118,98,121,74,49,126,17,239,110,169,181,
    145,236,79,157,3,95,125,22,162,217,249,253,69,103,120,234,
    135,142,178,95,72,42,198,212,202,208,224,39,65,62,116,101,
    228,194,13,175,155,60,225,170,197,161,113,55,114,144,94,30,
    234,141,101,228,57,62,225,247,173,145,235,89,7,187,253,76,
    163,245,33,14,212,217,107,62,121,169,126,225,5,251,153,84,
    87,199,89,39,231,84,213,177,27,61,14,3,68,165,239,163,
    215,70,155,141,152,26,253,88,201,238,152,141,80,253,158,47,
    63,147,221,48,234,143,217,232,81,90,204,166,76,163,205,136,
    131,169,25,135,149,78,198,31,251,97,115,95,186,41,207,104,
    211,49,207,207,194,46,153,125,216,201,169,180,137,42,195,34,
    72,12,113,59,17,143,32,114,198,22,143,92,55,178,156,160,
    45,51,163,95,27,102,56,165,98,198,53,90,74,118,141,21,
    226,245,126,28,164,152,131,61,55,18,0,8,201,215,4,64,
    202,121,198,47,167,140,57,110,29,77,206,140,133,130,60,27,
    231,147,120,92,40,82,40,156,233,229,106,251,108,97,195,249,
    49,146,109,47,38,139,172,142,154,153,158,239,148,182,88,151,
    81,57,92,95,101,66,121,53,185,9,39,15,128,15,233,180,
    138,3,108,232,63,19,202,243,101,204,177,116,244,155,162,130,
    135,127,193,156,93,40,23,102,103,202,133,242,148,201,111,188,
    115,98,201,168,20,202,51,179,226,63,249,187,142,121,187,98,
    172,47,150,197,191,0,241,243,165,163,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetwork(
    "m5/internal/param_GarnetNetwork.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_GarnetNetwork.py",
    "m5.internal.param_GarnetNetwork",
    data_m5_internal_param_GarnetNetwork,
    2554,
    8281);

} // anonymous namespace