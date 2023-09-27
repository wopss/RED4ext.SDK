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
struct AbsoluteZLimiterCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataAbsoluteZLimiterCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "AbsoluteZLimiterCoverSelectionParameters_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AbsoluteZLimiterCoverSelectionParameters_Record, 0x70);
} // namespace game::data
using gamedataAbsoluteZLimiterCoverSelectionParameters_Record = game::data::AbsoluteZLimiterCoverSelectionParameters_Record;
using AbsoluteZLimiterCoverSelectionParameters_Record = game::data::AbsoluteZLimiterCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
