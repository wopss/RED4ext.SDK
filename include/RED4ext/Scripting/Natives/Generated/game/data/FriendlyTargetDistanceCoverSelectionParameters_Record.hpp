#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct FriendlyTargetDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataFriendlyTargetDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "FriendlyTargetDistanceCoverSelectionParameters_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(FriendlyTargetDistanceCoverSelectionParameters_Record, 0x68);
} // namespace game::data
using FriendlyTargetDistanceCoverSelectionParameters_Record = game::data::FriendlyTargetDistanceCoverSelectionParameters_Record;
} // namespace RED4ext
