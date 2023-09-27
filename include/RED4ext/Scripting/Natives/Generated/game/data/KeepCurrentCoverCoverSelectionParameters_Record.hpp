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
struct KeepCurrentCoverCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataKeepCurrentCoverCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "KeepCurrentCoverCoverSelectionParameters_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(KeepCurrentCoverCoverSelectionParameters_Record, 0x70);
} // namespace game::data
using gamedataKeepCurrentCoverCoverSelectionParameters_Record = game::data::KeepCurrentCoverCoverSelectionParameters_Record;
using KeepCurrentCoverCoverSelectionParameters_Record = game::data::KeepCurrentCoverCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
