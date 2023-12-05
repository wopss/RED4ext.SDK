#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct MinigameAction_Record : game::data::ObjectAction_Record
{
    static constexpr const char* NAME = "gamedataMinigameAction_Record";
    static constexpr const char* ALIAS = "MinigameAction_Record";

    uint8_t unk148[0x1C0 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(MinigameAction_Record, 0x1C0);
} // namespace game::data
using gamedataMinigameAction_Record = game::data::MinigameAction_Record;
using MinigameAction_Record = game::data::MinigameAction_Record;
} // namespace RED4ext

// clang-format on
