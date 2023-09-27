#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDeviceInteractionManager.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceInteractionManager : game::IDeviceInteractionManager
{
    static constexpr const char* NAME = "gameDeviceInteractionManager";
    static constexpr const char* ALIAS = "DeviceInteractionManager";

    uint8_t unk48[0xF8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceInteractionManager, 0xF8);
} // namespace game
using gameDeviceInteractionManager = game::DeviceInteractionManager;
using DeviceInteractionManager = game::DeviceInteractionManager;
} // namespace RED4ext

// clang-format on
