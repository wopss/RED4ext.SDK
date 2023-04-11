#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace interop
{
struct StringUint64Pair
{
    static constexpr const char* NAME = "interopStringUint64Pair";
    static constexpr const char* ALIAS = NAME;

    CString string; // 00
    uint64_t number; // 20
};
RED4EXT_ASSERT_SIZE(StringUint64Pair, 0x28);
} // namespace interop
using interopStringUint64Pair = interop::StringUint64Pair;
} // namespace RED4ext

// clang-format on
