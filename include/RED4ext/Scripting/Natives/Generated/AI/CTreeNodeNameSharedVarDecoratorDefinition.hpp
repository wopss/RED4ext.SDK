#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeSingleSharedVarDecoratorDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeNameSharedVarDecoratorDefinition : AI::CTreeNodeSingleSharedVarDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeNameSharedVarDecoratorDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeNameSharedVarDecoratorDefinition, 0x50);
} // namespace AI
using AICTreeNodeNameSharedVarDecoratorDefinition = AI::CTreeNodeNameSharedVarDecoratorDefinition;
} // namespace RED4ext

// clang-format on
