#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace ink { struct WidgetBrush; }

namespace ink
{
struct WidgetBrushResource : CResource
{
    static constexpr const char* NAME = "inkWidgetBrushResource";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::WidgetBrush> brush; // 40
};
RED4EXT_ASSERT_SIZE(WidgetBrushResource, 0x50);
} // namespace ink
using inkWidgetBrushResource = ink::WidgetBrushResource;
} // namespace RED4ext

// clang-format on
