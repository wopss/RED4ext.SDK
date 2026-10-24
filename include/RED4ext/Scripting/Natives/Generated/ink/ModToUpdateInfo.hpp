#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/StaticArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct ModToUpdateInfo
{
    static constexpr const char* NAME = "inkModToUpdateInfo";
    static constexpr const char* ALIAS = "ModToUpdateInfo";

    CString modTitle; // 00
    CString authorName; // 20
    CString modLogoPath; // 40
    int64_t id; // 60
    StaticArray<bool, 4> actionsNeeded; // 68
};
RED4EXT_ASSERT_SIZE(ModToUpdateInfo, 0x70);
} // namespace ink
using inkModToUpdateInfo = ink::ModToUpdateInfo;
using ModToUpdateInfo = ink::ModToUpdateInfo;
} // namespace RED4ext

// clang-format on
