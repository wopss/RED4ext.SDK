#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetStates
{
    static constexpr const char* NAME = "gameMuppetStates";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x58 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MuppetStates, 0x58);
} // namespace game
using gameMuppetStates = game::MuppetStates;
} // namespace RED4ext

// clang-format on
