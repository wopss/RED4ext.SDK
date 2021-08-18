#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct MeatBag : game::Object
{
    static constexpr const char* NAME = "cpMeatBag";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x2B8 - 0x230]; // 230
    CName destructionEffectName; // 2B8
    CName jiggleEffectName; // 2C0
    CName bagBodyBoneName; // 2C8
    CName kinematicBodyBoneName; // 2D0
    CName physicalComponentName; // 2D8
    CName bagHitComponentName; // 2E0
    CName bagDestroyComponentName; // 2E8
    uint8_t unk2F0[0x2F8 - 0x2F0]; // 2F0
    float rotationLerpFactor; // 2F8
    uint8_t unk2FC[0x310 - 0x2FC]; // 2FC
};
RED4EXT_ASSERT_SIZE(MeatBag, 0x310);
} // namespace cp
} // namespace RED4ext
