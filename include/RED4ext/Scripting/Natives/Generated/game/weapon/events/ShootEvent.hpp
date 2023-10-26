#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct __declspec(align(0x10)) ShootEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsShootEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x1E0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ShootEvent, 0x1E0);
} // namespace game::weapon::events
using gameweaponeventsShootEvent = game::weapon::events::ShootEvent;
} // namespace RED4ext

// clang-format on
