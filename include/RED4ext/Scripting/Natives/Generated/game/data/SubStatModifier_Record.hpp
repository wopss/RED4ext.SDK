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
struct SubStatModifier_Record : game::data::StatModifier_Record
{
    static constexpr const char* NAME = "gamedataSubStatModifier_Record";
    static constexpr const char* ALIAS = "SubStatModifier_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(SubStatModifier_Record, 0x78);
} // namespace game::data
using gamedataSubStatModifier_Record = game::data::SubStatModifier_Record;
using SubStatModifier_Record = game::data::SubStatModifier_Record;
} // namespace RED4ext

// clang-format on
