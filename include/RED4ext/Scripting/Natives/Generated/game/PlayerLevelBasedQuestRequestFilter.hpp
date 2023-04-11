#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CustomRequestFilter.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerLevelBasedQuestRequestFilter : game::CustomRequestFilter
{
    static constexpr const char* NAME = "gamePlayerLevelBasedQuestRequestFilter";
    static constexpr const char* ALIAS = "PlayerLevelBasedQuestRequestFilter";

    uint32_t percentMargin; // 08
    uint8_t unk0C[0x18 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(PlayerLevelBasedQuestRequestFilter, 0x18);
} // namespace game
using gamePlayerLevelBasedQuestRequestFilter = game::PlayerLevelBasedQuestRequestFilter;
using PlayerLevelBasedQuestRequestFilter = game::PlayerLevelBasedQuestRequestFilter;
} // namespace RED4ext

// clang-format on
