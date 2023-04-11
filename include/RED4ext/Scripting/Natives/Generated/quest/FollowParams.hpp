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
struct FollowParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questFollowParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> companionRef; // 40
    float companionDistance; // 50
    float destinationPointTolerance; // 54
    bool stopWhenDestinationReached; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    move::MovementType movementType; // 5C
    bool repeatCommandOnInterrupt; // 60
    bool matchSpeed; // 61
    bool useTeleport; // 62
    uint8_t unk63[0x68 - 0x63]; // 63
};
RED4EXT_ASSERT_SIZE(FollowParams, 0x68);
} // namespace quest
using questFollowParams = quest::FollowParams;
} // namespace RED4ext

// clang-format on
