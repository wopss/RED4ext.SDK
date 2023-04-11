#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDecoratorDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarReferenceName.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarRegistrationName.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeSetSplineMovementTargetDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeSetSplineMovementTargetDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeSharedVarReferenceName splineNode; // 48
    LibTreeSharedVarRegistrationName movementTarget; // 50
};
RED4EXT_ASSERT_SIZE(CTreeNodeSetSplineMovementTargetDefinition, 0x58);
} // namespace AI
using AICTreeNodeSetSplineMovementTargetDefinition = AI::CTreeNodeSetSplineMovementTargetDefinition;
} // namespace RED4ext

// clang-format on
