#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct UserEnteredCoverEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsUserEnteredCoverEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
    DynArray<WorldTransform> actionsPoints; // 48
};
RED4EXT_ASSERT_SIZE(UserEnteredCoverEvent, 0x58);
} // namespace game::events
using gameeventsUserEnteredCoverEvent = game::events::UserEnteredCoverEvent;
} // namespace RED4ext

// clang-format on
