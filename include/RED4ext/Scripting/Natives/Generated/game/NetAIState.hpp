#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct NetAIState
{
    static constexpr const char* NAME = "gameNetAIState";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 00
    int32_t prevValue; // 04
    float time; // 08
};
RED4EXT_ASSERT_SIZE(NetAIState, 0xC);
} // namespace game
using gameNetAIState = game::NetAIState;
} // namespace RED4ext

// clang-format on
