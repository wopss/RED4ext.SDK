#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct BinkVideoSummary
{
    static constexpr const char* NAME = "gameBinkVideoSummary";
    static constexpr const char* ALIAS = "BinkVideoSummary";

    uint32_t currentTimeMs; // 00
    uint32_t totalTimeMs; // 04
    uint32_t currentFrame; // 08
    uint32_t totalFrames; // 0C
    uint32_t frameRate; // 10
};
RED4EXT_ASSERT_SIZE(BinkVideoSummary, 0x14);
} // namespace game
using gameBinkVideoSummary = game::BinkVideoSummary;
using BinkVideoSummary = game::BinkVideoSummary;
} // namespace RED4ext

// clang-format on
