#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ConstantStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataConstantStatModifier_Record";
    static constexpr const char* ALIAS = "ConstantStatModifier_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ConstantStatModifier_Record, 0x58);
} // namespace game::data
using ConstantStatModifier_Record = game::data::ConstantStatModifier_Record;
} // namespace RED4ext
