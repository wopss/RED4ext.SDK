#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct LimiterNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorLimiterNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint32_t activationLimitPerFrame; // 40
    bool delayChildActivation; // 44
    bool delayChildActivationIfAttaching; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(LimiterNodeDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorLimiterNodeDefinition = AI::behavior::LimiterNodeDefinition;
} // namespace RED4ext

// clang-format on
