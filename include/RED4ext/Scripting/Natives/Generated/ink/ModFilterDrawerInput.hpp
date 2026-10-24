#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct ModFilterDrawerInput
{
    static constexpr const char* NAME = "inkModFilterDrawerInput";
    static constexpr const char* ALIAS = "ModFilterDrawerInput";

    CString folderNameTextLocKey; // 00
    bool bIsLanguageFilter; // 20
    bool bAllowMultipleSelection; // 21
    uint8_t unk22[0x28 - 0x22]; // 22
    DynArray<CString> listOfFilterItemNames; // 28
    DynArray<CString> listOfFilterItemLocKeys; // 38
};
RED4EXT_ASSERT_SIZE(ModFilterDrawerInput, 0x48);
} // namespace ink
using inkModFilterDrawerInput = ink::ModFilterDrawerInput;
using ModFilterDrawerInput = ink::ModFilterDrawerInput;
} // namespace RED4ext

// clang-format on
