#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/audio/AudioMetadata.hpp>
#include <RED4ext/Types/generated/audio/VehicleCollisionMapItem.hpp>

namespace RED4ext
{
namespace audio { 
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
    DynArray<audio::VehicleCollisionMapItem> collisionSettings; // 78
    uint8_t unk88[0xC8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(VehicleCollisionMap, 0xC8);
} // namespace audio
} // namespace RED4ext
