#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompletionStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CompleteOnEventNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorCompleteOnEventNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 40
    AI::behavior::CompletionStatus resultOnEvent; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CompleteOnEventNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorCompleteOnEventNodeDefinition = AI::behavior::CompleteOnEventNodeDefinition;
} // namespace RED4ext

// clang-format on
