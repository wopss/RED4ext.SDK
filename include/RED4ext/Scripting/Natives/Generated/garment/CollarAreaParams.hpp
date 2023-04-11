#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace garment
{
struct CollarAreaParams
{
    static constexpr const char* NAME = "garmentCollarAreaParams";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float radiusInCM; // 04
    float radiusForTriangleRemovalInCM; // 08
    float offsetFromSkinInCM; // 0C
    Vector3 offset; // 10
};
RED4EXT_ASSERT_SIZE(CollarAreaParams, 0x1C);
} // namespace garment
using garmentCollarAreaParams = garment::CollarAreaParams;
} // namespace RED4ext

// clang-format on
