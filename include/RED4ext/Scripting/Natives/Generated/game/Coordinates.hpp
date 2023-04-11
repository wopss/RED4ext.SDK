#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct Coordinates
{
    static constexpr const char* NAME = "gameCoordinates";
    static constexpr const char* ALIAS = "Coordinates";

    int32_t latitude; // 00
    int32_t longitude; // 04
};
RED4EXT_ASSERT_SIZE(Coordinates, 0x8);
} // namespace game
using gameCoordinates = game::Coordinates;
using Coordinates = game::Coordinates;
} // namespace RED4ext

// clang-format on
