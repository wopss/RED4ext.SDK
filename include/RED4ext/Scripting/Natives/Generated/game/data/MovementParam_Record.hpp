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
struct MovementParam_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMovementParam_Record";
    static constexpr const char* ALIAS = "MovementParam_Record";

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MovementParam_Record, 0x98);
} // namespace game::data
using gamedataMovementParam_Record = game::data::MovementParam_Record;
using MovementParam_Record = game::data::MovementParam_Record;
} // namespace RED4ext

// clang-format on
