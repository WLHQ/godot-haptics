//
//  haptics.h
//  haptics
//
//  Created by Kyoz on 07/07/2023.
//

#ifndef HAPTICS_H
#define HAPTICS_H

#ifdef VERSION_4_0
#include "core/object/object.h"
#endif

#ifdef VERSION_3_X
#include "core/object.h"
#endif

// Updated haptics.h (retaining the name for compatibility)

#include "core/object/class_db.h"

class Audio : public Object {
    GDCLASS(Audio, Object);

public:
    void play_audio(const String &file_path);
    void stop_audio();
};

#endif // AUDIO_H