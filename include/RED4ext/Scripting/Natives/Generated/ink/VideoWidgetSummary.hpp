#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct VideoWidgetSummary
{
    static constexpr const char* NAME = "inkVideoWidgetSummary";
    static constexpr const char* ALIAS = "VideoWidgetSummary";

    uint32_t width; // 00
    uint32_t height; // 04
    uint32_t currentTimeMs; // 08
    uint32_t totalTimeMs; // 0C
    uint32_t currentFrame; // 10
    uint32_t totalFrames; // 14
    uint32_t frameRate; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(VideoWidgetSummary, 0x20);
} // namespace ink
using inkVideoWidgetSummary = ink::VideoWidgetSummary;
using VideoWidgetSummary = ink::VideoWidgetSummary;
} // namespace RED4ext

// clang-format on
