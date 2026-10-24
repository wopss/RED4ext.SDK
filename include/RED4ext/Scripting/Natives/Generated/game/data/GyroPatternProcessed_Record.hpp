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
struct GyroPatternProcessed_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataGyroPatternProcessed_Record";
    static constexpr const char* ALIAS = "GyroPatternProcessed_Record";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GyroPatternProcessed_Record, 0xD8);
} // namespace game::data
using gamedataGyroPatternProcessed_Record = game::data::GyroPatternProcessed_Record;
using GyroPatternProcessed_Record = game::data::GyroPatternProcessed_Record;
} // namespace RED4ext

// clang-format on
