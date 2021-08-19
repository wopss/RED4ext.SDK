#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { 
struct WidgetLibraryItem
{
    static constexpr const char* NAME = "inkWidgetLibraryItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    SharedDataBuffer package; // 08
    DataBuffer packageData; // 10
};
RED4EXT_ASSERT_SIZE(WidgetLibraryItem, 0x38);
} // namespace ink
} // namespace RED4ext
