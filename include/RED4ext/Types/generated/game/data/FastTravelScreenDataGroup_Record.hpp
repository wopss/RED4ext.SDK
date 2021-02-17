#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct FastTravelScreenDataGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFastTravelScreenDataGroup_Record";
    static constexpr const char* ALIAS = "FastTravelScreenDataGroup_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FastTravelScreenDataGroup_Record, 0x50);
} // namespace game::data
using FastTravelScreenDataGroup_Record = game::data::FastTravelScreenDataGroup_Record;
} // namespace RED4ext
