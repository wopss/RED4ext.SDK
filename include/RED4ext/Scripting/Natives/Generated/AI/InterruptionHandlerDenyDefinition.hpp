#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/InterruptionHandlerDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct InterruptionHandlerDenyDefinition : AI::InterruptionHandlerDefinition
{
    static constexpr const char* NAME = "AIInterruptionHandlerDenyDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InterruptionHandlerDenyDefinition, 0x48);
} // namespace AI
using AIInterruptionHandlerDenyDefinition = AI::InterruptionHandlerDenyDefinition;
} // namespace RED4ext

// clang-format on
