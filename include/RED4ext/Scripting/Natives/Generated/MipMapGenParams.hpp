#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct MipMapGenParams
{
    static constexpr const char* NAME = "MipMapGenParams";
    static constexpr const char* ALIAS = NAME;

    bool applyToksvig_ShouldInvChannel; // 00
    uint8_t applyToksvig_Channel; // 01
    uint8_t unk02[0x8 - 0x2]; // 2
    RaRef<CBitmapTexture> applyToksvig_sourceNormalMap; // 08
};
RED4EXT_ASSERT_SIZE(MipMapGenParams, 0x10);
} // namespace RED4ext

// clang-format on
