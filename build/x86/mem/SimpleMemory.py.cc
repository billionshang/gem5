#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_SimpleMemory[] = {
    120,156,181,82,75,143,211,64,12,246,244,181,125,172,64,236,
    149,75,144,56,84,43,37,217,135,42,129,132,16,148,195,94,
    0,173,54,8,137,94,162,105,226,109,130,50,73,152,241,62,
    122,46,255,27,236,105,171,238,137,27,147,196,250,108,217,159,
    63,143,147,193,238,116,249,251,16,0,184,136,65,206,175,130,
    10,224,219,14,41,70,29,64,5,183,10,242,46,252,6,216,
    0,252,88,116,32,239,65,50,237,115,73,249,135,207,84,49,
    34,49,167,116,204,54,41,77,91,225,23,52,141,93,103,79,
    59,205,165,211,119,6,8,176,80,210,79,184,20,44,186,128,
    61,224,86,27,198,125,192,1,252,60,146,134,220,102,211,129,
    197,112,31,233,67,62,240,145,145,143,140,33,231,224,208,71,
    38,112,147,76,71,76,125,35,58,220,11,54,6,77,236,188,
    148,148,97,84,20,110,34,226,42,125,143,65,219,88,114,212,
    99,255,242,172,118,238,165,20,226,175,59,116,20,80,19,88,
    116,109,83,59,12,42,77,88,103,107,18,241,146,247,250,223,
    121,193,189,182,165,174,51,116,67,78,60,191,136,222,92,205,
    99,231,94,177,243,169,49,203,178,198,156,107,116,30,232,58,
    15,30,108,73,24,44,25,62,148,57,21,83,185,57,146,186,
    52,173,181,193,52,165,177,119,76,147,223,85,226,138,90,90,
    183,232,227,217,227,99,90,48,21,90,26,237,167,186,230,161,
    124,150,76,71,178,158,107,109,181,161,35,70,159,119,147,8,
    222,79,53,57,224,148,149,211,115,246,183,91,155,239,85,121,
    242,131,70,89,228,193,184,43,54,177,169,41,46,86,183,46,
    78,10,109,49,41,176,142,87,104,102,97,99,203,85,89,135,
    142,244,178,194,240,226,236,124,22,190,13,47,99,103,179,88,
    54,243,244,39,137,218,181,95,91,40,164,207,216,12,148,60,
    199,234,68,157,116,71,234,235,84,238,223,75,49,179,168,149,
    153,28,73,218,199,165,35,171,51,218,178,120,138,255,40,209,
    47,231,221,118,29,239,79,133,92,238,122,172,198,157,191,38,
    82,204,161,
};

EmbeddedPython embedded_m5_objects_SimpleMemory(
    "m5/objects/SimpleMemory.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/mem/SimpleMemory.py",
    "m5.objects.SimpleMemory",
    data_m5_objects_SimpleMemory,
    467,
    847);

} // anonymous namespace