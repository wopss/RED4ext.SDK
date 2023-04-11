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
struct IsBeingSummonedDefinition : AI::behavior::VehicleExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsBeingSummonedDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IsBeingSummonedDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorIsBeingSummonedDefinition = AI::behavior::IsBeingSummonedDefinition;
} // namespace RED4ext

// clang-format on
