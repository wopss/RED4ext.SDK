#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/TelemetryTrackedQuest.hpp>

namespace RED4ext
{
namespace game { 
struct TelemetryPostMortem
{
    static constexpr const char* NAME = "gameTelemetryPostMortem";
    static constexpr const char* ALIAS = NAME;

    CString crashVisitId; // 00
    CString playthroughId; // 20
    CString crashVersion; // 40
    CString timeCrash; // 60
    game::TelemetryTrackedQuest trackedQuest; // 80
    Vector3 location; // 128
    float sessionLength; // 134
    bool isOom; // 138
    uint8_t unk139[0x140 - 0x139]; // 139
};
RED4EXT_ASSERT_SIZE(TelemetryPostMortem, 0x140);
} // namespace game
} // namespace RED4ext
