#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct TreeNodeDeathDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AITreeNodeDeathDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TreeNodeDeathDefinition, 0x48);
} // namespace AI
using AITreeNodeDeathDefinition = AI::TreeNodeDeathDefinition;
} // namespace RED4ext

// clang-format on
