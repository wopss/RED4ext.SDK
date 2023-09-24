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
struct ConstantStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataConstantStatModifier_Record";
    static constexpr const char* ALIAS = "ConstantStatModifier_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ConstantStatModifier_Record, 0x70);
} // namespace game::data
using gamedataConstantStatModifier_Record = game::data::ConstantStatModifier_Record;
using ConstantStatModifier_Record = game::data::ConstantStatModifier_Record;
} // namespace RED4ext

// clang-format on
