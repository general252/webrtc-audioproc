#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma comment(lib, "Winmm.lib")

#pragma comment(lib, "E:/Users/webrtc_code/webrtc-audioproc/win32/Debug/audio_processing.lib")
#pragma comment(lib, "E:/Users/webrtc_code/webrtc-audioproc/win32/Debug/common_audio.lib")
#pragma comment(lib, "E:/Users/webrtc_code/webrtc-audioproc/win32/Debug/system_wrappers.lib")


#include "modules/audio_processing/aec/include/echo_cancellation.h"
#include "modules/audio_processing/agc/include/gain_control.h"
#include "modules/audio_processing/ns/include/noise_suppression.h"
#include "common_audio/signal_processing/include/signal_processing_library.h"
#include "modules/audio_processing/include/audio_processing.h"

int main(int argc, char* argv[])
{
    void*aecmInst=NULL;
    WebRtcAec_Create(&aecmInst);
    webrtc::AudioProcessing* apm = webrtc::AudioProcessing::Create(0);


    return 0;
}