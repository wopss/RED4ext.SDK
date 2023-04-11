#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryItemUnpackedView; }

namespace ink
{
struct WidgetLibraryItemClipboardData : ISerializable
{
    static constexpr const char* NAME = "inkWidgetLibraryItemClipboardData";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::WidgetLibraryItemUnpackedView> libraryItem; // 30
};
RED4EXT_ASSERT_SIZE(WidgetLibraryItemClipboardData, 0x40);
} // namespace ink
using inkWidgetLibraryItemClipboardData = ink::WidgetLibraryItemClipboardData;
} // namespace RED4ext

// clang-format on
