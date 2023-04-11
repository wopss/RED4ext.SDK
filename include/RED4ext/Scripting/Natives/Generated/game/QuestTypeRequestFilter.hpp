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
struct QuestTypeRequestFilter : game::CustomRequestFilter
{
    static constexpr const char* NAME = "gameQuestTypeRequestFilter";
    static constexpr const char* ALIAS = "QuestTypeRequestFilter";

    bool includeMainQuests; // 08
    bool includeSideQuests; // 09
    bool includeStreetStories; // 0A
    bool includeCyberPsycho; // 0B
    bool includeContracts; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
};
RED4EXT_ASSERT_SIZE(QuestTypeRequestFilter, 0x10);
} // namespace game
using gameQuestTypeRequestFilter = game::QuestTypeRequestFilter;
using QuestTypeRequestFilter = game::QuestTypeRequestFilter;
} // namespace RED4ext

// clang-format on
