#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct SlotItemPartListElement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSlotItemPartListElement_Record";
    static constexpr const char* ALIAS = "SlotItemPartListElement_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SlotItemPartListElement_Record, 0x58);
} // namespace game::data
using SlotItemPartListElement_Record = game::data::SlotItemPartListElement_Record;
} // namespace RED4ext
