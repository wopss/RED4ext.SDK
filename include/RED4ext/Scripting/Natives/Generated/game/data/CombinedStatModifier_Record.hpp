#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct CombinedStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataCombinedStatModifier_Record";
    static constexpr const char* ALIAS = "CombinedStatModifier_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CombinedStatModifier_Record, 0x90);
} // namespace game::data
using gamedataCombinedStatModifier_Record = game::data::CombinedStatModifier_Record;
using CombinedStatModifier_Record = game::data::CombinedStatModifier_Record;
} // namespace RED4ext

// clang-format on
