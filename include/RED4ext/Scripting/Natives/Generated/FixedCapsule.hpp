#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct FixedCapsule
{
    static constexpr const char* NAME = "FixedCapsule";
    static constexpr const char* ALIAS = NAME;

    Vector4 PointRadius; // 00
    float Height; // 10
    uint8_t unk14[0x20 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(FixedCapsule, 0x20);
} // namespace RED4ext
