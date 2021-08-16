#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct MinigameNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questMinigameNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    bool start; // 48
    bool skipSummaryScreen; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    game::EntityReference networkRef; // 50
};
RED4EXT_ASSERT_SIZE(MinigameNodeDefinition, 0x88);
} // namespace quest
} // namespace RED4ext
