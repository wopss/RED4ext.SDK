#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionSlideNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionSlideToWorldPositionNodeDefinition : AI::behavior::ActionSlideNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionSlideToWorldPositionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> worldPosition; // 70
    bool useMovePlanner; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(ActionSlideToWorldPositionNodeDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorActionSlideToWorldPositionNodeDefinition = AI::behavior::ActionSlideToWorldPositionNodeDefinition;
} // namespace RED4ext

// clang-format on
