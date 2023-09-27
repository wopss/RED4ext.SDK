#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct InAirGravityModifier_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataInAirGravityModifier_Record";
    static constexpr const char* ALIAS = "InAirGravityModifier_Record";

    uint8_t unk58[0xB0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(InAirGravityModifier_Record, 0xB0);
} // namespace game::data
using gamedataInAirGravityModifier_Record = game::data::InAirGravityModifier_Record;
using InAirGravityModifier_Record = game::data::InAirGravityModifier_Record;
} // namespace RED4ext

// clang-format on
