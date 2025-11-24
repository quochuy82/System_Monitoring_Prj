#ifndef APPCONFIG_H
#define APPCONFIG_H

/********************************************************
 * Configuration section
 ********************************************************/
#define STD_ON                              1
#define STD_OFF                             0

#define APP_DEBUG_PRINT_ENABLE              STD_OFF

// CPU paths
#define CPU_USAGE_PATH                      "/proc/stat"
#define CPU_LOAD_PATH                       "/proc/loadavg"
#define CPU_TEMPER_PATH                     "/sys/class/thermal/thermal_zone0/temp"

// GPU paths (NVIDIA)
#define GPU_TEMPER_CMD                      "nvidia-smi"

// SSD paths
#define SSD_TEMPER_CMD                      "smartctl"
#define SSD_DEVICE                          "/dev/sda"

// RAM paths
#define RAM_USAGE_PATH                      "/proc/meminfo"
#define RAM_TOTAL_PREFIX                    "MemTotal:"
#define RAM_AVAILABLE_PREFIX                "MemAvailable:"
#define SWAP_TOTAL_PREFIX                   "SwapTotal:"
#define SWAP_FREE_PREFIX                    "SwapFree:"

// Network paths
#define NETWORK_DATA_PATH                   "/proc/net/dev"

#endif // APPCONFIG_H

