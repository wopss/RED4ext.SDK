#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISpatialCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAISpatialCond_Record";
    static constexpr const char* ALIAS = "AISpatialCond_Record";

    uint8_t unk58[0xE0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AISpatialCond_Record, 0xE0);
} // namespace game::data
using gamedataAISpatialCond_Record = game::data::AISpatialCond_Record;
using AISpatialCond_Record = game::data::AISpatialCond_Record;
} // namespace RED4ext

// clang-format on
