#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct SignalId
{
    static constexpr const char* NAME = "gameSignalId";
    static constexpr const char* ALIAS = NAME;

    uint16_t value; // 00
};
RED4EXT_ASSERT_SIZE(SignalId, 0x2);
} // namespace game
using gameSignalId = game::SignalId;
} // namespace RED4ext

// clang-format on
