#pragma once

#include <string>
#include <esp_camera.h>

class BoardCamera {
private:
    bool initialized;
    std::string lastError;

public:
    BoardCamera();
    ~BoardCamera();
    
    // Initialize the camera with specific configuration
    bool init(const camera_config_t& config);
    
    // Capture a frame
    camera_fb_t* capture();
    
    // Get last error message
    std::string getLastError() const;
};
