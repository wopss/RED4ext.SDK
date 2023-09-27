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
struct PreventionHeatDataMatrix_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPreventionHeatDataMatrix_Record";
    static constexpr const char* ALIAS = "PreventionHeatDataMatrix_Record";

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PreventionHeatDataMatrix_Record, 0xA8);
} // namespace game::data
using gamedataPreventionHeatDataMatrix_Record = game::data::PreventionHeatDataMatrix_Record;
using PreventionHeatDataMatrix_Record = game::data::PreventionHeatDataMatrix_Record;
} // namespace RED4ext

// clang-format on
