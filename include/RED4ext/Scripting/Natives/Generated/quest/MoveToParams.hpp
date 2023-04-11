#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct MoveToParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMoveToParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> movementTargetRef; // 40
    Handle<quest::UniversalRef> facingTargetRef; // 50
    bool rotateEntityTowardsFacingTarget; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    move::MovementType movementType; // 64
    bool ignoreNavigation; // 68
    bool useStart; // 69
    bool useStop; // 6A
    uint8_t unk6B[0x6C - 0x6B]; // 6B
    float desiredDistanceFromTarget; // 6C
    bool finishWhenDestinationReached; // 70
    bool executeWhileDespawned; // 71
    bool removeAfterCombat; // 72
    bool ignoreInCombat; // 73
    bool alwaysUseStealth; // 74
    bool repeatCommandOnInterrupt; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
};
RED4EXT_ASSERT_SIZE(MoveToParams, 0x78);
} // namespace quest
using questMoveToParams = quest::MoveToParams;
} // namespace RED4ext

// clang-format on
