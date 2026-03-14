#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TelemetryTrackedQuest.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryPostMortem
{
    static constexpr const char* NAME = "gameTelemetryPostMortem";
    static constexpr const char* ALIAS = NAME;

    String crashVisitId; // 00
    String playthroughId; // 20
    String crashVersion; // 40
    String crashPatch; // 60
    String timeCrash; // 80
    String district; // A0
    String zoneType; // C0
    game::TelemetryTrackedQuest trackedQuest; // E0
    Vector3 location; // 188
    float sessionLength; // 194
    bool isOom; // 198
    uint8_t unk199[0x1A0 - 0x199]; // 199
};
RED4EXT_ASSERT_SIZE(TelemetryPostMortem, 0x1A0);
} // namespace game
using gameTelemetryPostMortem = game::TelemetryPostMortem;
} // namespace RED4ext

// clang-format on
