#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionItemHandlingNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionEquipItemNodeDefinition : AI::behavior::ActionItemHandlingNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionEquipItemNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> itemId; // 60
    Handle<AI::ArgumentMapping> failIfItemNotFound; // 70
    Handle<AI::ArgumentMapping> spawnDelay; // 80
};
RED4EXT_ASSERT_SIZE(ActionEquipItemNodeDefinition, 0x90);
} // namespace AI::behavior
using AIbehaviorActionEquipItemNodeDefinition = AI::behavior::ActionEquipItemNodeDefinition;
} // namespace RED4ext

// clang-format on
