#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IStatPoolsSystem.hpp>

namespace RED4ext
{
namespace game { 
struct StatPoolsSystem : game::IStatPoolsSystem
{
    static constexpr const char* NAME = "gameStatPoolsSystem";
    static constexpr const char* ALIAS = "StatPoolsSystem";

    uint8_t unk48[0x198 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatPoolsSystem, 0x198);
} // namespace game
using StatPoolsSystem = game::StatPoolsSystem;
} // namespace RED4ext
