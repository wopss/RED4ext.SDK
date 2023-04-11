#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDecoratorDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeSharedVarsBaseDecoratorDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeSharedVarsBaseDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeSharedVarsBaseDecoratorDefinition, 0x48);
} // namespace AI
using AICTreeNodeSharedVarsBaseDecoratorDefinition = AI::CTreeNodeSharedVarsBaseDecoratorDefinition;
} // namespace RED4ext

// clang-format on
