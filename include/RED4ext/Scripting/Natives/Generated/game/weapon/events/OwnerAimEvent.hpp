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
struct OwnerAimEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsOwnerAimEvent";
    static constexpr const char* ALIAS = NAME;

    bool isAiming; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(OwnerAimEvent, 0x48);
} // namespace game::weapon::events
using gameweaponeventsOwnerAimEvent = game::weapon::events::OwnerAimEvent;
} // namespace RED4ext

// clang-format on
