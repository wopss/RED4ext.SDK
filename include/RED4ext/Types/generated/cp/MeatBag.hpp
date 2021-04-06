#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct MeatBag : game::Object
{
    static constexpr const char* NAME = "cpMeatBag";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x2B0 - 0x228]; // 228
    CName destructionEffectName; // 2B0
    CName jiggleEffectName; // 2B8
    CName bagBodyBoneName; // 2C0
    CName kinematicBodyBoneName; // 2C8
    CName physicalComponentName; // 2D0
    CName bagHitComponentName; // 2D8
    CName bagDestroyComponentName; // 2E0
    uint8_t unk2E8[0x2F0 - 0x2E8]; // 2E8
    float rotationLerpFactor; // 2F0
    uint8_t unk2F4[0x308 - 0x2F4]; // 2F4
};
RED4EXT_ASSERT_SIZE(MeatBag, 0x308);
} // namespace cp
} // namespace RED4ext
