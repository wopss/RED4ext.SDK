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

    CString crashVisitId; // 00
    CString playthroughId; // 20
    CString crashVersion; // 40
    CString crashPatch; // 60
    CString timeCrash; // 80
    CString district; // A0
    CString zoneType; // C0
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
