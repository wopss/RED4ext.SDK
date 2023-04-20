#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryResourceWrapper.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetLibraryReference
{
    static constexpr const char* NAME = "inkWidgetLibraryReference";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetLibraryResourceWrapper widgetLibrary; // 00
    CName widgetItem; // 08
};
RED4EXT_ASSERT_SIZE(WidgetLibraryReference, 0x10);
} // namespace ink
using inkWidgetLibraryReference = ink::WidgetLibraryReference;
} // namespace RED4ext

// clang-format on
