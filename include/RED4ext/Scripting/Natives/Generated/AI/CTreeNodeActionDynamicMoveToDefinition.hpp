#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionDynamicMoveToDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionDynamicMoveToDefinition";
    static constexpr const char* ALIAS = NAME;

    float tolerance; // 48
    move::MovementType moveType; // 4C
    CName target; // 50
    bool keepDistance; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(CTreeNodeActionDynamicMoveToDefinition, 0x60);
} // namespace AI
using AICTreeNodeActionDynamicMoveToDefinition = AI::CTreeNodeActionDynamicMoveToDefinition;
} // namespace RED4ext

// clang-format on
