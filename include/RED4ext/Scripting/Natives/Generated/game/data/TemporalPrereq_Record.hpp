#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct TemporalPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataTemporalPrereq_Record";
    static constexpr const char* ALIAS = "TemporalPrereq_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TemporalPrereq_Record, 0x58);
} // namespace game::data
using TemporalPrereq_Record = game::data::TemporalPrereq_Record;
} // namespace RED4ext
