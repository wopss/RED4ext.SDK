#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct CommunityID
{
    static constexpr const char* NAME = "gameCommunityID";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityId; // 00
};
RED4EXT_ASSERT_SIZE(CommunityID, 0x8);
} // namespace game
using gameCommunityID = game::CommunityID;
} // namespace RED4ext

// clang-format on
