#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct RewardSet_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataRewardSet_Record";
    static constexpr const char* ALIAS = "RewardSet_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RewardSet_Record, 0x50);
} // namespace game::data
using RewardSet_Record = game::data::RewardSet_Record;
} // namespace RED4ext
