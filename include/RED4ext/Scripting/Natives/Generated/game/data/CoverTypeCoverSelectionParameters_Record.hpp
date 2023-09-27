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
struct CoverTypeCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataCoverTypeCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "CoverTypeCoverSelectionParameters_Record";

    uint8_t unk60[0x88 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CoverTypeCoverSelectionParameters_Record, 0x88);
} // namespace game::data
using gamedataCoverTypeCoverSelectionParameters_Record = game::data::CoverTypeCoverSelectionParameters_Record;
using CoverTypeCoverSelectionParameters_Record = game::data::CoverTypeCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
