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
struct GyroConfigurationParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataGyroConfigurationParams_Record";
    static constexpr const char* ALIAS = "GyroConfigurationParams_Record";

    uint8_t unk48[0xD0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GyroConfigurationParams_Record, 0xD0);
} // namespace game::data
using gamedataGyroConfigurationParams_Record = game::data::GyroConfigurationParams_Record;
using GyroConfigurationParams_Record = game::data::GyroConfigurationParams_Record;
} // namespace RED4ext

// clang-format on
