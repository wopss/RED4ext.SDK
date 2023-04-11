#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeSharedVarsBaseDecoratorDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarRegistrationName.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeSingleSharedVarDecoratorDefinition : AI::CTreeNodeSharedVarsBaseDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeSingleSharedVarDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeSharedVarRegistrationName sharedVarName; // 48
};
RED4EXT_ASSERT_SIZE(CTreeNodeSingleSharedVarDecoratorDefinition, 0x50);
} // namespace AI
using AICTreeNodeSingleSharedVarDecoratorDefinition = AI::CTreeNodeSingleSharedVarDecoratorDefinition;
} // namespace RED4ext

// clang-format on
