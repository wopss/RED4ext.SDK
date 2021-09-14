#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct KeepCurrentCoverCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataKeepCurrentCoverCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "KeepCurrentCoverCoverSelectionParameters_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(KeepCurrentCoverCoverSelectionParameters_Record, 0x58);
} // namespace game::data
using KeepCurrentCoverCoverSelectionParameters_Record = game::data::KeepCurrentCoverCoverSelectionParameters_Record;
} // namespace RED4ext
