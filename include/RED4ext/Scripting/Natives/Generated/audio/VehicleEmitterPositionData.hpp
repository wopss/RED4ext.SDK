#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleEmitterPositionData
{
    static constexpr const char* NAME = "audioVehicleEmitterPositionData";
    static constexpr const char* ALIAS = NAME;

    Vector3 engineEmitterPosition; // 00
    Vector3 centralEmitterPosition; // 0C
    Vector3 exaustEmitterPosition; // 18
    Vector3 hoodEmitterPosition; // 24
    Vector3 trunkEmitterPosition; // 30
    Vector3 wheel1Position; // 3C
    Vector3 wheel2Position; // 48
    Vector3 wheel3Position; // 54
    Vector3 wheel4Position; // 60
};
RED4EXT_ASSERT_SIZE(VehicleEmitterPositionData, 0x6C);
} // namespace audio
using audioVehicleEmitterPositionData = audio::VehicleEmitterPositionData;
} // namespace RED4ext

// clang-format on
