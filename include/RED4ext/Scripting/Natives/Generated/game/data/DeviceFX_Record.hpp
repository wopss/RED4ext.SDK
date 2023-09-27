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
struct DeviceFX_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDeviceFX_Record";
    static constexpr const char* ALIAS = "DeviceFX_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DeviceFX_Record, 0x70);
} // namespace game::data
using gamedataDeviceFX_Record = game::data::DeviceFX_Record;
using DeviceFX_Record = game::data::DeviceFX_Record;
} // namespace RED4ext

// clang-format on
