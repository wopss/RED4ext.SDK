#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IDeviceInteractionManager.hpp>

namespace RED4ext
{
namespace game { 
struct DeviceInteractionManager : game::IDeviceInteractionManager
{
    static constexpr const char* NAME = "gameDeviceInteractionManager";
    static constexpr const char* ALIAS = "DeviceInteractionManager";

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceInteractionManager, 0xE0);
} // namespace game
using DeviceInteractionManager = game::DeviceInteractionManager;
} // namespace RED4ext
