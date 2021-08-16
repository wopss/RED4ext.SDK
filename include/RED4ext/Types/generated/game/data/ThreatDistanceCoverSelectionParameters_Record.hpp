#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ThreatDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataThreatDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "ThreatDistanceCoverSelectionParameters_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ThreatDistanceCoverSelectionParameters_Record, 0x68);
} // namespace game::data
using ThreatDistanceCoverSelectionParameters_Record = game::data::ThreatDistanceCoverSelectionParameters_Record;
} // namespace RED4ext
