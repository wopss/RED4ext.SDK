#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DelegateAttrRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DelegateExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDelegateExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::DelegateAttrRef delegateAttribute; // 40
    DynArray<CName> behaviorCallbackNames; // 48
};
RED4EXT_ASSERT_SIZE(DelegateExpressionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorDelegateExpressionDefinition = AI::behavior::DelegateExpressionDefinition;
} // namespace RED4ext

// clang-format on
