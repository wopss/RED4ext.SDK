#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/IComparisonPrereq.hpp>
#include <RED4ext/Types/generated/game/data/StatPoolType.hpp>

namespace RED4ext
{
namespace game { 
struct StatPoolPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameStatPoolPrereq";
    static constexpr const char* ALIAS = "StatPoolPrereq";

    game::data::StatPoolType statPoolType; // 48
    float valueToCheck; // 4C
};
RED4EXT_ASSERT_SIZE(StatPoolPrereq, 0x50);
} // namespace game
using StatPoolPrereq = game::StatPoolPrereq;
} // namespace RED4ext
