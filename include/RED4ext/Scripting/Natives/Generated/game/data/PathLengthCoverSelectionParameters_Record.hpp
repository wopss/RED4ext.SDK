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
struct PathLengthCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataPathLengthCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "PathLengthCoverSelectionParameters_Record";

    uint8_t unk60[0xA0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PathLengthCoverSelectionParameters_Record, 0xA0);
} // namespace game::data
using gamedataPathLengthCoverSelectionParameters_Record = game::data::PathLengthCoverSelectionParameters_Record;
using PathLengthCoverSelectionParameters_Record = game::data::PathLengthCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
