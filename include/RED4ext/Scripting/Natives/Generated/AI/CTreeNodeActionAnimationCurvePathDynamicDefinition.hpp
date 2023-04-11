#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionAnimationCurvePathDynamicDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionAnimationCurvePathDynamicDefinition";
    static constexpr const char* ALIAS = NAME;

    CName targetSplineVarName; // 48
    CName controlerVarName; // 50
    CName startAnimVarName; // 58
    CName stopAnimVarName; // 60
    float blendTime; // 68
    float globalInBlendTime; // 6C
    float globalOutBlendTime; // 70
    bool turnCharacterToMatchVelocity; // 74
    bool startSnapToTerrain; // 75
    bool mainSnapToTerrain; // 76
    bool stopSnapToTerrain; // 77
    float startSnapToTerrainBlendTime; // 78
    float stopSnapToTerrainBlendTime; // 7C
};
RED4EXT_ASSERT_SIZE(CTreeNodeActionAnimationCurvePathDynamicDefinition, 0x80);
} // namespace AI
using AICTreeNodeActionAnimationCurvePathDynamicDefinition = AI::CTreeNodeActionAnimationCurvePathDynamicDefinition;
} // namespace RED4ext

// clang-format on
