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
struct FastTravelBinksGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFastTravelBinksGroup_Record";
    static constexpr const char* ALIAS = "FastTravelBinksGroup_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FastTravelBinksGroup_Record, 0x58);
} // namespace game::data
using gamedataFastTravelBinksGroup_Record = game::data::FastTravelBinksGroup_Record;
using FastTravelBinksGroup_Record = game::data::FastTravelBinksGroup_Record;
} // namespace RED4ext

// clang-format on
