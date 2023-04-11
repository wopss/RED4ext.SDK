#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleDoorsSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleDoorsSettingsMetadata
{
    static constexpr const char* NAME = "audioVehicleDoorsSettingsMetadata";
    static constexpr const char* ALIAS = NAME;

    audio::VehicleDoorsSettings door; // 00
    audio::VehicleDoorsSettings trunk; // 10
    audio::VehicleDoorsSettings hood; // 20
};
RED4EXT_ASSERT_SIZE(VehicleDoorsSettingsMetadata, 0x30);
} // namespace audio
using audioVehicleDoorsSettingsMetadata = audio::VehicleDoorsSettingsMetadata;
} // namespace RED4ext

// clang-format on
