#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionAnimationCurvePathDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionAnimationCurvePathDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> nodeReference; // 40
    Handle<AI::ArgumentMapping> controllersSetupName; // 50
    Handle<AI::ArgumentMapping> useStart; // 60
    Handle<AI::ArgumentMapping> useStop; // 70
    Handle<AI::ArgumentMapping> blendTime; // 80
    Handle<AI::ArgumentMapping> globalInBlendTime; // 90
    Handle<AI::ArgumentMapping> globalOutBlendTime; // A0
    Handle<AI::ArgumentMapping> turnCharacterToMatchVelocity; // B0
    Handle<AI::ArgumentMapping> customStartAnimationName; // C0
    Handle<AI::ArgumentMapping> customMainAnimationName; // D0
    Handle<AI::ArgumentMapping> customStopAnimationName; // E0
    Handle<AI::ArgumentMapping> startSnapToTerrain; // F0
    Handle<AI::ArgumentMapping> mainSnapToTerrain; // 100
    Handle<AI::ArgumentMapping> stopSnapToTerrain; // 110
    Handle<AI::ArgumentMapping> startSnapToTerrainBlendTime; // 120
    Handle<AI::ArgumentMapping> stopSnapToTerrainBlendTime; // 130
};
RED4EXT_ASSERT_SIZE(ActionAnimationCurvePathDefinition, 0x140);
} // namespace AI::behavior
using AIbehaviorActionAnimationCurvePathDefinition = AI::behavior::ActionAnimationCurvePathDefinition;
} // namespace RED4ext

// clang-format on
