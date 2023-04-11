#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct SelectWorkspotNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorSelectWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> spotInstance; // 40
    Handle<AI::ArgumentMapping> workspotData; // 50
    Handle<AI::ArgumentMapping> dependentWorkspotData; // 60
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // 70
    bool repeatChild; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(SelectWorkspotNodeDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorSelectWorkspotNodeDefinition = AI::behavior::SelectWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
