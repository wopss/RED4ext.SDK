#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefBool.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefCName.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefNodeRef.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionAnimationCurvePathDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionAnimationCurvePathDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeDefNodeRef nodeReference; // 48
    LibTreeDefCName controllersSetupName; // 60
    LibTreeDefBool useStart; // 78
    LibTreeDefBool useStop; // 90
    LibTreeDefFloat blendTime; // A8
    LibTreeDefFloat globalInBlendTime; // C0
    LibTreeDefFloat globalOutBlendTime; // D8
    LibTreeDefBool turnCharacterToMatchVelocity; // F0
    LibTreeDefCName customStartAnimationName; // 108
    LibTreeDefCName customMainAnimationName; // 120
    LibTreeDefCName customStopAnimationName; // 138
    LibTreeDefBool startSnapToTerrain; // 150
    LibTreeDefBool mainSnapToTerrain; // 168
    LibTreeDefBool stopSnapToTerrain; // 180
    LibTreeDefFloat startSnapToTerrainBlendTime; // 198
    LibTreeDefFloat stopSnapToTerrainBlendTime; // 1B0
};
RED4EXT_ASSERT_SIZE(CTreeNodeActionAnimationCurvePathDefinition, 0x1C8);
} // namespace AI
using AICTreeNodeActionAnimationCurvePathDefinition = AI::CTreeNodeActionAnimationCurvePathDefinition;
} // namespace RED4ext

// clang-format on
