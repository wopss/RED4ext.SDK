#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Stim_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStim_Record";
    static constexpr const char* ALIAS = "Stim_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Stim_Record, 0x68);
} // namespace game::data
using Stim_Record = game::data::Stim_Record;
} // namespace RED4ext
