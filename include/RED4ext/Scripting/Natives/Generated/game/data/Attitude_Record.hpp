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
struct Attitude_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAttitude_Record";
    static constexpr const char* ALIAS = "Attitude_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Attitude_Record, 0x70);
} // namespace game::data
using gamedataAttitude_Record = game::data::Attitude_Record;
using Attitude_Record = game::data::Attitude_Record;
} // namespace RED4ext

// clang-format on
