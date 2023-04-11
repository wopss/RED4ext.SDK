#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct StateCallback
{
    static constexpr const char* NAME = "AIbehaviortweakStateCallback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StateCallback, 0x10);
} // namespace AI::behavior::tweak
using AIbehaviortweakStateCallback = AI::behavior::tweak::StateCallback;
} // namespace RED4ext

// clang-format on
