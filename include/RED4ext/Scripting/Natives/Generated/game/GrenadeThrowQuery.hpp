#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) GrenadeThrowQuery
{
    static constexpr const char* NAME = "gameGrenadeThrowQuery";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1D0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GrenadeThrowQuery, 0x1D0);
} // namespace game
using gameGrenadeThrowQuery = game::GrenadeThrowQuery;
} // namespace RED4ext

// clang-format on
