#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ModifyStatPoolModifierEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataModifyStatPoolModifierEffector_Record";
    static constexpr const char* ALIAS = "ModifyStatPoolModifierEffector_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ModifyStatPoolModifierEffector_Record, 0x68);
} // namespace game::data
using ModifyStatPoolModifierEffector_Record = game::data::ModifyStatPoolModifierEffector_Record;
} // namespace RED4ext
