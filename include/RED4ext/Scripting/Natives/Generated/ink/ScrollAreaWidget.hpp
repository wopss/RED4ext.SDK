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

    uint8_t unk230[0x240 - 0x230]; // 230
    float horizontalScrolling; // 240
    float verticalScrolling; // 244
    bool constrainContentPosition; // 248
    bool useInternalMask; // 249
    uint8_t unk24A[0x254 - 0x24A]; // 24A
    ink::FitToContentDirection fitToContentDirection; // 254
    uint8_t unk258[0x260 - 0x258]; // 258
};
RED4EXT_ASSERT_SIZE(ScrollAreaWidget, 0x260);
} // namespace ink
using inkScrollAreaWidget = ink::ScrollAreaWidget;
using inkScrollArea = ink::ScrollAreaWidget;
} // namespace RED4ext

// clang-format on
