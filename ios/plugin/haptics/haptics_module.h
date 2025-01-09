//
//  haptics_module.h
//  haptics
//
//  Created by Kyoz on 07/07/2023.
//

// Updated haptics_module.h (renamed to audio_module.h for clarity)
#ifndef AUDIO_MODULE_H
#define AUDIO_MODULE_H

#include "core/object/class_db.h"

class AudioModule : public Object {
    GDCLASS(AudioModule, Object);

public:
    void initialize_audio();
    void cleanup_audio();
};

#endif // AUDIO_MODULE_H