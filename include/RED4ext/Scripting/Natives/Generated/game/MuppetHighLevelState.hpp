#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetHighLevelState
{
    static constexpr const char* NAME = "gameMuppetHighLevelState";
    static constexpr const char* ALIAS = NAME;

    bool isDead; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    uint32_t deathFrameId; // 04
};
RED4EXT_ASSERT_SIZE(MuppetHighLevelState, 0x8);
} // namespace game
using gameMuppetHighLevelState = game::MuppetHighLevelState;
} // namespace RED4ext

// clang-format on
