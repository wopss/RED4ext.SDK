#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDecoratorDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefInt32.hpp>

namespace RED4ext
{
namespace AI
{
struct TreeNodeRepeatDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AITreeNodeRepeatDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeDefInt32 limit; // 48
};
RED4EXT_ASSERT_SIZE(TreeNodeRepeatDefinition, 0x60);
} // namespace AI
using AITreeNodeRepeatDefinition = AI::TreeNodeRepeatDefinition;
} // namespace RED4ext

// clang-format on
