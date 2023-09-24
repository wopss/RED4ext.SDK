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
struct AngleDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataAngleDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "AngleDistanceCoverSelectionParameters_Record";

    uint8_t unk60[0xD0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AngleDistanceCoverSelectionParameters_Record, 0xD0);
} // namespace game::data
using gamedataAngleDistanceCoverSelectionParameters_Record = game::data::AngleDistanceCoverSelectionParameters_Record;
using AngleDistanceCoverSelectionParameters_Record = game::data::AngleDistanceCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
