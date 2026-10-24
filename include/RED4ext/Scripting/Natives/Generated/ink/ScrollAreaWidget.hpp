#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FitToContentDirection.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) ScrollAreaWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkScrollAreaWidget";
    static constexpr const char* ALIAS = "inkScrollArea";

    uint8_t unk240[0x250 - 0x240]; // 240
    float horizontalScrolling; // 250
    float verticalScrolling; // 254
    bool constrainContentPosition; // 258
    bool useInternalMask; // 259
    uint8_t unk25A[0x264 - 0x25A]; // 25A
    ink::FitToContentDirection fitToContentDirection; // 264
    uint8_t unk268[0x270 - 0x268]; // 268
};
RED4EXT_ASSERT_SIZE(ScrollAreaWidget, 0x270);
} // namespace ink
using inkScrollAreaWidget = ink::ScrollAreaWidget;
using inkScrollArea = ink::ScrollAreaWidget;
} // namespace RED4ext

// clang-format on
