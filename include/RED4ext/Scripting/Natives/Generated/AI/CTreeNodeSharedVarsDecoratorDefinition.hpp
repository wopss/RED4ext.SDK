#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeSharedVarsBaseDecoratorDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SharedVarTableDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeSharedVarsDecoratorDefinition : AI::CTreeNodeSharedVarsBaseDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeSharedVarsDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::SharedVarTableDefinition sharedVars; // 48
};
RED4EXT_ASSERT_SIZE(CTreeNodeSharedVarsDecoratorDefinition, 0x60);
} // namespace AI
using AICTreeNodeSharedVarsDecoratorDefinition = AI::CTreeNodeSharedVarsDecoratorDefinition;
} // namespace RED4ext

// clang-format on
