#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CombinedStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataCombinedStatModifier_Record";
    static constexpr const char* ALIAS = "CombinedStatModifier_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CombinedStatModifier_Record, 0x60);
} // namespace game::data
using CombinedStatModifier_Record = game::data::CombinedStatModifier_Record;
} // namespace RED4ext
