#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { 
struct PhotoModeCursorStateChangedEvent : red::Event
{
    static constexpr const char* NAME = "inkPhotoModeCursorStateChangedEvent";
    static constexpr const char* ALIAS = "PhotoModeCursorStateChangedEvent";

    bool cursorEnabled; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PhotoModeCursorStateChangedEvent, 0x48);
} // namespace ink
using PhotoModeCursorStateChangedEvent = ink::PhotoModeCursorStateChangedEvent;
} // namespace RED4ext
