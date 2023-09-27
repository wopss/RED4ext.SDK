#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/UIIcon_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct JournalIcon_Record : game::data::UIIcon_Record
{
    static constexpr const char* NAME = "gamedataJournalIcon_Record";
    static constexpr const char* ALIAS = "JournalIcon_Record";

};
RED4EXT_ASSERT_SIZE(JournalIcon_Record, 0x60);
} // namespace game::data
using gamedataJournalIcon_Record = game::data::JournalIcon_Record;
using JournalIcon_Record = game::data::JournalIcon_Record;
} // namespace RED4ext

// clang-format on
