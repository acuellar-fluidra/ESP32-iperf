#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Register WiFi functions
void register_wifi(void);
void initialise_wifi(void);
void provision_wifi(bool);
void wifi_scan(void);
void iperf(bool);
#ifdef __cplusplus
}
#endif
