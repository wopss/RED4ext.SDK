#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) DeviceCameraControlComponent : game::Component
{
    static constexpr const char* NAME = "gameDeviceCameraControlComponent";
    static constexpr const char* ALIAS = "DeviceCameraControlComponent";

    uint8_t unkA8[0x130 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(DeviceCameraControlComponent, 0x130);
} // namespace game
using gameDeviceCameraControlComponent = game::DeviceCameraControlComponent;
using DeviceCameraControlComponent = game::DeviceCameraControlComponent;
} // namespace RED4ext

// clang-format on
