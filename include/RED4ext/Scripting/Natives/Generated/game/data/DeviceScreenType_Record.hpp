#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct DeviceScreenType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDeviceScreenType_Record";
    static constexpr const char* ALIAS = "DeviceScreenType_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceScreenType_Record, 0x58);
} // namespace game::data
using DeviceScreenType_Record = game::data::DeviceScreenType_Record;
} // namespace RED4ext
