#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Style.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleTheme.hpp>

namespace RED4ext
{

namespace ink
{
struct StyleResource : CResource
{
    static constexpr const char* NAME = "inkStyleResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::Style> styles; // 40
    DynArray<ink::StyleTheme> themes; // 50
    DynArray<ink::StyleOverride> overrides; // 60
    DynArray<Ref<ink::StyleResource>> styleImports; // 70
    bool hideInInheritingStyles; // 80
    uint8_t unk81[0xC0 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(StyleResource, 0xC0);
} // namespace ink
using inkStyleResource = ink::StyleResource;
} // namespace RED4ext

// clang-format on
