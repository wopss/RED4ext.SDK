#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RearWheelsFrictionModifier_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataRearWheelsFrictionModifier_Record";
    static constexpr const char* ALIAS = "RearWheelsFrictionModifier_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RearWheelsFrictionModifier_Record, 0x68);
} // namespace game::data
using RearWheelsFrictionModifier_Record = game::data::RearWheelsFrictionModifier_Record;
} // namespace RED4ext
