#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeCompositeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/InterruptionSignal.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

namespace AI
{
struct CTreeNodeDecisionDefinition : AI::CTreeNodeCompositeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDecisionDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    Handle<LibTreeINodeDefinition> child; // 38
    DynArray<Handle<LibTreeINodeDefinition>> expressions; // 48
    AI::InterruptionSignal interruption; // 58
};
RED4EXT_ASSERT_SIZE(CTreeNodeDecisionDefinition, 0x68);
} // namespace AI
using AICTreeNodeDecisionDefinition = AI::CTreeNodeDecisionDefinition;
} // namespace RED4ext

// clang-format on
