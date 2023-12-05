#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) ImpactPointData
{
    static constexpr const char* NAME = "entImpactPointData";
    static constexpr const char* ALIAS = "ImpactPointData";

    WorldPosition worldPosition; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Vector4 worldNormal; // 10
    float forceMagnitude; // 20
    float impulseMagnitude; // 24
    float maxForceMagnitude; // 28
    float maxImpulseMagnitude; // 2C
};
RED4EXT_ASSERT_SIZE(ImpactPointData, 0x30);
} // namespace ent
using entImpactPointData = ent::ImpactPointData;
using ImpactPointData = ent::ImpactPointData;
} // namespace RED4ext

// clang-format on
