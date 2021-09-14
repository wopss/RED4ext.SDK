#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ThreatDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataThreatDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "ThreatDistanceCoverSelectionParameters_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ThreatDistanceCoverSelectionParameters_Record, 0x70);
} // namespace game::data
using ThreatDistanceCoverSelectionParameters_Record = game::data::ThreatDistanceCoverSelectionParameters_Record;
} // namespace RED4ext
