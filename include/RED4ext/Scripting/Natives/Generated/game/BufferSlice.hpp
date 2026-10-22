#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct BufferSlice
{
    static constexpr const char* NAME = "gameBufferSlice";
    static constexpr const char* ALIAS = NAME;

    uint32_t offset; // 00
    uint32_t combined; // 04
};
RED4EXT_ASSERT_SIZE(BufferSlice, 0x8);
} // namespace game
using gameBufferSlice = game::BufferSlice;
} // namespace RED4ext

// clang-format on
