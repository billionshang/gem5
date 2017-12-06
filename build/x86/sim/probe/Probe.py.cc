#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Probe[] = {
    120,156,181,144,77,79,131,64,16,134,103,41,165,31,241,96,
    244,15,120,68,35,197,143,244,96,98,140,241,224,201,175,20,
    47,114,33,91,216,2,13,187,144,221,53,105,207,245,127,235,
    12,180,214,63,224,2,47,51,147,221,121,159,217,20,182,171,
    135,223,253,9,128,185,195,32,195,151,65,5,32,25,196,12,
    24,229,14,84,14,188,111,163,30,70,61,16,12,22,12,50,
    23,190,0,54,0,31,177,11,89,31,34,223,195,22,229,55,
    46,159,97,100,71,40,81,41,95,231,75,145,218,174,68,114,
    102,143,81,223,116,61,23,79,165,177,66,9,221,109,73,255,
    50,61,16,211,41,6,2,8,5,253,99,135,224,98,180,119,
    97,217,7,225,193,114,64,80,27,7,226,33,204,34,159,142,
    205,28,20,115,68,82,202,176,33,147,78,39,69,97,15,118,
    190,207,92,241,92,104,159,8,237,16,37,73,20,151,34,73,
    236,184,77,100,157,125,86,148,186,180,97,221,136,182,158,174,
    86,73,33,120,38,180,237,83,39,174,185,156,17,175,245,186,
    84,40,107,9,130,171,181,29,224,95,110,109,104,207,94,204,
    35,74,40,149,13,139,124,97,194,168,192,131,81,33,84,152,
    11,57,13,106,93,230,165,10,140,229,243,74,4,87,23,151,
    211,224,38,184,14,141,78,195,253,68,237,16,147,102,221,78,
    123,78,61,137,192,99,244,188,248,4,215,206,42,167,147,223,
    251,239,64,71,93,181,33,116,211,78,78,153,174,87,93,171,
    255,35,109,189,110,187,123,189,243,119,196,135,108,204,198,206,
    15,253,206,143,206,
};

EmbeddedPython embedded_m5_objects_Probe(
    "m5/objects/Probe.py",
    "/mnt/hgfs/ShareShen/gem5-origin-stable-2015-9-3/src/sim/probe/Probe.py",
    "m5.objects.Probe",
    data_m5_objects_Probe,
    357,
    652);

} // anonymous namespace