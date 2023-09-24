#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ThreatDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataThreatDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "ThreatDistanceCoverSelectionParameters_Record";

    uint8_t unk60[0xD0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ThreatDistanceCoverSelectionParameters_Record, 0xD0);
} // namespace game::data
using gamedataThreatDistanceCoverSelectionParameters_Record = game::data::ThreatDistanceCoverSelectionParameters_Record;
using ThreatDistanceCoverSelectionParameters_Record = game::data::ThreatDistanceCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
