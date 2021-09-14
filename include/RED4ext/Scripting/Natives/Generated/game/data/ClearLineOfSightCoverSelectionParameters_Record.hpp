#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ClearLineOfSightCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataClearLineOfSightCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "ClearLineOfSightCoverSelectionParameters_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ClearLineOfSightCoverSelectionParameters_Record, 0x60);
} // namespace game::data
using ClearLineOfSightCoverSelectionParameters_Record = game::data::ClearLineOfSightCoverSelectionParameters_Record;
} // namespace RED4ext
