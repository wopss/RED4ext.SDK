#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileCollision_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Pierce_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataPierce_Record";
    static constexpr const char* ALIAS = "Pierce_Record";

};
RED4EXT_ASSERT_SIZE(Pierce_Record, 0x70);
} // namespace game::data
using gamedataPierce_Record = game::data::Pierce_Record;
using Pierce_Record = game::data::Pierce_Record;
} // namespace RED4ext

// clang-format on
