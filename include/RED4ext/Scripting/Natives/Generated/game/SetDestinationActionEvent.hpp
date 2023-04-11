#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace game
{
struct SetDestinationActionEvent : game::ActionEvent
{
    static constexpr const char* NAME = "gameSetDestinationActionEvent";
    static constexpr const char* ALIAS = NAME;

    Vector3 position; // 68
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(SetDestinationActionEvent, 0x78);
} // namespace game
using gameSetDestinationActionEvent = game::SetDestinationActionEvent;
} // namespace RED4ext

// clang-format on
