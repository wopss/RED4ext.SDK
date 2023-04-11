#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct AreaProvider
{
    static constexpr const char* NAME = "gameAreaProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AreaProvider, 0x18);
} // namespace game
using gameAreaProvider = game::AreaProvider;
} // namespace RED4ext

// clang-format on
