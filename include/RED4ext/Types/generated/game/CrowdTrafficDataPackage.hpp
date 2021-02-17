#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/CompiledCrowdTrafficData.hpp>
#include <RED4ext/Types/generated/game/CrowdCommunityEntryOwnersData.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdTrafficDataPackage
{
    static constexpr const char* NAME = "gameCrowdTrafficDataPackage";
    static constexpr const char* ALIAS = NAME;

    game::CrowdCommunityEntryOwnersData crowdEntryOwners; // 00
    game::CompiledCrowdTrafficData crowdTrafficData; // 10
};
RED4EXT_ASSERT_SIZE(CrowdTrafficDataPackage, 0x20);
} // namespace game
} // namespace RED4ext
