#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/InterruptionHandlerDefinition.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

namespace AI
{
struct InterruptionHandlerBehaviorDefinition : AI::InterruptionHandlerDefinition
{
    static constexpr const char* NAME = "AIInterruptionHandlerBehaviorDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Handle<LibTreeINodeDefinition> ai; // 50
    bool parallelActivation; // 60
    bool parallelExecution; // 61
    bool blockInterruption; // 62
    uint8_t unk63[0x68 - 0x63]; // 63
};
RED4EXT_ASSERT_SIZE(InterruptionHandlerBehaviorDefinition, 0x68);
} // namespace AI
using AIInterruptionHandlerBehaviorDefinition = AI::InterruptionHandlerBehaviorDefinition;
} // namespace RED4ext

// clang-format on
