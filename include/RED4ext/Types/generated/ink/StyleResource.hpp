#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/ink/Style.hpp>
#include <RED4ext/Types/generated/ink/StyleTheme.hpp>

namespace RED4ext
{
namespace ink { struct StyleResource; }

namespace ink { 
struct StyleResource : CResource
{
    static constexpr const char* NAME = "inkStyleResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::Style> styles; // 40
    DynArray<ink::StyleTheme> themes; // 50
    DynArray<Ref<ink::StyleResource>> styleImports; // 60
    bool hideInInheritingStyles; // 70
    uint8_t unk71[0xB0 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(StyleResource, 0xB0);
} // namespace ink
} // namespace RED4ext
