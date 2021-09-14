#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CurveStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataCurveStatModifier_Record";
    static constexpr const char* ALIAS = "CurveStatModifier_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CurveStatModifier_Record, 0x60);
} // namespace game::data
using CurveStatModifier_Record = game::data::CurveStatModifier_Record;
} // namespace RED4ext
