#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct PreventionAttackTypeData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPreventionAttackTypeData_Record";
    static constexpr const char* ALIAS = "PreventionAttackTypeData_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionAttackTypeData_Record, 0x90);
} // namespace game::data
using gamedataPreventionAttackTypeData_Record = game::data::PreventionAttackTypeData_Record;
using PreventionAttackTypeData_Record = game::data::PreventionAttackTypeData_Record;
} // namespace RED4ext

// clang-format on
