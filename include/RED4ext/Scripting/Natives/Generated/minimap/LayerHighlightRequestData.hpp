#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>

namespace RED4ext
{
namespace minimap
{
struct __declspec(align(0x10)) LayerHighlightRequestData
{
    static constexpr const char* NAME = "minimapLayerHighlightRequestData";
    static constexpr const char* ALIAS = "LayerHighlightRequestData";

    HDRColor highlightColor; // 00
    float highlightDuration; // 10
    float blinkCount; // 14
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(LayerHighlightRequestData, 0x20);
} // namespace minimap
using minimapLayerHighlightRequestData = minimap::LayerHighlightRequestData;
using LayerHighlightRequestData = minimap::LayerHighlightRequestData;
} // namespace RED4ext

// clang-format on
