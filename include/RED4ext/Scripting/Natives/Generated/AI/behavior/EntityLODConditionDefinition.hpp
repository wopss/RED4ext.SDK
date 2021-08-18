#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EntityLODConditions.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct EntityLODConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorEntityLODConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::behavior::EntityLODConditions> any; // 38
    DynArray<AI::behavior::EntityLODConditions> all; // 48
    DynArray<AI::behavior::EntityLODConditions> none; // 58
};
RED4EXT_ASSERT_SIZE(EntityLODConditionDefinition, 0x68);
} // namespace AI::behavior
} // namespace RED4ext
