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
struct CTreeNodeActionDieDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionDieDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeActionDieDefinition, 0x48);
} // namespace AI
using AICTreeNodeActionDieDefinition = AI::CTreeNodeActionDieDefinition;
} // namespace RED4ext

// clang-format on
