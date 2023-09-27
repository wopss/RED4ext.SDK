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
struct ClosestToOwnerCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataClosestToOwnerCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "ClosestToOwnerCoverSelectionParameters_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ClosestToOwnerCoverSelectionParameters_Record, 0x78);
} // namespace game::data
using gamedataClosestToOwnerCoverSelectionParameters_Record = game::data::ClosestToOwnerCoverSelectionParameters_Record;
using ClosestToOwnerCoverSelectionParameters_Record = game::data::ClosestToOwnerCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
