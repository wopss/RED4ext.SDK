#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/game/StatPoolData.hpp>
#include <RED4ext/Types/generated/game/StatsObjectID.hpp>

namespace RED4ext
{
namespace game { 
struct StatPoolsSystemSave : ISerializable
{
    static constexpr const char* NAME = "gameStatPoolsSystemSave";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatsObjectID> mapping; // 30
    DynArray<game::StatPoolData> statPools; // 40
};
RED4EXT_ASSERT_SIZE(StatPoolsSystemSave, 0x50);
} // namespace game
} // namespace RED4ext
