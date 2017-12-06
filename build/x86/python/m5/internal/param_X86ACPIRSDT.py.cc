#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86ACPIRSDT[] = {
    120,156,197,88,253,114,219,198,17,223,3,64,74,164,36,139,
    178,44,201,182,100,139,77,199,9,235,86,98,226,68,182,59,
    86,221,58,78,58,227,76,70,118,65,119,236,40,153,162,16,
    112,36,65,145,0,7,56,217,98,70,234,31,149,167,237,11,
    244,17,250,71,223,166,111,212,238,238,1,32,244,225,52,51,
    237,136,50,113,62,28,238,246,246,227,183,31,119,30,164,127,
    37,124,126,83,7,72,254,36,0,124,252,9,232,3,12,4,
    236,10,16,82,128,127,13,246,75,16,127,6,126,9,222,1,
    236,26,32,13,56,193,142,9,223,26,16,206,242,154,50,244,
    77,30,17,48,170,130,180,96,183,4,175,194,5,176,100,25,
    246,171,16,255,17,132,16,161,128,215,254,20,248,211,240,14,
    169,99,167,194,4,167,129,6,171,60,88,1,127,134,7,171,
    224,207,114,103,6,70,53,144,179,176,59,71,211,118,175,32,
    217,187,72,118,158,201,254,139,200,250,248,101,9,252,43,52,
    29,249,250,134,102,90,52,147,247,155,103,42,181,140,203,5,
    216,189,154,245,23,11,253,107,133,254,82,161,191,204,125,228,
    224,42,244,86,160,119,29,122,55,160,141,74,89,200,119,187,
    9,210,132,222,42,236,174,130,196,223,77,56,65,189,249,87,
    11,43,214,120,197,98,190,226,22,175,184,13,187,183,65,226,
    239,150,94,81,134,86,99,25,109,17,252,27,255,26,104,11,
    80,179,216,188,145,113,18,68,161,19,132,237,40,48,232,123,
    153,26,178,156,71,205,84,106,194,167,100,194,127,2,219,207,
    55,82,19,30,3,18,22,36,75,223,128,99,238,28,27,48,
    106,192,145,128,158,5,190,9,71,184,77,137,24,232,8,56,
    49,224,59,147,38,28,99,107,161,162,111,131,165,180,253,122,
    172,104,77,105,10,142,75,112,84,130,214,235,35,131,6,246,
    43,16,255,3,190,95,99,162,211,76,212,128,35,108,45,56,
    177,224,184,12,175,112,18,14,245,42,36,190,120,125,132,146,
    226,72,171,97,33,183,59,5,113,73,20,63,136,67,119,32,
    213,85,236,59,67,55,118,7,206,235,135,247,159,60,125,241,
    204,110,125,241,178,81,205,230,69,201,230,208,85,93,155,23,
    154,164,145,193,80,49,193,40,148,106,6,59,237,32,244,157,
    65,228,31,244,165,154,38,106,78,59,232,75,199,225,143,207,
    6,195,40,86,95,198,113,20,219,164,84,30,236,71,110,190,
    130,84,234,245,163,68,54,104,55,222,198,38,242,138,102,183,
    135,76,145,24,96,102,105,177,47,19,47,14,134,10,109,165,
    41,210,108,162,214,32,43,113,147,184,216,52,7,161,106,118,
    59,237,164,217,234,186,177,108,117,101,216,236,200,193,214,70,
    20,7,157,32,220,72,148,187,215,151,27,247,62,254,100,107,
    227,151,27,159,54,247,14,130,190,223,60,124,120,191,57,28,
    169,110,20,54,7,91,205,32,84,18,213,212,111,158,83,208,
    38,78,34,213,37,111,131,142,19,176,144,78,87,246,135,50,
    158,163,209,155,196,134,168,137,89,81,22,166,104,136,57,236,
    149,240,49,197,154,49,35,118,2,18,211,35,209,9,99,86,
    17,85,100,106,1,251,6,196,107,132,153,30,254,4,25,25,
    145,211,162,111,6,127,251,29,233,71,143,246,76,66,130,30,
    60,98,156,33,224,112,230,54,153,62,4,6,75,9,122,101,
    208,32,66,236,105,84,197,35,106,113,58,145,49,144,184,5,
    201,223,1,245,141,240,57,130,20,90,39,38,136,176,6,170,
    74,158,142,163,203,184,225,159,25,157,173,6,177,191,195,24,
    81,221,32,137,222,134,108,9,234,179,63,181,80,51,47,70,
    207,247,122,210,83,201,58,14,124,19,29,212,61,55,12,35,
    85,119,125,191,238,42,21,7,123,7,74,38,117,21,213,239,
    36,13,50,174,189,144,193,44,167,55,26,102,176,34,8,32,
    172,244,139,31,120,10,95,22,249,133,173,144,72,133,16,233,
    70,126,130,227,68,162,35,149,77,76,42,82,114,196,140,48,
    130,28,154,74,219,227,188,43,248,254,36,227,132,97,218,40,
    103,160,74,100,191,173,170,140,79,55,73,28,230,132,198,25,
    138,68,248,141,219,63,144,76,29,193,164,144,33,234,106,30,
    46,29,140,215,73,176,76,15,44,92,24,133,254,8,121,13,
    188,143,136,141,235,12,201,89,6,229,18,2,114,10,219,50,
    254,95,22,203,134,103,165,48,44,103,80,164,0,169,128,129,
    32,82,44,32,44,79,48,24,53,12,142,38,44,31,123,235,
    7,212,163,197,246,26,53,183,168,185,77,205,122,166,130,203,
    212,195,220,89,61,60,160,189,13,22,158,197,36,195,153,153,
    152,254,41,143,187,49,246,56,12,160,45,242,28,131,252,107,
    236,57,22,5,219,248,49,181,56,149,125,210,132,228,37,133,
    118,242,48,38,70,206,132,110,65,189,177,179,176,210,236,26,
    41,99,58,195,185,77,224,45,34,184,83,64,176,77,246,98,
    248,218,55,178,184,233,208,12,13,92,123,149,72,149,46,208,
    122,157,154,159,76,66,245,99,8,118,206,65,240,17,177,81,
    75,33,56,199,208,171,226,83,51,60,51,181,71,158,91,23,
    207,64,143,112,103,93,128,187,15,169,103,158,215,192,4,33,
    151,202,253,219,2,228,136,85,163,40,222,14,118,70,43,36,
    85,17,108,43,88,52,188,10,87,176,14,48,184,14,248,152,
    235,0,174,37,184,186,210,129,221,228,216,174,59,37,82,79,
    219,132,229,52,191,39,21,108,135,113,116,56,170,71,237,186,
    98,249,41,14,111,223,73,54,239,36,143,48,194,214,31,115,
    108,211,49,86,71,209,88,14,41,10,210,210,47,15,61,201,
    89,149,223,28,71,7,61,135,3,160,147,102,107,196,221,18,
    41,215,200,180,206,225,63,81,49,69,253,75,215,123,53,215,
    59,137,241,21,109,92,101,165,155,98,5,49,86,21,204,157,
    163,35,63,215,112,252,21,159,207,201,16,164,1,9,84,125,
    219,45,205,59,139,69,2,218,191,56,133,163,75,20,202,110,
    226,46,191,207,240,83,30,227,135,30,51,115,143,191,2,87,
    186,2,254,2,132,16,4,66,234,30,185,55,17,36,22,105,
    250,31,128,253,232,130,154,130,227,83,139,234,8,158,129,97,
    43,121,192,83,117,137,241,21,252,173,224,132,89,33,96,166,
    181,108,177,16,176,242,216,198,208,250,81,201,222,58,29,4,
    201,80,93,55,161,105,58,178,141,253,122,156,74,242,18,20,
    35,251,101,226,108,90,111,233,16,119,223,141,81,70,169,116,
    85,44,26,5,236,124,66,205,189,28,54,34,27,187,36,70,
    215,225,253,53,128,163,51,203,183,196,141,197,252,207,79,41,
    210,45,210,120,214,122,226,60,125,254,245,243,157,150,67,228,
    178,62,145,205,221,166,148,185,205,189,220,109,36,167,197,119,
    124,18,162,214,32,108,156,24,2,143,167,88,45,210,105,208,
    2,89,130,221,50,57,24,215,249,34,245,63,145,5,67,10,
    157,167,114,46,235,108,71,107,51,135,135,182,60,53,135,151,
    30,100,200,248,219,125,119,176,231,187,143,251,180,45,237,237,
    101,30,105,100,130,212,138,130,144,55,137,247,201,194,175,91,
    153,64,111,46,61,192,220,199,93,114,65,216,157,252,200,227,
    168,242,178,43,235,3,57,216,195,131,112,55,24,214,219,125,
    183,195,22,51,83,65,159,103,130,42,54,249,217,234,38,185,
    75,109,84,247,162,16,51,194,129,167,162,184,238,75,60,29,
    74,191,190,81,231,116,82,15,146,186,187,135,95,93,79,105,
    239,56,237,236,92,94,187,113,39,225,74,122,255,45,117,39,
    98,113,199,9,194,0,207,23,33,228,153,92,159,79,243,236,
    192,39,7,237,108,152,116,241,220,167,70,58,4,82,165,99,
    111,82,243,51,152,84,18,249,140,180,71,219,145,26,203,98,
    213,168,24,106,65,251,122,54,237,5,173,75,206,187,247,222,
    143,113,111,125,239,148,58,121,153,102,202,41,186,146,160,182,
    66,153,132,174,149,74,233,181,18,13,234,107,165,50,143,92,
    161,112,48,245,191,134,3,118,161,137,56,207,193,255,53,10,
    216,15,38,46,135,253,16,210,186,226,125,17,64,20,133,156,
    211,17,160,39,178,35,80,81,66,190,145,185,126,17,212,28,
    47,150,174,146,218,120,107,19,16,154,99,138,102,226,112,236,
    214,231,11,244,39,185,124,39,92,93,141,174,177,77,245,73,
    144,109,42,94,133,55,177,82,183,184,82,223,166,74,253,136,
    149,225,24,186,88,31,3,183,148,235,132,2,71,40,223,58,
    231,244,162,203,113,226,205,29,14,101,232,219,119,161,88,97,
    243,231,75,199,199,35,13,228,113,169,99,138,107,88,82,159,
    247,88,10,216,5,121,217,184,165,220,71,39,97,102,198,246,
    73,134,237,198,60,20,163,182,189,77,13,199,233,60,68,219,
    191,206,141,116,235,66,224,202,16,139,87,153,208,233,238,191,
    204,192,178,139,75,217,244,157,213,200,222,224,203,190,84,242,
    188,241,21,177,146,158,254,125,137,137,49,26,225,145,139,143,
    45,248,222,119,156,201,228,143,95,105,23,128,132,146,28,230,
    15,81,198,12,178,100,84,202,21,193,201,250,204,253,184,230,
    143,170,79,93,158,143,18,155,227,202,124,174,88,190,197,205,
    210,36,217,128,15,153,59,238,64,223,185,241,29,146,253,83,
    72,79,245,246,71,185,129,232,238,131,207,68,250,84,138,30,
    196,133,4,215,13,246,167,52,78,11,6,91,155,153,64,155,
    169,40,173,81,242,133,76,188,151,164,10,231,141,164,106,132,
    175,148,7,91,234,206,153,21,167,84,80,92,167,86,47,156,
    217,10,6,250,90,147,115,106,241,187,31,187,216,95,58,51,
    154,200,56,112,251,193,247,250,30,51,27,86,36,218,251,183,
    254,16,126,168,52,47,78,229,108,175,126,254,131,243,201,176,
    140,178,88,118,130,4,25,224,221,47,216,55,141,73,12,128,
    219,23,98,189,72,101,34,232,212,37,185,190,144,120,76,215,
    98,201,231,216,208,181,102,101,190,130,72,165,96,101,226,233,
    127,78,88,230,108,173,98,205,206,84,172,202,148,201,55,78,
    115,120,94,171,90,149,153,89,145,253,91,71,76,87,141,245,
    90,69,252,7,225,197,20,140,
};

EmbeddedPython embedded_m5_internal_param_X86ACPIRSDT(
    "m5/internal/param_X86ACPIRSDT.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/internal/param_X86ACPIRSDT.py",
    "m5.internal.param_X86ACPIRSDT",
    data_m5_internal_param_X86ACPIRSDT,
    2280,
    7081);

} // anonymous namespace