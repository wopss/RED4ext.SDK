#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputState
{
    static constexpr const char* NAME = "gameMuppetInputState";
    static constexpr const char* ALIAS = NAME;

    uint32_t frameId; // 00
    uint8_t unk04[0x18 - 0x4]; // 4
};
RED4EXT_ASSERT_SIZE(MuppetInputState, 0x18);
} // namespace game
using gameMuppetInputState = game::MuppetInputState;
} // namespace RED4ext

// clang-format on
