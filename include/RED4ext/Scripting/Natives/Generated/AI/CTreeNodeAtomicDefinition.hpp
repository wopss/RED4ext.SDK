#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeAtomicDefinition : AI::CTreeNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeAtomicDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeAtomicDefinition, 0x30);
} // namespace AI
using AICTreeNodeAtomicDefinition = AI::CTreeNodeAtomicDefinition;
} // namespace RED4ext

// clang-format on
