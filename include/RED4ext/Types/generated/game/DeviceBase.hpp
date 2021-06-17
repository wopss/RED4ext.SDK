#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct DeviceBase : game::Object
{
    static constexpr const char* NAME = "gameDeviceBase";
    static constexpr const char* ALIAS = "DeviceBase";

    uint8_t unk230[0x238 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(DeviceBase, 0x238);
} // namespace game
using DeviceBase = game::DeviceBase;
} // namespace RED4ext
