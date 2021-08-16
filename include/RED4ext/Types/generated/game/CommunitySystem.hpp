#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ICommunitySystem.hpp>

namespace RED4ext
{
namespace game { 
struct CommunitySystem : game::ICommunitySystem
{
    static constexpr const char* NAME = "gameCommunitySystem";
    static constexpr const char* ALIAS = "CommunitySystem";

    uint8_t unk48[0x108 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CommunitySystem, 0x108);
} // namespace game
using CommunitySystem = game::CommunitySystem;
} // namespace RED4ext
