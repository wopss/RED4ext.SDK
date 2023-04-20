#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IRPGPrereq.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatPrereq : game::IRPGPrereq
{
    static constexpr const char* NAME = "gameStatPrereq";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType statType; // 48
    float valueToCheck; // 4C
};
RED4EXT_ASSERT_SIZE(StatPrereq, 0x50);
} // namespace game
using gameStatPrereq = game::StatPrereq;
} // namespace RED4ext

// clang-format on
