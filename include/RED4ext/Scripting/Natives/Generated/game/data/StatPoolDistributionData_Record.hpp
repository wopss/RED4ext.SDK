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
struct StatPoolDistributionData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatPoolDistributionData_Record";
    static constexpr const char* ALIAS = "StatPoolDistributionData_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatPoolDistributionData_Record, 0x60);
} // namespace game::data
using gamedataStatPoolDistributionData_Record = game::data::StatPoolDistributionData_Record;
using StatPoolDistributionData_Record = game::data::StatPoolDistributionData_Record;
} // namespace RED4ext

// clang-format on
