#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace save
{
struct ModioModSavedInfo
{
    static constexpr const char* NAME = "saveModioModSavedInfo";
    static constexpr const char* ALIAS = NAME;

    int64_t modID; // 00
    CString modName; // 08
    CString authorName; // 28
};
RED4EXT_ASSERT_SIZE(ModioModSavedInfo, 0x48);
} // namespace save
using saveModioModSavedInfo = save::ModioModSavedInfo;
} // namespace RED4ext

// clang-format on
