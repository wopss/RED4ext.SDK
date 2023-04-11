#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct TypographyResource : CResource
{
    static constexpr const char* NAME = "inkTypographyResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::LanguageDefinition> languages; // 40
};
RED4EXT_ASSERT_SIZE(TypographyResource, 0x50);
} // namespace ink
using inkTypographyResource = ink::TypographyResource;
} // namespace RED4ext

// clang-format on
