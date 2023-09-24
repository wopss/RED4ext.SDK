#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::weapon::events
{
struct EnableSmartGunHandlerEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsEnableSmartGunHandlerEvent";
    static constexpr const char* ALIAS = "EnableSmartGunHandlerEvent";

    WeakHandle<game::Object> owner; // 40
    bool enable; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(EnableSmartGunHandlerEvent, 0x58);
} // namespace game::weapon::events
using gameweaponeventsEnableSmartGunHandlerEvent = game::weapon::events::EnableSmartGunHandlerEvent;
using EnableSmartGunHandlerEvent = game::weapon::events::EnableSmartGunHandlerEvent;
} // namespace RED4ext

// clang-format on
