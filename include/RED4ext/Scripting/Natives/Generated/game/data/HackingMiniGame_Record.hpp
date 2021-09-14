#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct HackingMiniGame_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataHackingMiniGame_Record";
    static constexpr const char* ALIAS = "HackingMiniGame_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(HackingMiniGame_Record, 0x88);
} // namespace game::data
using HackingMiniGame_Record = game::data::HackingMiniGame_Record;
} // namespace RED4ext
