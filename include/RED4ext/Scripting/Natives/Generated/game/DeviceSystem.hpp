#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDeviceSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceSystem : game::IDeviceSystem
{
    static constexpr const char* NAME = "gameDeviceSystem";
    static constexpr const char* ALIAS = "DeviceSystem";

    uint8_t unk48[0x148 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceSystem, 0x148);
} // namespace game
using gameDeviceSystem = game::DeviceSystem;
using DeviceSystem = game::DeviceSystem;
} // namespace RED4ext

// clang-format on
