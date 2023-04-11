#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct WeaponsReplicatedState
{
    static constexpr const char* NAME = "gameWeaponsReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(WeaponsReplicatedState, 0x18);
} // namespace game
using gameWeaponsReplicatedState = game::WeaponsReplicatedState;
} // namespace RED4ext

// clang-format on
