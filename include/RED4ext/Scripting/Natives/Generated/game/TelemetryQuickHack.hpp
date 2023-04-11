#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Quality.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryQuickHack
{
    static constexpr const char* NAME = "gameTelemetryQuickHack";
    static constexpr const char* ALIAS = "TelemetryQuickHack";

    CName actionName; // 00
    CString titleLocKey; // 08
    CString targetType; // 28
    TweakDBID quickHackRecordID; // 48
    game::data::Quality quality; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(TelemetryQuickHack, 0x58);
} // namespace game
using gameTelemetryQuickHack = game::TelemetryQuickHack;
using TelemetryQuickHack = game::TelemetryQuickHack;
} // namespace RED4ext

// clang-format on
