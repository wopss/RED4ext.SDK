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
struct FastTravelBinkData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFastTravelBinkData_Record";
    static constexpr const char* ALIAS = "FastTravelBinkData_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FastTravelBinkData_Record, 0x78);
} // namespace game::data
using gamedataFastTravelBinkData_Record = game::data::FastTravelBinkData_Record;
using FastTravelBinkData_Record = game::data::FastTravelBinkData_Record;
} // namespace RED4ext

// clang-format on
