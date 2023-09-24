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
struct OwnerDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataOwnerDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "OwnerDistanceCoverSelectionParameters_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(OwnerDistanceCoverSelectionParameters_Record, 0x90);
} // namespace game::data
using gamedataOwnerDistanceCoverSelectionParameters_Record = game::data::OwnerDistanceCoverSelectionParameters_Record;
using OwnerDistanceCoverSelectionParameters_Record = game::data::OwnerDistanceCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
