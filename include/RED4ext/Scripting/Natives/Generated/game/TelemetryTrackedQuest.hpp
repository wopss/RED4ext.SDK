#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryTrackedQuest
{
    static constexpr const char* NAME = "gameTelemetryTrackedQuest";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    CString objectiveName; // 20
    CString type; // 40
    float distance; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    CString questName; // 68
    CString questType; // 88
};
RED4EXT_ASSERT_SIZE(TelemetryTrackedQuest, 0xA8);
} // namespace game
using gameTelemetryTrackedQuest = game::TelemetryTrackedQuest;
} // namespace RED4ext

// clang-format on
