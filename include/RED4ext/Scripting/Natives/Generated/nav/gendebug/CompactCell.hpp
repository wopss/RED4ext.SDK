#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct CompactCell
{
    static constexpr const char* NAME = "navgendebugCompactCell";
    static constexpr const char* ALIAS = NAME;

    uint64_t cellData; // 00
};
RED4EXT_ASSERT_SIZE(CompactCell, 0x8);
} // namespace nav::gendebug
using navgendebugCompactCell = nav::gendebug::CompactCell;
} // namespace RED4ext

// clang-format on
