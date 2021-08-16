#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseSign_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct LCDScreen_Record : game::data::BaseSign_Record
{
    static constexpr const char* NAME = "gamedataLCDScreen_Record";
    static constexpr const char* ALIAS = "LCDScreen_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LCDScreen_Record, 0x60);
} // namespace game::data
using LCDScreen_Record = game::data::LCDScreen_Record;
} // namespace RED4ext
