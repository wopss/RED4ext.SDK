#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionShootFromCar_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionShootFromCar_Record";
    static constexpr const char* ALIAS = "AISubActionShootFromCar_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionShootFromCar_Record, 0x70);
} // namespace game::data
using gamedataAISubActionShootFromCar_Record = game::data::AISubActionShootFromCar_Record;
using AISubActionShootFromCar_Record = game::data::AISubActionShootFromCar_Record;
} // namespace RED4ext

// clang-format on
