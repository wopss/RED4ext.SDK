#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryItemInstance; }

namespace ink
{
struct WidgetLibraryItemUnpackedView : ISerializable
{
    static constexpr const char* NAME = "inkWidgetLibraryItemUnpackedView";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    Handle<ink::WidgetLibraryItemInstance> instance; // 38
};
RED4EXT_ASSERT_SIZE(WidgetLibraryItemUnpackedView, 0x48);
} // namespace ink
using inkWidgetLibraryItemUnpackedView = ink::WidgetLibraryItemUnpackedView;
} // namespace RED4ext

// clang-format on
