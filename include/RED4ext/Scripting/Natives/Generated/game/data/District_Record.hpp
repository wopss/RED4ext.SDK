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
struct District_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDistrict_Record";
    static constexpr const char* ALIAS = "District_Record";

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(District_Record, 0xE8);
} // namespace game::data
using gamedataDistrict_Record = game::data::District_Record;
using District_Record = game::data::District_Record;
} // namespace RED4ext

// clang-format on
