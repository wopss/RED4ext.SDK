#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectToCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PlayerObjectToCheck_Record : game::data::ObjectToCheck_Record
{
    static constexpr const char* NAME = "gamedataPlayerObjectToCheck_Record";
    static constexpr const char* ALIAS = "PlayerObjectToCheck_Record";

};
RED4EXT_ASSERT_SIZE(PlayerObjectToCheck_Record, 0x48);
} // namespace game::data
using PlayerObjectToCheck_Record = game::data::PlayerObjectToCheck_Record;
} // namespace RED4ext
