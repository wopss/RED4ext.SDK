#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ScannableData_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct FocusClue_Record : game::data::ScannableData_Record
{
    static constexpr const char* NAME = "gamedataFocusClue_Record";
    static constexpr const char* ALIAS = "FocusClue_Record";

};
RED4EXT_ASSERT_SIZE(FocusClue_Record, 0x88);
} // namespace game::data
using gamedataFocusClue_Record = game::data::FocusClue_Record;
using FocusClue_Record = game::data::FocusClue_Record;
} // namespace RED4ext

// clang-format on
