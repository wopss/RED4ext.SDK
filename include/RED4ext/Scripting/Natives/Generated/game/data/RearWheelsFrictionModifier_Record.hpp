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
struct RearWheelsFrictionModifier_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataRearWheelsFrictionModifier_Record";
    static constexpr const char* ALIAS = "RearWheelsFrictionModifier_Record";

    uint8_t unk58[0xB8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(RearWheelsFrictionModifier_Record, 0xB8);
} // namespace game::data
using gamedataRearWheelsFrictionModifier_Record = game::data::RearWheelsFrictionModifier_Record;
using RearWheelsFrictionModifier_Record = game::data::RearWheelsFrictionModifier_Record;
} // namespace RED4ext

// clang-format on
