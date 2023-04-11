#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct DistrictEnteredEvent : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gamemappinsDistrictEnteredEvent";
    static constexpr const char* ALIAS = "DistrictEnteredEvent";

    bool entered; // 48
    bool sendNewLocationNotification; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    TweakDBID district; // 4C
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(DistrictEnteredEvent, 0x58);
} // namespace game::mappins
using gamemappinsDistrictEnteredEvent = game::mappins::DistrictEnteredEvent;
using DistrictEnteredEvent = game::mappins::DistrictEnteredEvent;
} // namespace RED4ext

// clang-format on
