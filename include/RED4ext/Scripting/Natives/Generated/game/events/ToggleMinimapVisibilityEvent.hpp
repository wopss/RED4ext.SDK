#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct ToggleMinimapVisibilityEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsToggleMinimapVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

    bool show; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ToggleMinimapVisibilityEvent, 0x48);
} // namespace game::events
} // namespace RED4ext
