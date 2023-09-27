#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct CompactSpan
{
    static constexpr const char* NAME = "navgendebugCompactSpan";
    static constexpr const char* ALIAS = NAME;

    uint32_t spanData; // 00
};
RED4EXT_ASSERT_SIZE(CompactSpan, 0x4);
} // namespace nav::gendebug
using navgendebugCompactSpan = nav::gendebug::CompactSpan;
} // namespace RED4ext

// clang-format on
