#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/VehicleExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ShouldJoinTrafficDefinition : AI::behavior::VehicleExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorShouldJoinTrafficDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShouldJoinTrafficDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorShouldJoinTrafficDefinition = AI::behavior::ShouldJoinTrafficDefinition;
} // namespace RED4ext

// clang-format on
