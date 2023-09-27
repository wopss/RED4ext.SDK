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
struct ShooterVFXList_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataShooterVFXList_Record";
    static constexpr const char* ALIAS = "ShooterVFXList_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ShooterVFXList_Record, 0x58);
} // namespace game::data
using gamedataShooterVFXList_Record = game::data::ShooterVFXList_Record;
using ShooterVFXList_Record = game::data::ShooterVFXList_Record;
} // namespace RED4ext

// clang-format on
