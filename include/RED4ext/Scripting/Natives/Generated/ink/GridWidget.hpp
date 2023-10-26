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

    ink::EOrientation orientation; // 230
    uint8_t unk231[0x234 - 0x231]; // 231
    ink::Margin childPadding; // 234
    Vector2 childSizeStep; // 244
    uint8_t unk24C[0x280 - 0x24C]; // 24C
};
RED4EXT_ASSERT_SIZE(GridWidget, 0x280);
} // namespace ink
using inkGridWidget = ink::GridWidget;
using inkGrid = ink::GridWidget;
} // namespace RED4ext

// clang-format on
