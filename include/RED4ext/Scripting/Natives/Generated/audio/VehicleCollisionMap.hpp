#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleCollisionMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleCollisionMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVehicleCollisionMap";
    static constexpr const char* ALIAS = NAME;

    float minImpactVelocityThreshold; // 38
    float scrapingMinTangentialVelocityThreshold; // 3C
    float scrapingMaxCollisionCooldown; // 40
    float scrapingMinVehicleUpCollisionContactAngle; // 44
    float minRumbleVelocityThreshold; // 48
    float rumbleCooldown; // 4C
    bool useScrapingMinVehicleUpCollisionContactAngle; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName explosionEvent; // 58
    CName bigFireEvent; // 60
    CName engineFireEvent; // 68
    CName coolerDamageEvent; // 70
    CName interiorCollisionEvent; // 78
    DynArray<audio::VehicleCollisionMapItem> collisionSettings; // 80
    uint8_t unk90[0xD0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(VehicleCollisionMap, 0xD0);
} // namespace audio
using audioVehicleCollisionMap = audio::VehicleCollisionMap;
} // namespace RED4ext

// clang-format on
