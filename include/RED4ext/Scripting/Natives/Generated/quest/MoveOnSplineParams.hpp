#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct MoveOnSplineAdditionalParams; }

namespace quest
{
struct MoveOnSplineParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMoveOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineNodeRef; // 40
    bool startFromClosestPoint; // 48
    bool splineRecalculation; // 49
    bool useStart; // 4A
    bool useStop; // 4B
    bool reverse; // 4C
    bool useAlertedState; // 4D
    bool useCombatState; // 4E
    bool executeWhileDespawned; // 4F
    bool removeAfterCombat; // 50
    bool ignoreInCombat; // 51
    bool alwaysUseStealth; // 52
    bool disableFootIK; // 53
    bool repeatCommandOnInterrupt; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    float noWaitToEndDistance; // 58
    float noWaitToEndCompanionDistance; // 5C
    Handle<quest::MoveOnSplineAdditionalParams> additionalParams; // 60
};
RED4EXT_ASSERT_SIZE(MoveOnSplineParams, 0x70);
} // namespace quest
using questMoveOnSplineParams = quest::MoveOnSplineParams;
} // namespace RED4ext

// clang-format on
