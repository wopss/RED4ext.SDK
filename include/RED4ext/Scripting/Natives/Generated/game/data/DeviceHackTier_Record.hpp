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
struct DeviceHackTier_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDeviceHackTier_Record";
    static constexpr const char* ALIAS = "DeviceHackTier_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceHackTier_Record, 0x70);
} // namespace game::data
using gamedataDeviceHackTier_Record = game::data::DeviceHackTier_Record;
using DeviceHackTier_Record = game::data::DeviceHackTier_Record;
} // namespace RED4ext

// clang-format on
