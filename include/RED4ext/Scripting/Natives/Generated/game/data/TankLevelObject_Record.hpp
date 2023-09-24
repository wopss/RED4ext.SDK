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
struct TankLevelObject_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTankLevelObject_Record";
    static constexpr const char* ALIAS = "TankLevelObject_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TankLevelObject_Record, 0x58);
} // namespace game::data
using gamedataTankLevelObject_Record = game::data::TankLevelObject_Record;
using TankLevelObject_Record = game::data::TankLevelObject_Record;
} // namespace RED4ext

// clang-format on
