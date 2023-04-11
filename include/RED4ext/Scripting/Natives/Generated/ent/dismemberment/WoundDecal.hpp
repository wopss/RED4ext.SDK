#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/ResourceSetMask.hpp>

namespace RED4ext
{
struct IMaterial;

namespace ent::dismemberment
{
struct WoundDecal
{
    static constexpr const char* NAME = "entdismembermentWoundDecal";
    static constexpr const char* ALIAS = NAME;

    Vector3 OffsetA; // 00
    Vector3 OffsetB; // 0C
    float Scale; // 18
    float FadeOrigin; // 1C
    float FadePower; // 20
    ent::dismemberment::ResourceSetMask ResourceSets; // 24
    uint8_t unk26[0x28 - 0x26]; // 26
    RaRef<IMaterial> Material; // 28
};
RED4EXT_ASSERT_SIZE(WoundDecal, 0x30);
} // namespace ent::dismemberment
using entdismembermentWoundDecal = ent::dismemberment::WoundDecal;
} // namespace RED4ext

// clang-format on
