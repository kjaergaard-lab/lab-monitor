#include "MonitorThreads.h"

//////////////////////////////////////////
// Configure this monitor node below
//////////////////////////////////////////

const char * node_name = "air_monitor";

std::vector<DCThread *> collectors = {
    new BME280Monitor("sensor/lab/atmosphere/centre"),
    new DSM501A_Monitor("sensor/lab/atmosphere/centre/dust")
};

///////////////////////////////////////////////////////////
// END NODE CONFIGURATION
///////////////////////////////////////////////////////////
