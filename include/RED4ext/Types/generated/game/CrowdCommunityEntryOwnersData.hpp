#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/CrowdCommunityEntryOwnerInfo.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdCommunityEntryOwnersData
{
    static constexpr const char* NAME = "gameCrowdCommunityEntryOwnersData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::CrowdCommunityEntryOwnerInfo> communityOwnersData; // 00
};
RED4EXT_ASSERT_SIZE(CrowdCommunityEntryOwnersData, 0x10);
} // namespace game
} // namespace RED4ext
