#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeINodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeDefinition : LibTreeINodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeDefinition, 0x30);
} // namespace AI
using AICTreeNodeDefinition = AI::CTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
