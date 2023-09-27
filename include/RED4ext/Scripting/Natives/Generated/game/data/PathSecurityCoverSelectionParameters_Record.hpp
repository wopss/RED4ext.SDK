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
struct PathSecurityCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataPathSecurityCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "PathSecurityCoverSelectionParameters_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PathSecurityCoverSelectionParameters_Record, 0x90);
} // namespace game::data
using gamedataPathSecurityCoverSelectionParameters_Record = game::data::PathSecurityCoverSelectionParameters_Record;
using PathSecurityCoverSelectionParameters_Record = game::data::PathSecurityCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
