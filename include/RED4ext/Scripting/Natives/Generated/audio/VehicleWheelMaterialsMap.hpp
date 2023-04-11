#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleWheelMaterialsMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleWheelMaterialsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVehicleWheelMaterialsMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::VehicleWheelMaterialsMapItem> vehicleWheelMaterials; // 38
    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWheelMaterialsMap, 0x70);
} // namespace audio
using audioVehicleWheelMaterialsMap = audio::VehicleWheelMaterialsMap;
} // namespace RED4ext

// clang-format on
