#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct LineOfSightClearConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorLineOfSightClearConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> collisionFilters; // 38
    Vector3 offset; // 48
    uint8_t unk54[0x58 - 0x54]; // 54
    Handle<AI::ArgumentMapping> target; // 58
};
RED4EXT_ASSERT_SIZE(LineOfSightClearConditionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorLineOfSightClearConditionDefinition = AI::behavior::LineOfSightClearConditionDefinition;
} // namespace RED4ext

// clang-format on
