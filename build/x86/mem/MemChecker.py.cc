#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemChecker[] = {
    120,156,181,83,221,139,211,64,16,159,77,219,180,215,171,94,
    61,196,7,159,2,130,4,165,141,31,244,65,16,209,19,5,
    31,78,143,68,16,251,18,182,201,94,147,51,201,150,236,246,
    174,125,174,255,183,206,76,122,45,69,95,47,97,135,249,216,
    157,249,205,111,118,19,216,126,45,92,239,61,0,147,162,130,
    43,21,80,0,148,0,83,0,65,182,3,133,128,210,129,169,
    211,216,45,40,90,240,125,171,181,81,107,131,114,224,82,64,
    218,129,223,0,27,128,159,211,14,164,46,40,96,111,119,231,
    117,33,237,65,228,31,97,161,252,15,126,190,64,205,146,121,
    174,202,111,179,43,149,216,189,43,202,15,92,36,158,217,126,
    179,247,99,166,146,95,170,78,110,123,160,224,25,245,240,16,
    21,44,59,21,212,9,2,198,102,166,45,8,35,223,193,64,
    72,173,154,83,20,165,42,3,92,113,210,228,25,103,153,223,
    166,34,61,20,113,92,201,82,197,49,215,138,227,82,167,203,
    130,76,222,176,94,40,246,39,171,85,156,41,153,170,218,167,
    250,123,97,62,161,8,202,202,6,217,252,210,4,81,38,107,
    21,101,170,10,230,170,156,140,116,157,207,243,106,100,172,156,
    21,106,244,234,197,203,201,232,205,232,117,96,234,132,224,4,
    251,206,198,139,53,163,125,78,41,169,178,43,92,97,31,28,
    116,127,174,171,220,234,61,9,173,91,18,212,127,73,80,109,
    26,229,6,245,14,40,151,134,71,122,151,245,54,235,61,222,
    211,97,253,8,84,31,174,142,65,13,104,146,27,156,254,61,
    246,220,167,121,210,134,19,98,149,248,10,73,152,199,255,178,
    138,212,49,64,100,215,28,19,114,105,172,170,189,133,174,173,
    33,14,163,66,94,171,198,60,65,243,67,145,75,227,93,234,
    218,51,20,48,195,3,95,201,135,185,204,15,89,87,158,156,
    233,165,245,174,115,93,72,155,235,202,120,186,42,214,230,9,
    134,191,84,72,111,149,40,207,16,247,169,119,147,219,204,211,
    54,195,210,91,64,198,167,220,33,209,26,118,72,184,36,186,
    52,223,254,14,231,5,226,178,20,104,42,55,87,146,128,113,
    128,142,49,76,190,50,201,98,25,155,60,109,12,98,128,13,
    218,115,33,107,89,242,213,57,211,186,96,215,103,89,24,197,
    233,110,176,145,152,112,243,168,185,54,30,222,178,119,119,247,
    138,64,6,148,114,184,189,87,110,107,32,154,255,84,124,245,
    137,135,144,74,218,1,1,154,140,119,15,49,220,189,77,244,
    46,168,51,211,116,140,86,173,87,77,27,156,254,206,192,115,
    189,183,205,155,124,247,148,82,19,107,67,49,20,125,209,119,
    30,181,255,2,19,38,21,224,
};

EmbeddedPython embedded_m5_objects_MemChecker(
    "m5/objects/MemChecker.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/mem/MemChecker.py",
    "m5.objects.MemChecker",
    data_m5_objects_MemChecker,
    600,
    1238);

} // anonymous namespace
