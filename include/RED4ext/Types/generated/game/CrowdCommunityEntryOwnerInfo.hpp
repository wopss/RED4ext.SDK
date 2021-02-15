#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/CommunityID.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdCommunityEntryOwnerInfo
{
    static constexpr const char* NAME = "gameCrowdCommunityEntryOwnerInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> crowdEntryNames; // 00
    game::CommunityID communityId; // 10
};
RED4EXT_ASSERT_SIZE(CrowdCommunityEntryOwnerInfo, 0x18);
} // namespace game
} // namespace RED4ext
