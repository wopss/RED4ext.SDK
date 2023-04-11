#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeAtomicDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeDoNothingDefinition : AI::CTreeNodeAtomicDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDoNothingDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeDoNothingDefinition, 0x30);
} // namespace AI
using AICTreeNodeDoNothingDefinition = AI::CTreeNodeDoNothingDefinition;
} // namespace RED4ext

// clang-format on
