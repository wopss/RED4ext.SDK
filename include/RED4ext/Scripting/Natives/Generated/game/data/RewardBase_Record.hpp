#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct RewardBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataRewardBase_Record";
    static constexpr const char* ALIAS = "RewardBase_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RewardBase_Record, 0x68);
} // namespace game::data
using RewardBase_Record = game::data::RewardBase_Record;
} // namespace RED4ext
