#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
struct ETextureChannel
{
    uint8_t TextureChannel_R : 1; // 0
    uint8_t TextureChannel_G : 1; // 1
    uint8_t TextureChannel_B : 1; // 2
    uint8_t TextureChannel_A : 1; // 3
    uint8_t b4 : 1; // 4
    uint8_t b5 : 1; // 5
    uint8_t b6 : 1; // 6
    uint8_t b7 : 1; // 7
};
RED4EXT_ASSERT_SIZE(ETextureChannel, 0x1);
} // namespace RED4ext

// clang-format on
