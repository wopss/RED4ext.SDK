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
struct AvoidLineOfSightSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataAvoidLineOfSightSelectionParameters_Record";
    static constexpr const char* ALIAS = "AvoidLineOfSightSelectionParameters_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AvoidLineOfSightSelectionParameters_Record, 0x90);
} // namespace game::data
using gamedataAvoidLineOfSightSelectionParameters_Record = game::data::AvoidLineOfSightSelectionParameters_Record;
using AvoidLineOfSightSelectionParameters_Record = game::data::AvoidLineOfSightSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
