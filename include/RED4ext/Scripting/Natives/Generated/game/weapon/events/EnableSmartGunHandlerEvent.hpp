#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events { 
struct EnableSmartGunHandlerEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsEnableSmartGunHandlerEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EnableSmartGunHandlerEvent, 0x58);
} // namespace game::weapon::events
} // namespace RED4ext
