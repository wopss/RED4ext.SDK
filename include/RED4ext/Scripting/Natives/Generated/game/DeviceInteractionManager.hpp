#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDeviceInteractionManager.hpp>

namespace RED4ext
{
namespace game { 
struct DeviceInteractionManager : game::IDeviceInteractionManager
{
    static constexpr const char* NAME = "gameDeviceInteractionManager";
    static constexpr const char* ALIAS = "DeviceInteractionManager";

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceInteractionManager, 0xE8);
} // namespace game
using DeviceInteractionManager = game::DeviceInteractionManager;
} // namespace RED4ext
