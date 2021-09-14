#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct InAirGravityModifier_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataInAirGravityModifier_Record";
    static constexpr const char* ALIAS = "InAirGravityModifier_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(InAirGravityModifier_Record, 0x68);
} // namespace game::data
using InAirGravityModifier_Record = game::data::InAirGravityModifier_Record;
} // namespace RED4ext
