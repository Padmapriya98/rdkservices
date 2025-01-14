#pragma once

#define IARM_BUS_DSMGR_NAME "DSMgr"

typedef enum _DSMgr_EventId_t {
    IARM_BUS_DSMGR_EVENT_DISPLAY_FRAMRATE_PRECHANGE,
    IARM_BUS_DSMGR_EVENT_DISPLAY_FRAMRATE_POSTCHANGE,
    IARM_BUS_DSMGR_EVENT_HDMI_IN_HOTPLUG,
} IARM_Bus_DSMgr_EventId_t;

typedef enum _dsHDRStandard_t {
    dsHDRSTANDARD_NONE = 0x0,
} dsHDRStandard_t;
