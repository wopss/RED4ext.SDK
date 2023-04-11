#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CombatRelatedCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI
{
struct InjectCombatTargetCommand : AI::CombatRelatedCommand
{
    static constexpr const char* NAME = "AIInjectCombatTargetCommand";
    static constexpr const char* ALIAS = NAME;

    NodeRef targetNodeRef; // 68
    game::EntityReference targetPuppetRef; // 70
    float duration; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(InjectCombatTargetCommand, 0xB0);
} // namespace AI
using AIInjectCombatTargetCommand = AI::InjectCombatTargetCommand;
} // namespace RED4ext

// clang-format on
