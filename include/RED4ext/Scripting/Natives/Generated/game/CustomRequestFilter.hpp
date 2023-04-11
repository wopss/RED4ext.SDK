#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CustomRequestFilter
{
    static constexpr const char* NAME = "gameCustomRequestFilter";
    static constexpr const char* ALIAS = "CustomRequestFilter";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CustomRequestFilter, 0x8);
} // namespace game
using gameCustomRequestFilter = game::CustomRequestFilter;
using CustomRequestFilter = game::CustomRequestFilter;
} // namespace RED4ext

// clang-format on
