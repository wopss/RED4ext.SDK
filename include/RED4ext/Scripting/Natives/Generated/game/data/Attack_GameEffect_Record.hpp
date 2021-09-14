#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Attack_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Attack_GameEffect_Record : game::data::Attack_Record
{
    static constexpr const char* NAME = "gamedataAttack_GameEffect_Record";
    static constexpr const char* ALIAS = "Attack_GameEffect_Record";

    uint8_t unk70[0x88 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(Attack_GameEffect_Record, 0x88);
} // namespace game::data
using Attack_GameEffect_Record = game::data::Attack_GameEffect_Record;
} // namespace RED4ext
