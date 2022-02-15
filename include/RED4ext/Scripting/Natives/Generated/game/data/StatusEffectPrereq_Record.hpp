#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct StatusEffectPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataStatusEffectPrereq_Record";
    static constexpr const char* ALIAS = "StatusEffectPrereq_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(StatusEffectPrereq_Record, 0x60);
} // namespace game::data
using StatusEffectPrereq_Record = game::data::StatusEffectPrereq_Record;
} // namespace RED4ext
