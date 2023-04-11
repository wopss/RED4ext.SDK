#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DisplayMode.hpp>

namespace RED4ext
{
namespace ink
{
struct CreditsSectionEntry
{
    static constexpr const char* NAME = "inkCreditsSectionEntry";
    static constexpr const char* ALIAS = NAME;

    ink::DisplayMode displayMode; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString sectionTitle; // 08
    DynArray<CString> names; // 28
};
RED4EXT_ASSERT_SIZE(CreditsSectionEntry, 0x38);
} // namespace ink
using inkCreditsSectionEntry = ink::CreditsSectionEntry;
} // namespace RED4ext

// clang-format on
