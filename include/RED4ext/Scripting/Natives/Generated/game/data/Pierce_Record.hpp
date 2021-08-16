#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileCollision_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Pierce_Record : game::data::ProjectileCollision_Record
{
    static constexpr const char* NAME = "gamedataPierce_Record";
    static constexpr const char* ALIAS = "Pierce_Record";

};
RED4EXT_ASSERT_SIZE(Pierce_Record, 0x58);
} // namespace game::data
using Pierce_Record = game::data::Pierce_Record;
} // namespace RED4ext
