#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageId.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct LanguageOverrideProvider : ink::UserData
{
    static constexpr const char* NAME = "inkLanguageOverrideProvider";
    static constexpr const char* ALIAS = NAME;

    ink::LanguageId languageId; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(LanguageOverrideProvider, 0x48);
} // namespace ink
using inkLanguageOverrideProvider = ink::LanguageOverrideProvider;
} // namespace RED4ext

// clang-format on
