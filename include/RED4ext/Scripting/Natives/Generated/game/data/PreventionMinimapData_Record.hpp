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
struct PreventionMinimapData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPreventionMinimapData_Record";
    static constexpr const char* ALIAS = "PreventionMinimapData_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionMinimapData_Record, 0x78);
} // namespace game::data
using gamedataPreventionMinimapData_Record = game::data::PreventionMinimapData_Record;
using PreventionMinimapData_Record = game::data::PreventionMinimapData_Record;
} // namespace RED4ext

// clang-format on
