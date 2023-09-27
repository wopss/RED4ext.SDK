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
struct TacticLimiterCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataTacticLimiterCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "TacticLimiterCoverSelectionParameters_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(TacticLimiterCoverSelectionParameters_Record, 0x70);
} // namespace game::data
using gamedataTacticLimiterCoverSelectionParameters_Record = game::data::TacticLimiterCoverSelectionParameters_Record;
using TacticLimiterCoverSelectionParameters_Record = game::data::TacticLimiterCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
