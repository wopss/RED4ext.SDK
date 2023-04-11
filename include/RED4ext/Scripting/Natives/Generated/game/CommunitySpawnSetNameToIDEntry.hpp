#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CommunityID.hpp>

namespace RED4ext
{
namespace game
{
struct CommunitySpawnSetNameToIDEntry
{
    static constexpr const char* NAME = "gameCommunitySpawnSetNameToIDEntry";
    static constexpr const char* ALIAS = NAME;

    game::CommunityID communityId; // 00
    CName nameReference; // 08
};
RED4EXT_ASSERT_SIZE(CommunitySpawnSetNameToIDEntry, 0x10);
} // namespace game
using gameCommunitySpawnSetNameToIDEntry = game::CommunitySpawnSetNameToIDEntry;
} // namespace RED4ext

// clang-format on
