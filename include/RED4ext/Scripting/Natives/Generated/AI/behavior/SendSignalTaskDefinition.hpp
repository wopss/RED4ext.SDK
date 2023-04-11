#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BoolSignalAction.hpp>

namespace RED4ext
{
namespace game { struct SignalUserDataDefinition; }

namespace AI::behavior
{
struct SendSignalTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSendSignalTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    CName signalName; // 38
    game::BoolSignalAction startAction; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<game::SignalUserDataDefinition> startActionUserData; // 48
    game::BoolSignalAction endAction; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Handle<game::SignalUserDataDefinition> endActionUserData; // 60
};
RED4EXT_ASSERT_SIZE(SendSignalTaskDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorSendSignalTaskDefinition = AI::behavior::SendSignalTaskDefinition;
} // namespace RED4ext

// clang-format on
