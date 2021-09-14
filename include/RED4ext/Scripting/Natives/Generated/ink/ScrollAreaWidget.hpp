#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FitToContentDirection.hpp>

namespace RED4ext
{
namespace ink { 
struct ScrollAreaWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkScrollAreaWidget";
    static constexpr const char* ALIAS = "inkScrollArea";

    uint8_t unk220[0x230 - 0x220]; // 220
    float horizontalScrolling; // 230
    float verticalScrolling; // 234
    bool constrainContentPosition; // 238
    bool useInternalMask; // 239
    uint8_t unk23A[0x244 - 0x23A]; // 23A
    ink::FitToContentDirection fitToContentDirection; // 244
    uint8_t unk248[0x250 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(ScrollAreaWidget, 0x250);
} // namespace ink
using inkScrollArea = ink::ScrollAreaWidget;
} // namespace RED4ext
