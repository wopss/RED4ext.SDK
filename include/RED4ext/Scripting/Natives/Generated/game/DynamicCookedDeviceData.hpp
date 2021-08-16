#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CookedDeviceData.hpp>

namespace RED4ext
{
namespace game { 
struct DynamicCookedDeviceData : game::CookedDeviceData
{
    static constexpr const char* NAME = "gameDynamicCookedDeviceData";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 40
};
RED4EXT_ASSERT_SIZE(DynamicCookedDeviceData, 0x48);
} // namespace game
} // namespace RED4ext
