#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct OrbID
{
    static constexpr const char* NAME = "gameinteractionsOrbID";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(OrbID, 0x4);
} // namespace game::interactions
using gameinteractionsOrbID = game::interactions::OrbID;
} // namespace RED4ext

// clang-format on
