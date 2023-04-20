#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct WidgetLibraryResourceWrapper
{
    static constexpr const char* NAME = "inkWidgetLibraryResourceWrapper";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::WidgetLibraryResource> library; // 00
};
RED4EXT_ASSERT_SIZE(WidgetLibraryResourceWrapper, 0x8);
} // namespace ink
using inkWidgetLibraryResourceWrapper = ink::WidgetLibraryResourceWrapper;
} // namespace RED4ext

// clang-format on
