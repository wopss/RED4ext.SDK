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
struct CTreeNodePlayerControlledDefinition : AI::CTreeNodeAtomicDefinition
{
    static constexpr const char* NAME = "AICTreeNodePlayerControlledDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodePlayerControlledDefinition, 0x30);
} // namespace AI
using AICTreeNodePlayerControlledDefinition = AI::CTreeNodePlayerControlledDefinition;
} // namespace RED4ext

// clang-format on
