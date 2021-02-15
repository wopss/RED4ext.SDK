#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/AI/AIEvent.hpp>
#include <RED4ext/Types/generated/game/StoryTier.hpp>

namespace RED4ext
{
namespace game { 
struct StoryTierChangedEvent : AI::AIEvent
{
    static constexpr const char* NAME = "gameStoryTierChangedEvent";
    static constexpr const char* ALIAS = "StoryTierChangedEvent";

    game::StoryTier newTier; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(StoryTierChangedEvent, 0x58);
} // namespace game
using StoryTierChangedEvent = game::StoryTierChangedEvent;
} // namespace RED4ext
