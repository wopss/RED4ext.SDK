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
struct __declspec(align(0x10)) SimpleCone : sense::IShape
{
    static constexpr const char* NAME = "senseSimpleCone";
    static constexpr const char* ALIAS = "SenseCone";

    Vector4 position1; // 50
    Vector4 position2; // 60
    float radius1; // 70
    float radius2; // 74
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(SimpleCone, 0x80);
} // namespace sense
using senseSimpleCone = sense::SimpleCone;
using SenseCone = sense::SimpleCone;
} // namespace RED4ext

// clang-format on
