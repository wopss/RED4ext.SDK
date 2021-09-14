#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle { 
struct GarageComponent : game::Component
{
    static constexpr const char* NAME = "vehicleGarageComponent";
    static constexpr const char* ALIAS = "GarageComponent";

    uint8_t unkA8[0x2A8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(GarageComponent, 0x2A8);
} // namespace vehicle
using GarageComponent = vehicle::GarageComponent;
} // namespace RED4ext
