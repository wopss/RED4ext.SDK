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
struct PreventionHeatData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPreventionHeatData_Record";
    static constexpr const char* ALIAS = "PreventionHeatData_Record";

    uint8_t unk48[0x100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionHeatData_Record, 0x100);
} // namespace game::data
using gamedataPreventionHeatData_Record = game::data::PreventionHeatData_Record;
using PreventionHeatData_Record = game::data::PreventionHeatData_Record;
} // namespace RED4ext

// clang-format on
