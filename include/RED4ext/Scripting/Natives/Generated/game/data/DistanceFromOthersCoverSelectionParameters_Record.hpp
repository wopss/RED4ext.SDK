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
struct DistanceFromOthersCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataDistanceFromOthersCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "DistanceFromOthersCoverSelectionParameters_Record";

    uint8_t unk60[0x88 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(DistanceFromOthersCoverSelectionParameters_Record, 0x88);
} // namespace game::data
using gamedataDistanceFromOthersCoverSelectionParameters_Record = game::data::DistanceFromOthersCoverSelectionParameters_Record;
using DistanceFromOthersCoverSelectionParameters_Record = game::data::DistanceFromOthersCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
