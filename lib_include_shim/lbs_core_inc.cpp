#define LOG_TAG "GeoFenceKeep_jni"
#define LOG_NDEBUG 0
#define GPS_CONF_FILE "/etc/gps.conf"

#include "JNIHelp.h"
#include "jni.h"
#include "loc_cfg.h"
#include "GeoFencerProxyMsgs.h"
#include "android_runtime/AndroidRuntime.h"
#include "hardware/gps.h"
#include <dlfcn.h>
#include <log_util.h>

void _ZN8loc_core14LocAdapterBaseC2EjPNS_11ContextBaseE () {
}

//Shim lib for geofence q-com by Line'R
