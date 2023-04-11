#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDecoratorDefinition.hpp>

namespace RED4ext
{
namespace AI { struct InterruptionHandlerDefinition; }

namespace AI
{
struct TreeNodeInterruptionDecoratorDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AITreeNodeInterruptionDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    DynArray<Handle<AI::InterruptionHandlerDefinition>> interruptions; // 50
};
RED4EXT_ASSERT_SIZE(TreeNodeInterruptionDecoratorDefinition, 0x60);
} // namespace AI
using AITreeNodeInterruptionDecoratorDefinition = AI::TreeNodeInterruptionDecoratorDefinition;
} // namespace RED4ext

// clang-format on
