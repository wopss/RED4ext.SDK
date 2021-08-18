#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AngleDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataAngleDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "AngleDistanceCoverSelectionParameters_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AngleDistanceCoverSelectionParameters_Record, 0x70);
} // namespace game::data
using AngleDistanceCoverSelectionParameters_Record = game::data::AngleDistanceCoverSelectionParameters_Record;
} // namespace RED4ext
