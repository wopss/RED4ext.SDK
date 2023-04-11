#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct PlayerCallbacks
{
    static constexpr const char* NAME = "AIbehaviortweakPlayerCallbacks";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(PlayerCallbacks, 0x50);
} // namespace AI::behavior::tweak
using AIbehaviortweakPlayerCallbacks = AI::behavior::tweak::PlayerCallbacks;
} // namespace RED4ext

// clang-format on
