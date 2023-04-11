#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct InputTriggerState
{
    static constexpr const char* NAME = "gameInputTriggerState";
    static constexpr const char* ALIAS = "InputTriggerState";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(InputTriggerState, 0x8);
} // namespace game
using gameInputTriggerState = game::InputTriggerState;
using InputTriggerState = game::InputTriggerState;
} // namespace RED4ext

// clang-format on
