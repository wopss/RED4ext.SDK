#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Device_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataDevice_Record";
    static constexpr const char* ALIAS = "Device_Record";

    uint8_t unkA0[0xB8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(Device_Record, 0xB8);
} // namespace game::data
using gamedataDevice_Record = game::data::Device_Record;
using Device_Record = game::data::Device_Record;
} // namespace RED4ext

// clang-format on
