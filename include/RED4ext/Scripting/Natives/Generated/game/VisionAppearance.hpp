#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModePatternType.hpp>

namespace RED4ext
{
namespace game
{
struct VisionAppearance
{
    static constexpr const char* NAME = "gameVisionAppearance";
    static constexpr const char* ALIAS = "VisionAppearance";

    int32_t fill; // 00
    int32_t outline; // 04
    bool showThroughWalls; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    game::VisionModePatternType patternType; // 0C
};
RED4EXT_ASSERT_SIZE(VisionAppearance, 0x10);
} // namespace game
using gameVisionAppearance = game::VisionAppearance;
using VisionAppearance = game::VisionAppearance;
} // namespace RED4ext

// clang-format on
