#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct CutCone
{
    static constexpr const char* NAME = "CutCone";
    static constexpr const char* ALIAS = NAME;

    Vector4 positionAndRadius1; // 00
    Vector4 normalAndRadius2; // 10
    float height; // 20
    uint8_t unk24[0x30 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(CutCone, 0x30);
} // namespace RED4ext
