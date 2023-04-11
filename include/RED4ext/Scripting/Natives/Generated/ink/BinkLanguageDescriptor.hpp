#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageId.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct BinkLanguageDescriptor
{
    static constexpr const char* NAME = "inkBinkLanguageDescriptor";
    static constexpr const char* ALIAS = NAME;

    RaRef<Bink> bink; // 00
    ink::LanguageId languageId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(BinkLanguageDescriptor, 0x10);
} // namespace ink
using inkBinkLanguageDescriptor = ink::BinkLanguageDescriptor;
} // namespace RED4ext

// clang-format on
