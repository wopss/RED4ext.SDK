#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct MoveOnSplineAdditionalParams; }

namespace quest { 
struct MoveOnSplineParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMoveOnSplineParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineNodeRef; // 40
    bool startFromClosestPoint; // 48
    bool useStart; // 49
    bool useStop; // 4A
    bool reverse; // 4B
    bool useAlertedState; // 4C
    bool useCombatState; // 4D
    bool executeWhileDespawned; // 4E
    bool removeAfterCombat; // 4F
    bool ignoreInCombat; // 50
    bool alwaysUseStealth; // 51
    bool repeatCommandOnInterrupt; // 52
    uint8_t unk53[0x54 - 0x53]; // 53
    float noWaitToEndDistance; // 54
    float noWaitToEndCompanionDistance; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Handle<quest::MoveOnSplineAdditionalParams> additionalParams; // 60
};
RED4EXT_ASSERT_SIZE(MoveOnSplineParams, 0x70);
} // namespace quest
} // namespace RED4ext
