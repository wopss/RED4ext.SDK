#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct DistrictPreventionData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDistrictPreventionData_Record";
    static constexpr const char* ALIAS = "DistrictPreventionData_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DistrictPreventionData_Record, 0x78);
} // namespace game::data
using DistrictPreventionData_Record = game::data::DistrictPreventionData_Record;
} // namespace RED4ext
