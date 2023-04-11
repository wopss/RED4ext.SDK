#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace garment
{
struct HiddenTrianglesRemovalParams
{
    static constexpr const char* NAME = "garmentHiddenTrianglesRemovalParams";
    static constexpr const char* ALIAS = NAME;

    float garmentBorderThreshold; // 00
    float rayLengthInCM; // 04
    float rayLengthMorphOffsetFactor; // 08
    bool removeHiddenTriangles; // 0C
    bool removeHiddenTrianglesRasterization; // 0D
    uint8_t unk0E[0x10 - 0xE]; // E
};
RED4EXT_ASSERT_SIZE(HiddenTrianglesRemovalParams, 0x10);
} // namespace garment
using garmentHiddenTrianglesRemovalParams = garment::HiddenTrianglesRemovalParams;
} // namespace RED4ext

// clang-format on
