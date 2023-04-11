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
struct DeviceVisibilityChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameDeviceVisibilityChangedEvent";
    static constexpr const char* ALIAS = "DeviceVisibilityChangedEvent";

    uint32_t isVisible; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(DeviceVisibilityChangedEvent, 0x48);
} // namespace game
using gameDeviceVisibilityChangedEvent = game::DeviceVisibilityChangedEvent;
using DeviceVisibilityChangedEvent = game::DeviceVisibilityChangedEvent;
} // namespace RED4ext

// clang-format on
