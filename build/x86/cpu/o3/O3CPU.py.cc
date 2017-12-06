#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_O3CPU[] = {
    120,156,181,152,91,87,27,57,18,128,101,67,204,37,36,16,
    8,201,228,222,185,59,23,226,92,38,153,36,147,153,9,24,
    72,60,67,128,180,205,230,44,47,62,237,150,140,5,237,110,
    167,213,77,96,207,236,83,246,109,31,118,30,246,23,236,47,
    217,199,121,220,127,180,91,85,106,181,101,200,100,206,158,51,
    193,208,180,62,149,74,85,186,148,74,246,89,246,51,4,127,
    47,29,198,84,12,47,28,126,11,44,96,172,91,96,155,5,
    86,192,114,145,5,69,214,200,222,134,244,219,16,11,134,89,
    119,152,109,14,231,50,71,116,205,48,11,74,172,91,98,155,
    165,188,102,4,106,142,48,49,204,218,5,198,75,236,111,140,
    125,100,236,207,155,163,140,143,176,122,121,20,186,149,255,133,
    159,114,1,222,18,44,182,82,25,240,165,112,87,19,124,220,
    214,175,35,240,88,240,148,168,174,111,104,48,6,143,181,71,
    213,142,240,119,68,156,140,67,105,81,196,114,23,208,250,134,
    111,60,28,198,86,232,225,223,225,77,48,116,12,44,219,44,
    162,171,155,67,104,24,88,137,86,65,145,236,4,247,178,98,
    137,138,195,166,56,194,196,40,219,30,99,224,14,56,242,177,
    200,54,199,13,25,97,124,148,200,81,34,19,140,3,28,39,
    114,204,34,71,137,28,183,200,4,145,73,139,28,35,50,101,
    52,31,103,124,146,200,9,67,166,24,63,65,100,218,144,105,
    198,103,136,204,88,122,78,18,57,105,145,89,34,179,22,57,
    69,228,148,69,78,19,57,109,245,254,21,145,175,44,153,51,
    68,206,88,228,44,145,179,22,57,71,228,156,165,231,60,145,
    243,150,204,5,34,23,12,185,200,248,37,34,23,45,25,135,
    200,37,75,207,101,34,142,69,174,16,185,108,145,171,68,174,
    16,185,202,196,53,92,114,252,26,193,235,150,242,235,68,110,
    88,228,6,145,155,150,170,155,68,202,22,41,19,185,101,90,
    221,98,252,54,145,219,150,158,59,68,238,152,86,119,25,159,
    35,114,215,34,247,136,204,89,147,88,33,114,207,34,247,137,
    84,12,121,192,248,67,34,247,137,60,96,226,33,227,143,136,
    60,50,50,95,51,254,152,200,215,134,60,97,252,27,34,143,
    45,242,148,200,19,67,224,247,25,145,111,12,121,206,248,183,
    68,158,90,228,5,145,103,184,5,54,159,51,241,45,227,223,
    177,51,124,131,237,148,88,28,14,137,23,108,251,41,250,118,
    18,42,67,150,181,19,208,238,37,181,251,206,90,194,243,68,
    190,55,100,129,241,42,145,31,44,139,22,137,188,36,50,207,
    248,18,227,203,68,22,12,121,197,248,107,34,85,34,139,140,
    215,24,255,145,200,146,37,243,19,145,101,75,102,133,200,43,
    75,230,13,145,215,150,204,42,145,154,145,89,99,124,157,200,
    143,68,126,98,98,133,241,183,76,188,97,219,32,9,225,206,
    165,218,53,51,51,217,216,252,192,118,32,212,212,169,110,157,
    241,6,6,147,205,183,204,173,151,255,4,129,201,197,232,164,
    38,225,225,247,210,74,244,168,194,49,128,221,235,116,124,12,
    112,230,175,138,225,11,37,33,100,213,203,69,120,89,77,74,
    24,0,101,87,134,91,101,140,114,58,32,98,52,247,3,165,
    9,62,84,21,30,149,110,152,84,58,91,109,85,169,119,188,
    88,212,59,34,172,108,137,238,227,185,40,150,91,50,156,83,
    137,215,10,196,220,195,251,15,30,207,61,155,123,84,81,177,
    95,201,204,161,80,122,175,183,159,28,5,61,93,209,141,226,
    253,102,55,226,226,22,234,70,67,88,241,211,150,38,12,44,
    69,178,170,45,67,214,136,83,65,37,183,100,236,251,99,141,
    60,14,122,98,241,62,149,177,104,250,158,223,17,106,238,255,
    180,211,29,53,99,249,165,108,60,129,202,210,94,47,138,147,
    102,226,237,136,102,180,43,226,7,125,51,37,245,118,12,30,
    181,80,38,210,11,28,63,74,195,68,254,138,24,103,161,138,
    142,57,235,208,94,73,52,84,205,210,185,231,195,172,56,73,
    228,180,69,226,119,28,46,2,111,159,106,92,17,122,221,67,
    53,55,80,191,82,169,168,44,237,9,63,77,68,229,93,44,
    19,209,242,252,157,79,41,169,70,221,174,76,14,212,200,81,
    99,210,50,193,15,146,39,29,249,18,225,217,28,182,210,118,
    91,196,142,146,127,17,142,12,157,214,126,34,148,116,80,166,
    156,203,188,79,69,42,114,145,174,244,227,104,46,234,41,167,
    39,226,185,164,19,11,143,171,83,3,158,112,237,173,182,239,
    230,231,93,25,144,61,53,224,203,64,213,108,110,206,193,154,
    137,254,248,146,139,191,215,99,172,237,252,84,143,135,170,250,
    243,54,80,53,209,119,183,223,101,95,205,111,117,174,167,5,
    215,17,53,232,15,216,103,27,168,135,198,31,20,21,90,72,
    87,57,101,25,38,34,14,97,21,66,85,2,235,174,182,244,
    206,129,101,190,37,110,41,220,109,139,82,245,188,124,242,105,
    49,104,77,186,140,129,173,223,155,102,39,113,160,211,208,79,
    100,132,122,55,96,149,59,189,40,10,126,111,88,125,237,190,
    54,249,226,128,123,177,136,98,8,156,102,177,245,199,48,27,
    50,221,49,130,250,251,212,83,102,169,226,38,35,218,136,189,
    158,19,120,137,8,253,125,53,221,95,8,22,150,71,80,248,
    46,10,75,232,212,94,214,237,8,122,6,35,63,120,49,87,
    100,102,26,74,223,67,255,212,237,223,106,0,127,40,127,64,
    252,60,6,162,180,219,2,201,168,237,4,145,199,179,205,33,
    194,36,150,66,169,11,3,2,42,137,98,49,40,33,233,64,
    185,51,32,214,11,60,95,40,28,40,213,145,237,196,241,56,
    7,139,69,27,27,251,152,60,171,26,14,77,39,74,3,14,
    131,215,19,33,71,151,157,93,25,5,218,46,144,214,146,130,
    147,245,104,153,114,110,104,3,148,3,100,59,85,73,86,148,
    191,252,103,136,145,202,65,87,42,218,92,25,170,68,153,238,
    113,73,65,143,78,47,22,92,250,80,15,38,146,25,45,20,
    220,245,2,201,97,252,185,196,44,158,156,95,241,160,31,10,
    66,96,138,86,72,65,151,70,86,157,70,63,8,42,145,56,
    181,69,187,238,204,128,65,110,182,100,22,104,94,148,196,83,
    65,93,27,28,182,206,190,130,137,9,28,220,3,91,192,98,
    177,37,21,108,7,117,112,124,141,96,27,220,76,224,68,134,
    245,12,109,250,242,116,53,105,204,187,175,150,26,205,90,125,
    158,142,105,47,238,210,255,189,167,79,212,165,79,171,243,125,
    171,203,171,3,50,56,136,113,74,123,232,192,252,255,27,231,
    223,25,16,62,176,61,204,90,194,61,84,127,211,112,250,130,
    180,236,209,254,134,142,186,9,109,25,0,129,200,200,84,214,
    70,111,144,94,20,72,95,231,6,235,94,156,72,52,71,232,
    96,141,66,43,245,183,14,30,148,168,113,157,68,37,71,235,
    174,90,245,168,23,166,28,102,60,151,244,98,216,214,232,243,
    108,38,87,59,168,70,93,233,215,124,78,129,49,196,93,91,
    56,168,225,170,85,245,25,21,52,115,46,28,192,220,141,90,
    48,232,39,178,102,89,96,209,202,72,40,76,187,217,24,209,
    32,45,196,94,8,35,180,110,214,53,45,205,165,144,150,99,
    163,190,230,188,161,92,202,193,92,42,160,204,4,163,246,152,
    201,76,254,165,51,19,72,247,206,192,13,17,147,235,127,224,
    181,20,175,215,5,188,156,255,21,46,231,73,17,179,240,159,
    25,219,30,194,235,40,100,88,112,11,77,142,224,69,20,158,
    31,217,48,84,53,75,236,231,2,166,210,40,54,194,182,71,
    49,81,197,247,18,107,142,88,85,99,131,85,26,142,179,172,
    56,206,194,73,188,205,190,122,13,83,141,119,88,253,213,64,
    189,140,1,116,213,197,233,119,113,165,88,247,120,76,158,230,
    227,110,99,101,129,174,244,31,162,120,7,67,0,45,21,177,
    39,147,181,112,41,142,33,133,65,13,105,15,247,184,33,51,
    40,238,197,225,90,24,236,175,133,43,208,72,115,138,107,184,
    143,49,6,47,185,238,154,251,220,201,110,254,78,4,178,78,
    150,84,65,88,128,217,2,56,239,190,113,96,179,93,166,36,
    73,167,116,104,100,153,206,86,76,178,92,140,244,46,238,65,
    23,59,77,48,194,47,123,129,18,148,4,210,183,13,126,246,
    213,2,10,201,164,229,226,36,82,129,39,45,242,17,178,187,
    38,156,37,195,153,91,148,155,107,83,69,208,166,14,190,64,
    10,137,131,6,49,60,243,190,218,75,255,137,218,113,177,179,
    194,84,97,170,56,89,40,193,103,162,112,14,62,211,67,71,
    10,100,21,57,239,98,211,50,122,79,211,210,108,226,9,218,
    108,210,2,110,98,98,159,6,88,164,196,120,191,39,136,251,
    123,123,205,14,172,107,24,6,156,61,63,240,148,130,189,209,
    137,184,139,67,228,226,162,117,199,205,0,210,206,33,229,27,
    161,146,91,16,14,168,224,65,168,218,149,137,222,42,148,154,
    83,2,75,99,88,221,247,3,161,18,28,44,157,119,53,34,
    10,47,139,120,140,19,214,185,209,0,198,204,66,138,15,135,
    68,117,150,48,128,177,75,58,49,222,225,169,79,45,169,168,
    67,127,29,214,20,93,28,136,189,197,88,74,104,198,234,87,
    103,105,90,219,148,233,216,134,51,86,207,54,159,54,122,7,
    241,209,220,85,109,82,174,83,167,52,135,117,30,228,102,156,
    108,126,52,55,184,175,212,180,135,172,173,111,189,241,42,135,
    168,81,98,226,213,136,178,204,75,115,92,44,60,75,240,180,
    206,113,35,169,139,56,255,31,90,250,29,103,114,121,99,29,
    18,57,106,183,40,218,94,26,36,25,193,202,118,74,175,185,
    175,58,132,30,54,11,34,114,223,33,237,128,238,1,203,138,
    242,183,126,25,83,180,21,157,161,145,18,61,216,22,68,33,
    76,206,160,183,254,76,235,220,203,32,92,192,43,111,151,244,
    169,72,165,122,94,66,157,112,76,45,138,30,237,182,58,230,
    79,180,61,22,192,23,29,39,142,105,17,170,199,112,165,18,
    220,137,148,154,52,33,11,105,194,226,246,226,38,220,101,100,
    164,247,194,202,114,189,65,29,99,161,94,175,233,194,136,62,
    67,224,152,81,100,36,188,175,67,34,80,11,19,87,108,105,
    67,50,180,140,89,6,65,60,32,155,92,143,244,170,174,172,
    86,177,134,226,27,217,89,135,56,68,38,134,118,61,29,236,
    64,106,185,163,153,8,12,190,33,168,92,117,81,175,73,11,
    76,86,128,179,89,79,240,160,36,75,65,136,36,178,195,112,
    66,35,24,146,12,96,188,4,55,104,227,233,138,252,192,213,
    115,218,77,106,70,246,184,41,247,69,50,125,96,89,38,51,
    153,131,190,80,198,244,154,178,228,244,49,156,159,194,164,172,
    17,165,49,46,181,48,89,88,39,95,32,102,65,193,197,179,
    157,86,120,43,111,68,83,20,10,200,105,224,204,118,47,13,
    132,243,63,52,166,211,247,64,215,81,225,47,240,192,240,93,
    42,78,14,227,103,186,8,159,2,124,244,19,2,122,254,94,
    180,254,155,247,194,108,254,150,201,101,165,177,236,147,183,27,
    42,21,166,70,166,250,172,112,224,83,156,160,186,153,194,88,
    113,181,60,102,198,166,251,248,30,44,56,25,138,108,141,141,
    105,214,195,176,175,104,184,176,20,71,123,251,46,157,58,47,
    243,51,182,205,178,175,187,190,208,16,82,231,47,244,25,246,
    61,94,21,232,130,58,85,24,135,207,148,254,43,254,15,190,
    234,75,146,
};

EmbeddedPython embedded_m5_objects_O3CPU(
    "m5/objects/O3CPU.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/cpu/o3/O3CPU.py",
    "m5.objects.O3CPU",
    data_m5_objects_O3CPU,
    2563,
    6391);

} // anonymous namespace