#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct IMuppetInputAction
{
    static constexpr const char* NAME = "gameIMuppetInputAction";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IMuppetInputAction, 0x8);
} // namespace game
using gameIMuppetInputAction = game::IMuppetInputAction;
} // namespace RED4ext

// clang-format on
