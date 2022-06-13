                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   #pragma once

// ESP32 vendor libraries
#include <Preferences.h>

class DevicePreferences {
  public:
    explicit DevicePreferences(
        Preferences &preferences, const char *group_name, const char *compiled_date
    ) :
      preferences(preferences), group_name(group_name), compiled_date(compiled_date) {}
    bool isFirstRun();
    bool isTimelapse();
    void setIsTimelapse(bool value);
    uint32_t getFrameIndex();
    void setFrameIndex(uint32_t value);
    uint32_t getCameraExposureTime();
    uint32_t getCameraGain();
    void setCameraExposureTime(uint32_t value);
    void setCameraGain(uint32_t value);  

  private:
    Preferences &preferences;
    const char *group_name;
    const String compiled_date;
};
