#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneCallVisuals.hpp>

namespace RED4ext
{
namespace quest
{
struct TriggerCallRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "questTriggerCallRequest";
    static constexpr const char* ALIAS = NAME;

    CName caller; // 48
    CName addressee; // 50
    quest::PhoneCallPhase callPhase; // 58
    quest::PhoneCallMode callMode; // 5C
    bool isPlayerTriggered; // 60
    bool isRejectable; // 61
    bool showAvatar; // 62
    uint8_t unk63[0x64 - 0x63]; // 63
    quest::PhoneCallVisuals visuals; // 64
};
RED4EXT_ASSERT_SIZE(TriggerCallRequest, 0x68);
} // namespace quest
using questTriggerCallRequest = quest::TriggerCallRequest;
} // namespace RED4ext

// clang-format on
