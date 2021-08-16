#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleProperty.hpp>

namespace RED4ext
{
namespace ink { 
struct Style
{
    static constexpr const char* NAME = "inkStyle";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CName styleID; // 08
    CName state; // 10
    DynArray<ink::StyleProperty> properties; // 18
};
RED4EXT_ASSERT_SIZE(Style, 0x28);
} // namespace ink
} // namespace RED4ext
