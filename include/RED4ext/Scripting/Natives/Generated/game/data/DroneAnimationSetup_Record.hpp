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
struct DroneAnimationSetup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDroneAnimationSetup_Record";
    static constexpr const char* ALIAS = "DroneAnimationSetup_Record";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DroneAnimationSetup_Record, 0xD8);
} // namespace game::data
using gamedataDroneAnimationSetup_Record = game::data::DroneAnimationSetup_Record;
using DroneAnimationSetup_Record = game::data::DroneAnimationSetup_Record;
} // namespace RED4ext

// clang-format on
