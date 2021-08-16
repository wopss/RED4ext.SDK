#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/CustomRequestFilter.hpp>

namespace RED4ext
{
namespace game { 
struct QuestTypeRequestFilter : game::CustomRequestFilter
{
    static constexpr const char* NAME = "gameQuestTypeRequestFilter";
    static constexpr const char* ALIAS = "QuestTypeRequestFilter";

    bool includeMainQuests; // 08
    bool includeSideQuests; // 09
    bool includeStreetStories; // 0A
    bool includeContracts; // 0B
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(QuestTypeRequestFilter, 0x10);
} // namespace game
using QuestTypeRequestFilter = game::QuestTypeRequestFilter;
} // namespace RED4ext
