#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FindLaneFilter.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct FindLaneTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorFindLaneTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> pointOnLane; // 38
    world::FindLaneFilter filter; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(FindLaneTaskDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorFindLaneTaskDefinition = AI::behavior::FindLaneTaskDefinition;
} // namespace RED4ext

// clang-format on
