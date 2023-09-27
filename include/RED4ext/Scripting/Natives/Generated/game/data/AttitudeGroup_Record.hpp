#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct AttitudeGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAttitudeGroup_Record";
    static constexpr const char* ALIAS = "AttitudeGroup_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AttitudeGroup_Record, 0x88);
} // namespace game::data
using gamedataAttitudeGroup_Record = game::data::AttitudeGroup_Record;
using AttitudeGroup_Record = game::data::AttitudeGroup_Record;
} // namespace RED4ext

// clang-format on
