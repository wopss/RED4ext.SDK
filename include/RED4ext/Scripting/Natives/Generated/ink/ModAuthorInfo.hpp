#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct ModAuthorInfo
{
    static constexpr const char* NAME = "inkModAuthorInfo";
    static constexpr const char* ALIAS = "ModAuthorInfo";

    int64_t authorId; // 00
    CString username; // 08
};
RED4EXT_ASSERT_SIZE(ModAuthorInfo, 0x28);
} // namespace ink
using inkModAuthorInfo = ink::ModAuthorInfo;
using ModAuthorInfo = ink::ModAuthorInfo;
} // namespace RED4ext

// clang-format on
