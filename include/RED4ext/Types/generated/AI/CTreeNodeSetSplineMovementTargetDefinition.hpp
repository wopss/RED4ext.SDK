#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/CTreeNodeDecoratorDefinition.hpp>
#include <RED4ext/Types/generated/LibTreeSharedVarReferenceName.hpp>
#include <RED4ext/Types/generated/LibTreeSharedVarRegistrationName.hpp>

namespace RED4ext
{
namespace AI { 
struct CTreeNodeSetSplineMovementTargetDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeSetSplineMovementTargetDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeSharedVarReferenceName splineNode; // 48
    LibTreeSharedVarRegistrationName movementTarget; // 50
};
RED4EXT_ASSERT_SIZE(CTreeNodeSetSplineMovementTargetDefinition, 0x58);
} // namespace AI
} // namespace RED4ext
