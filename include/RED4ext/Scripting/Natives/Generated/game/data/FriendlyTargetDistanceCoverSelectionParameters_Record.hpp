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
struct FriendlyTargetDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataFriendlyTargetDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "FriendlyTargetDistanceCoverSelectionParameters_Record";

    uint8_t unk60[0xA8 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(FriendlyTargetDistanceCoverSelectionParameters_Record, 0xA8);
} // namespace game::data
using gamedataFriendlyTargetDistanceCoverSelectionParameters_Record = game::data::FriendlyTargetDistanceCoverSelectionParameters_Record;
using FriendlyTargetDistanceCoverSelectionParameters_Record = game::data::FriendlyTargetDistanceCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
