#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CoveringArc
{
    static constexpr const char* NAME = "gameCoveringArc";
    static constexpr const char* ALIAS = NAME;

    float leftAngle; // 00
    float rightAngle; // 04
    float verticalAngle; // 08
};
RED4EXT_ASSERT_SIZE(CoveringArc, 0xC);
} // namespace game
using gameCoveringArc = game::CoveringArc;
} // namespace RED4ext

// clang-format on
