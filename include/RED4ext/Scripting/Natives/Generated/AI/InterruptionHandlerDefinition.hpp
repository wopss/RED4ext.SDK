#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/InterruptionSignal.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeINodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct InterruptionHandlerDefinition : LibTreeINodeDefinition
{
    static constexpr const char* NAME = "AIInterruptionHandlerDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::InterruptionSignal signal; // 30
    bool supportLessImportantSignals; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(InterruptionHandlerDefinition, 0x48);
} // namespace AI
using AIInterruptionHandlerDefinition = AI::InterruptionHandlerDefinition;
} // namespace RED4ext

// clang-format on
