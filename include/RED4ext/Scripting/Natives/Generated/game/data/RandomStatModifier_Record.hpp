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
struct RandomStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataRandomStatModifier_Record";
    static constexpr const char* ALIAS = "RandomStatModifier_Record";

    uint8_t unk60[0x88 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(RandomStatModifier_Record, 0x88);
} // namespace game::data
using gamedataRandomStatModifier_Record = game::data::RandomStatModifier_Record;
using RandomStatModifier_Record = game::data::RandomStatModifier_Record;
} // namespace RED4ext

// clang-format on
