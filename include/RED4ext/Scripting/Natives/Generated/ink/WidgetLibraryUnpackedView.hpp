#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryItemUnpackedView; }
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct WidgetLibraryUnpackedView : ISerializable
{
    static constexpr const char* NAME = "inkWidgetLibraryUnpackedView";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xA8 - 0x30]; // 30
    DynArray<Handle<ink::WidgetLibraryItemUnpackedView>> libraryItems; // A8
    uint8_t unkB8[0xC8 - 0xB8]; // B8
    DynArray<Ref<ink::WidgetLibraryResource>> externalLibraries; // C8
    uint8_t unkD8[0xF0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(WidgetLibraryUnpackedView, 0xF0);
} // namespace ink
using inkWidgetLibraryUnpackedView = ink::WidgetLibraryUnpackedView;
} // namespace RED4ext

// clang-format on
