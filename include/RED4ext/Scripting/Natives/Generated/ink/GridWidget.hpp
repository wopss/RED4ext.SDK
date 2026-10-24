#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EOrientation.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) GridWidget : ink::CompoundWidget
{
    static constexpr const char* NAME = "inkGridWidget";
    static constexpr const char* ALIAS = "inkGrid";

    ink::EOrientation orientation; // 240
    uint8_t unk241[0x244 - 0x241]; // 241
    ink::Margin childPadding; // 244
    Vector2 childSizeStep; // 254
    uint8_t unk25C[0x290 - 0x25C]; // 25C
};
RED4EXT_ASSERT_SIZE(GridWidget, 0x290);
} // namespace ink
using inkGridWidget = ink::GridWidget;
using inkGrid = ink::GridWidget;
} // namespace RED4ext

// clang-format on
