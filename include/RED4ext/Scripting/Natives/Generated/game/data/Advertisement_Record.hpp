#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Advertisement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAdvertisement_Record";
    static constexpr const char* ALIAS = "Advertisement_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Advertisement_Record, 0x58);
} // namespace game::data
using Advertisement_Record = game::data::Advertisement_Record;
} // namespace RED4ext
