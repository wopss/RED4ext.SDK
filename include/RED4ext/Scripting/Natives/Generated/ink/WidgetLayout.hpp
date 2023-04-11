#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EAnchor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ESizeRule.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetLayout
{
    static constexpr const char* NAME = "inkWidgetLayout";
    static constexpr const char* ALIAS = NAME;

    ink::Margin padding; // 00
    ink::Margin margin; // 10
    Vector2 anchorPoint; // 20
    float sizeCoefficient; // 28
    ink::EHorizontalAlign HAlign; // 2C
    ink::EVerticalAlign VAlign; // 2D
    ink::EAnchor anchor; // 2E
    ink::ESizeRule sizeRule; // 2F
};
RED4EXT_ASSERT_SIZE(WidgetLayout, 0x30);
} // namespace ink
using inkWidgetLayout = ink::WidgetLayout;
} // namespace RED4ext

// clang-format on
