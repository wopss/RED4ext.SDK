#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct MinigameAction_Record : game::data::ObjectAction_Record
{
    static constexpr const char* NAME = "gamedataMinigameAction_Record";
    static constexpr const char* ALIAS = "MinigameAction_Record";

    uint8_t unk80[0xA0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(MinigameAction_Record, 0xA0);
} // namespace game::data
using MinigameAction_Record = game::data::MinigameAction_Record;
} // namespace RED4ext
