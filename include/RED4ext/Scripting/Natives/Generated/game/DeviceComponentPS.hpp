#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameDeviceComponentPS";
    static constexpr const char* ALIAS = "DeviceComponentPS";

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(DeviceComponentPS, 0x78);
} // namespace game
using gameDeviceComponentPS = game::DeviceComponentPS;
using DeviceComponentPS = game::DeviceComponentPS;
} // namespace RED4ext

// clang-format on
