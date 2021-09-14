#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CoverTypeCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataCoverTypeCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "CoverTypeCoverSelectionParameters_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CoverTypeCoverSelectionParameters_Record, 0x60);
} // namespace game::data
using CoverTypeCoverSelectionParameters_Record = game::data::CoverTypeCoverSelectionParameters_Record;
} // namespace RED4ext
