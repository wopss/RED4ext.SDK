#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct DelayID
{
    static constexpr const char* NAME = "gameDelayID";
    static constexpr const char* ALIAS = "DelayID";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DelayID, 0x8);
} // namespace game
using gameDelayID = game::DelayID;
using DelayID = game::DelayID;
} // namespace RED4ext

// clang-format on
