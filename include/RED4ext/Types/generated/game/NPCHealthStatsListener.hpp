#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PuppetStatsListener.hpp>

namespace RED4ext
{
namespace game { 
struct NPCHealthStatsListener : game::PuppetStatsListener
{
    static constexpr const char* NAME = "gameNPCHealthStatsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(NPCHealthStatsListener, 0x68);
} // namespace game
} // namespace RED4ext
