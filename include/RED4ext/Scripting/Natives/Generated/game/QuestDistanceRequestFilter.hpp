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
struct QuestDistanceRequestFilter : game::CustomRequestFilter
{
    static constexpr const char* NAME = "gameQuestDistanceRequestFilter";
    static constexpr const char* ALIAS = "QuestDistanceRequestFilter";

    float distanceSquared; // 08
    uint8_t unk0C[0x40 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(QuestDistanceRequestFilter, 0x40);
} // namespace game
using gameQuestDistanceRequestFilter = game::QuestDistanceRequestFilter;
using QuestDistanceRequestFilter = game::QuestDistanceRequestFilter;
} // namespace RED4ext

// clang-format on
