#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace interop
{
struct Uint64Pair
{
    static constexpr const char* NAME = "interopUint64Pair";
    static constexpr const char* ALIAS = NAME;

    uint64_t first; // 00
    uint64_t second; // 08
};
RED4EXT_ASSERT_SIZE(Uint64Pair, 0x10);
} // namespace interop
using interopUint64Pair = interop::Uint64Pair;
} // namespace RED4ext

// clang-format on
