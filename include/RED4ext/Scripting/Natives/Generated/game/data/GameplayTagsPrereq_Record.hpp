#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct GameplayTagsPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataGameplayTagsPrereq_Record";
    static constexpr const char* ALIAS = "GameplayTagsPrereq_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(GameplayTagsPrereq_Record, 0x58);
} // namespace game::data
using GameplayTagsPrereq_Record = game::data::GameplayTagsPrereq_Record;
} // namespace RED4ext
