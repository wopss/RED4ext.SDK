#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace ink { 
struct WidgetLibraryItem
{
    static constexpr const char* NAME = "inkWidgetLibraryItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    SharedDataBuffer package; // 08
};
RED4EXT_ASSERT_SIZE(WidgetLibraryItem, 0x10);
} // namespace ink
} // namespace RED4ext
