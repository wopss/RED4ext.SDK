#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleDestructionGridLayer.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleGridDestruction : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVehicleGridDestruction";
    static constexpr const char* ALIAS = NAME;

    float minGridCellRawChangeThreshold; // 38
    float specificGridCellImpactCooldown; // 3C
    float minGridCellValueToPlayDetailedEvent; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    audio::VehicleDestructionGridLayer bottomLayer; // 48
    audio::VehicleDestructionGridLayer upperLayer; // C8
    uint8_t unk148[0x160 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(VehicleGridDestruction, 0x160);
} // namespace audio
using audioVehicleGridDestruction = audio::VehicleGridDestruction;
} // namespace RED4ext

// clang-format on
