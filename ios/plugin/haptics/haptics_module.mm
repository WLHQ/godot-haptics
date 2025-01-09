//
//  haptics_module.m
//  haptics
//
//  Created by Kyoz on 10/07/2023.
//


#ifdef VERSION_4_0
#include "core/config/engine.h"
#else
#include "core/engine.h"
#endif


// Updated haptics_module.mm (renamed to audio_module.mm for clarity)

#include "haptics_module.h"
#include <AVFoundation/AVFoundation.h>

void AudioModule::initialize_audio() {
    // Implementation for initializing audio
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayback error:nil];
    [session setActive:YES error:nil];
}

void AudioModule::cleanup_audio() {
    // Implementation for cleaning up audio
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setActive:NO error:nil];
}