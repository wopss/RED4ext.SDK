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
struct VehicleDoorsSettings
{
    static constexpr const char* NAME = "audioVehicleDoorsSettings";
    static constexpr const char* ALIAS = NAME;

    CName openEvent; // 00
    CName closeEvent; // 08
};
RED4EXT_ASSERT_SIZE(VehicleDoorsSettings, 0x10);
} // namespace audio
using audioVehicleDoorsSettings = audio::VehicleDoorsSettings;
} // namespace RED4ext

// clang-format on
