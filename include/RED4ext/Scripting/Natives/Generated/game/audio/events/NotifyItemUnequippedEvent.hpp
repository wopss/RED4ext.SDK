#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events { 
struct NotifyItemUnequippedEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyItemUnequippedEvent";
    static constexpr const char* ALIAS = NAME;

    CName itemName; // 40
};
RED4EXT_ASSERT_SIZE(NotifyItemUnequippedEvent, 0x48);
} // namespace game::audio::events
} // namespace RED4ext
