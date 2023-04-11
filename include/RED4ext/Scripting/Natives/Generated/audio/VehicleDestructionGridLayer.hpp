#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleDestructionGridCell.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleDestructionGridLayer
{
    static constexpr const char* NAME = "audioVehicleDestructionGridLayer";
    static constexpr const char* ALIAS = NAME;

    audio::VehicleDestructionGridCell backLeft; // 00
    audio::VehicleDestructionGridCell backRight; // 10
    audio::VehicleDestructionGridCell centerBackLeft; // 20
    audio::VehicleDestructionGridCell centerBackRight; // 30
    audio::VehicleDestructionGridCell centerForwardLeft; // 40
    audio::VehicleDestructionGridCell centerForwardRight; // 50
    audio::VehicleDestructionGridCell frontLeft; // 60
    audio::VehicleDestructionGridCell frontRight; // 70
};
RED4EXT_ASSERT_SIZE(VehicleDestructionGridLayer, 0x80);
} // namespace audio
using audioVehicleDestructionGridLayer = audio::VehicleDestructionGridLayer;
} // namespace RED4ext

// clang-format on
