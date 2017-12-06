#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_KvmVM[] = {
    120,156,181,145,77,111,211,64,16,134,103,215,73,218,166,69,
    226,194,221,39,100,129,28,243,161,28,16,168,106,43,46,168,
    74,139,98,84,9,95,44,215,59,177,19,188,118,180,187,141,
    226,115,249,223,48,179,110,128,63,128,63,94,189,51,210,238,
    60,51,83,194,211,19,208,127,17,2,216,115,50,138,62,1,
    13,192,183,39,39,6,39,161,145,160,3,200,2,16,42,0,
    12,96,37,64,141,224,39,192,35,192,247,108,4,106,12,105,
    52,161,43,214,191,232,137,4,57,199,242,106,176,39,36,233,
    90,223,222,111,176,116,110,76,209,245,78,223,45,202,127,41,
    174,152,226,35,25,4,200,4,179,100,146,33,168,40,142,96,
    51,6,156,192,230,136,97,30,37,100,199,128,39,176,153,66,
    69,120,129,207,156,194,50,141,70,116,126,41,73,236,51,146,
    114,251,144,252,216,233,100,167,103,117,237,51,182,183,14,117,
    216,121,16,75,21,65,163,238,76,31,154,162,173,208,134,171,
    206,132,101,87,52,104,75,84,225,98,241,229,54,58,227,6,
    142,73,242,188,45,52,230,185,155,250,64,119,234,161,225,144,
    107,186,126,139,62,95,238,247,121,141,133,66,227,219,252,90,
    152,66,59,30,76,234,43,123,75,73,108,157,227,166,139,182,
    247,169,129,203,157,146,189,35,178,206,12,7,121,110,151,74,
    153,37,211,57,223,210,1,206,179,241,236,254,138,253,76,146,
    232,214,37,117,181,178,73,90,83,157,180,198,54,169,80,207,
    227,206,172,171,117,27,91,87,220,55,24,191,123,243,118,30,
    127,136,223,39,214,148,201,97,78,126,41,179,109,239,39,248,
    154,111,228,190,39,130,94,249,66,222,68,227,195,46,245,124,
    182,101,64,235,7,195,145,233,246,189,59,27,130,63,155,94,
    138,195,58,254,23,169,175,255,105,88,197,249,75,190,153,167,
    57,21,83,249,92,254,6,124,76,166,64,
};

EmbeddedPython embedded_m5_objects_KvmVM(
    "m5/objects/KvmVM.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/cpu/kvm/KvmVM.py",
    "m5.objects.KvmVM",
    data_m5_objects_KvmVM,
    427,
    740);

} // anonymous namespace