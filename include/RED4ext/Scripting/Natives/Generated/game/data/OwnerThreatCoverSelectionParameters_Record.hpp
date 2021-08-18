#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct OwnerThreatCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataOwnerThreatCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "OwnerThreatCoverSelectionParameters_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(OwnerThreatCoverSelectionParameters_Record, 0x58);
} // namespace game::data
using OwnerThreatCoverSelectionParameters_Record = game::data::OwnerThreatCoverSelectionParameters_Record;
} // namespace RED4ext
