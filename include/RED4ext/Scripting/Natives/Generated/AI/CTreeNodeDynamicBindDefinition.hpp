#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDynamicDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeDynamicBindDefinition : AI::CTreeNodeDynamicDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDynamicBindDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeDynamicBindDefinition, 0x30);
} // namespace AI
using AICTreeNodeDynamicBindDefinition = AI::CTreeNodeDynamicBindDefinition;
} // namespace RED4ext

// clang-format on
