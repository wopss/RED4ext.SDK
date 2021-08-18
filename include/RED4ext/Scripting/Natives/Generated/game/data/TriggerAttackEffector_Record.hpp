#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct TriggerAttackEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataTriggerAttackEffector_Record";
    static constexpr const char* ALIAS = "TriggerAttackEffector_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TriggerAttackEffector_Record, 0x60);
} // namespace game::data
using TriggerAttackEffector_Record = game::data::TriggerAttackEffector_Record;
} // namespace RED4ext
