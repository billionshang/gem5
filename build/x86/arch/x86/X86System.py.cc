#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_X86System[] = {
    120,156,181,84,75,111,211,64,16,30,231,253,106,83,241,168,
    120,72,96,46,16,144,82,151,162,86,69,170,16,180,128,84,
    137,162,200,238,1,124,177,92,123,19,27,188,182,229,117,164,
    228,196,161,252,6,254,110,153,153,77,66,80,37,196,165,113,
    60,218,157,217,153,157,249,230,27,7,176,248,85,241,125,107,
    2,168,95,184,8,241,111,64,2,112,78,171,10,36,6,200,
    10,184,21,144,85,112,171,96,144,182,10,73,13,100,29,220,
    186,222,215,32,105,128,108,130,219,4,217,2,183,165,181,117,
    72,218,32,59,224,118,244,190,1,73,23,100,23,220,46,238,
    155,32,186,48,54,32,108,193,79,128,75,128,175,110,15,194,
    54,136,30,107,59,43,237,6,132,93,112,6,61,76,45,190,
    194,223,192,192,85,73,226,197,160,66,75,178,124,57,60,248,
    112,184,183,123,238,95,36,98,93,241,33,45,139,185,246,184,
    163,181,206,217,113,156,41,45,249,184,14,114,95,91,79,211,
    82,36,103,163,143,73,230,151,113,58,25,101,49,42,138,242,
    238,95,214,147,44,29,199,19,237,204,161,187,218,252,238,100,
    116,106,59,239,71,90,217,64,225,204,85,41,100,217,94,92,
    205,187,96,29,245,99,66,61,197,133,0,112,13,194,30,129,
    70,248,17,104,81,131,111,117,16,117,66,1,219,112,137,61,
    104,176,18,145,107,178,178,202,202,22,43,17,184,54,43,107,
    172,236,176,178,75,24,95,114,39,72,217,163,22,32,158,182,
    51,104,226,149,118,11,133,186,133,194,47,130,200,154,29,30,
    88,138,51,220,137,34,245,152,74,160,10,205,108,108,42,121,
    129,104,89,161,140,205,56,29,103,133,68,112,178,84,13,168,
    37,4,137,41,115,83,229,34,48,199,11,220,204,92,3,103,
    170,178,152,6,229,180,16,234,201,181,195,1,195,56,45,56,
    152,201,151,169,103,120,138,96,52,139,44,43,205,80,168,160,
    136,115,182,95,139,152,212,241,236,213,15,253,244,97,176,73,
    25,83,73,158,151,250,82,120,94,217,225,141,204,194,105,66,
    219,26,29,152,231,130,245,193,108,230,69,194,15,177,185,20,
    103,228,23,190,180,171,75,58,233,130,61,206,201,102,191,173,
    101,250,158,204,189,69,46,54,121,150,155,235,22,237,65,173,
    47,31,17,176,65,30,123,107,85,104,251,210,159,93,17,177,
    208,243,195,176,240,164,175,190,19,164,240,71,168,83,20,150,
    76,75,43,154,140,149,229,68,126,33,156,72,164,214,68,200,
    253,97,86,196,147,56,29,42,14,58,220,219,125,185,63,124,
    61,124,101,169,34,176,86,29,93,209,110,39,159,115,195,135,
    20,246,1,138,134,161,159,62,203,246,74,246,13,206,235,83,
    156,78,103,255,32,237,243,255,39,45,242,141,220,236,219,116,
    245,189,117,190,37,116,201,26,235,30,162,145,198,214,148,126,
    78,196,203,163,185,138,3,31,57,35,100,134,131,204,180,165,
    105,178,169,135,54,205,157,77,253,178,55,72,240,216,145,65,
    96,8,13,245,205,226,73,5,29,81,216,214,18,207,74,195,
    248,172,153,72,89,202,253,157,156,136,165,152,123,84,24,231,
    104,87,86,223,7,254,12,105,222,81,109,139,15,12,83,78,
    179,171,182,24,8,230,148,189,26,91,190,250,70,139,227,81,
    58,210,195,243,230,41,133,167,178,58,198,182,177,197,239,86,
    101,187,255,27,97,195,104,74,
};

EmbeddedPython embedded_m5_objects_X86System(
    "m5/objects/X86System.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/arch/x86/X86System.py",
    "m5.objects.X86System",
    data_m5_objects_X86System,
    760,
    1601);

} // anonymous namespace