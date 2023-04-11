#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeCompositeDefinition.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

namespace AI
{
struct CTreeNodeConditionDefinition : AI::CTreeNodeCompositeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<LibTreeINodeDefinition>> expressions; // 38
    Handle<LibTreeINodeDefinition> trueBranch; // 48
    Handle<LibTreeINodeDefinition> falseBranch; // 58
    bool reevaluateOnExecution; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(CTreeNodeConditionDefinition, 0x70);
} // namespace AI
using AICTreeNodeConditionDefinition = AI::CTreeNodeConditionDefinition;
} // namespace RED4ext

// clang-format on
