#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleWheelMaterialsMapItem
{
    static constexpr const char* NAME = "audioVehicleWheelMaterialsMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    float audioMaterialCoeff; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(VehicleWheelMaterialsMapItem, 0x10);
} // namespace audio
using audioVehicleWheelMaterialsMapItem = audio::VehicleWheelMaterialsMapItem;
} // namespace RED4ext

// clang-format on
