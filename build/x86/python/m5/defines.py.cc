#include "sim/init.hh"

namespace {

const uint8_t data_m5_defines[] = {
    120,156,85,82,91,115,210,64,20,62,9,109,185,182,161,248,
    232,131,142,79,188,208,104,29,28,157,233,56,166,16,44,83,
    32,152,4,236,160,206,78,32,75,216,152,11,38,75,109,159,
    251,35,250,199,252,63,122,118,7,80,119,54,39,223,119,206,
    238,119,46,201,2,182,171,138,207,135,231,0,249,47,4,62,
    110,5,34,128,153,178,195,170,192,84,129,176,0,225,1,248,
    42,208,67,88,170,224,23,128,30,73,80,7,255,104,135,139,
    187,104,105,7,78,193,175,238,162,13,8,202,240,160,192,172,
    40,5,75,16,150,33,172,192,172,2,180,10,15,152,180,6,
    119,253,127,66,199,16,158,8,127,247,219,57,124,197,58,52,
    152,213,129,106,16,162,232,137,16,202,30,5,245,53,120,54,
    107,0,197,88,13,104,3,46,126,60,2,238,207,95,106,162,
    1,167,249,4,27,99,191,113,141,120,9,225,196,49,73,207,
    28,77,121,29,137,227,144,142,53,28,27,110,255,114,128,238,
    49,175,160,211,53,236,143,166,75,250,142,193,11,72,239,222,
    190,225,98,74,157,49,49,70,35,203,53,92,147,107,91,161,
    177,229,244,111,72,103,96,117,174,121,113,235,187,158,14,101,
    162,177,109,185,86,199,26,72,205,97,159,208,59,47,94,71,
    148,31,35,189,50,166,120,89,28,184,156,244,248,211,189,199,
    180,123,196,112,93,155,152,55,157,193,164,107,146,43,203,113,
    153,130,113,126,136,102,25,121,1,97,2,53,85,52,182,52,
    133,61,21,21,216,165,61,21,121,229,93,57,2,217,67,220,
    62,99,9,167,89,226,69,92,149,92,150,141,238,13,103,17,
    63,64,44,65,89,204,38,246,50,222,101,11,46,221,110,182,
    161,178,134,158,23,229,84,54,56,223,176,200,55,147,91,73,
    246,178,226,240,34,205,168,204,183,72,227,53,139,104,215,227,
    84,38,10,162,116,142,247,229,13,242,31,33,62,102,34,68,
    102,102,40,133,79,156,203,249,127,167,247,242,125,139,226,162,
    165,156,99,93,249,79,198,87,50,151,152,73,83,252,201,127,
    77,62,66,163,199,9,215,87,193,50,215,157,149,151,81,103,
    69,19,61,160,113,187,149,102,44,96,73,11,101,230,17,109,
    157,191,124,213,110,189,107,189,214,101,55,58,126,108,125,125,
    207,87,105,162,199,109,221,167,75,150,208,252,12,61,162,200,
    139,56,245,55,17,125,47,102,154,55,208,212,148,154,250,73,
    213,148,178,242,66,209,148,138,114,170,252,1,159,65,184,33,
};

EmbeddedPython embedded_m5_defines(
    "m5/defines.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/build/x86/python/m5/defines.py",
    "m5.defines",
    data_m5_defines,
    560,
    856);

} // anonymous namespace