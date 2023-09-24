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
struct RandomRatioCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataRandomRatioCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "RandomRatioCoverSelectionParameters_Record";

};
RED4EXT_ASSERT_SIZE(RandomRatioCoverSelectionParameters_Record, 0x60);
} // namespace game::data
using gamedataRandomRatioCoverSelectionParameters_Record = game::data::RandomRatioCoverSelectionParameters_Record;
using RandomRatioCoverSelectionParameters_Record = game::data::RandomRatioCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
