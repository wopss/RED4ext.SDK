#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageFontMapping.hpp>

namespace RED4ext
{
namespace ink
{
struct LanguageFontMapper : ISerializable
{
    static constexpr const char* NAME = "inkLanguageFontMapper";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::LanguageFontMapping> mappings; // 30
};
RED4EXT_ASSERT_SIZE(LanguageFontMapper, 0x40);
} // namespace ink
using inkLanguageFontMapper = ink::LanguageFontMapper;
} // namespace RED4ext

// clang-format on
