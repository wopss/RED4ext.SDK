#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct AIDirectorTensionAnalyzer
{
    static constexpr const char* NAME = "gameAIDirectorTensionAnalyzer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x80 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AIDirectorTensionAnalyzer, 0x80);
} // namespace game
using gameAIDirectorTensionAnalyzer = game::AIDirectorTensionAnalyzer;
} // namespace RED4ext

// clang-format on
