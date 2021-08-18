#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Device_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataDevice_Record";
    static constexpr const char* ALIAS = "Device_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(Device_Record, 0x68);
} // namespace game::data
using Device_Record = game::data::Device_Record;
} // namespace RED4ext
