#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UseWorkspotNodeFunctions.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UseWorkspotPlayerParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkEntryId.hpp>

namespace RED4ext
{
namespace quest
{
struct UseWorkspotParamsV1 : quest::AICommandParams
{
    static constexpr const char* NAME = "questUseWorkspotParamsV1";
    static constexpr const char* ALIAS = NAME;

    quest::UseWorkspotNodeFunctions function; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    NodeRef workspotNode; // 48
    bool teleport; // 50
    bool finishAnimation; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName forceEntryAnimName; // 58
    work::WorkEntryId entryId; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    CName entryTag; // 68
    DynArray<work::WorkEntryId> workExcludedGestures; // 70
    float maxAnimTimeLimit; // 80
    bool enableIdleMode; // 84
    bool changeWorkspot; // 85
    bool instant; // 86
    uint8_t unk87[0x88 - 0x87]; // 87
    work::WorkEntryId exitEntryId; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    CName exitAnimName; // 90
    bool jumpToEntry; // 98
    bool isWorkspotInfinite; // 99
    bool isPlayer; // 9A
    uint8_t unk9B[0x9C - 0x9B]; // 9B
    quest::UseWorkspotPlayerParams playerParams; // 9C
    move::MovementType movementType; // C8
    bool repeatCommandOnInterrupt; // CC
    bool continueInCombat; // CD
    bool meshDissolvingEnabled; // CE
    bool dangleResetSimulation; // CF
};
RED4EXT_ASSERT_SIZE(UseWorkspotParamsV1, 0xD0);
} // namespace quest
using questUseWorkspotParamsV1 = quest::UseWorkspotParamsV1;
} // namespace RED4ext

// clang-format on
