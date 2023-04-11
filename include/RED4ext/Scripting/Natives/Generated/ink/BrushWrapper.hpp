#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct WidgetBrush; }
namespace ink { struct WidgetBrushResource; }

namespace ink
{
struct BrushWrapper
{
    static constexpr const char* NAME = "inkBrushWrapper";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::WidgetBrush> brush; // 00
    Ref<ink::WidgetBrushResource> externalBrush; // 10
};
RED4EXT_ASSERT_SIZE(BrushWrapper, 0x28);
} // namespace ink
using inkBrushWrapper = ink::BrushWrapper;
} // namespace RED4ext

// clang-format on
