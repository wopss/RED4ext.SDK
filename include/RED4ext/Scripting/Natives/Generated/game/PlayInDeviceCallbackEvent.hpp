#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct PlayInDeviceCallbackEvent : red::Event
{
    static constexpr const char* NAME = "gamePlayInDeviceCallbackEvent";
    static constexpr const char* ALIAS = "PlayInDeviceCallbackEvent";

    bool wasPlayInDeviceSuccessful; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PlayInDeviceCallbackEvent, 0x48);
} // namespace game
using gamePlayInDeviceCallbackEvent = game::PlayInDeviceCallbackEvent;
using PlayInDeviceCallbackEvent = game::PlayInDeviceCallbackEvent;
} // namespace RED4ext

// clang-format on
