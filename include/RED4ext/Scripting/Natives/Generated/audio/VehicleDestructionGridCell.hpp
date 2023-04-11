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
struct VehicleDestructionGridCell
{
    static constexpr const char* NAME = "audioVehicleDestructionGridCell";
    static constexpr const char* ALIAS = NAME;

    CName impactEvent; // 00
    CName impactDetailEvent; // 08
};
RED4EXT_ASSERT_SIZE(VehicleDestructionGridCell, 0x10);
} // namespace audio
using audioVehicleDestructionGridCell = audio::VehicleDestructionGridCell;
} // namespace RED4ext

// clang-format on
