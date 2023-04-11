#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct MeatBag : game::Object
{
    static constexpr const char* NAME = "cpMeatBag";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x2C8 - 0x240]; // 240
    CName destructionEffectName; // 2C8
    CName jiggleEffectName; // 2D0
    CName bagBodyBoneName; // 2D8
    CName kinematicBodyBoneName; // 2E0
    CName physicalComponentName; // 2E8
    CName bagHitComponentName; // 2F0
    CName bagDestroyComponentName; // 2F8
    uint8_t unk300[0x308 - 0x300]; // 300
    float rotationLerpFactor; // 308
    uint8_t unk30C[0x320 - 0x30C]; // 30C
};
RED4EXT_ASSERT_SIZE(MeatBag, 0x320);
} // namespace cp
using cpMeatBag = cp::MeatBag;
} // namespace RED4ext

// clang-format on
