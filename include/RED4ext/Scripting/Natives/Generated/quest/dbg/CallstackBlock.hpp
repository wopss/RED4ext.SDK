#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace quest::dbg
{
struct CallstackBlock
{
    static constexpr const char* NAME = "questdbgCallstackBlock";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint64_t id; // 08
    uint64_t parentId; // 10
};
RED4EXT_ASSERT_SIZE(CallstackBlock, 0x18);
} // namespace quest::dbg
using questdbgCallstackBlock = quest::dbg::CallstackBlock;
} // namespace RED4ext

// clang-format on
