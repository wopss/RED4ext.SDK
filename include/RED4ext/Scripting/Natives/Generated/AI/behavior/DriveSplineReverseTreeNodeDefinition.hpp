#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DriveTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct DriveSplineReverseTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveSplineReverseTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> spline; // 40
};
RED4EXT_ASSERT_SIZE(DriveSplineReverseTreeNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorDriveSplineReverseTreeNodeDefinition = AI::behavior::DriveSplineReverseTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
