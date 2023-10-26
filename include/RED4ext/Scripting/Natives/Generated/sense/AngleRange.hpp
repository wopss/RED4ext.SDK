#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/IShape.hpp>

namespace RED4ext
{
namespace sense
{
struct __declspec(align(0x10)) AngleRange : sense::IShape
{
    static constexpr const char* NAME = "senseAngleRange";
    static constexpr const char* ALIAS = "SenseAngleRange";

    Vector4 position; // 50
    float angle; // 60
    float range; // 64
    float halfHeight; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(AngleRange, 0x70);
} // namespace sense
using senseAngleRange = sense::AngleRange;
using SenseAngleRange = sense::AngleRange;
} // namespace RED4ext

// clang-format on
