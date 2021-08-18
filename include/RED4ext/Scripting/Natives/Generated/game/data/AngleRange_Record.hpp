#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseShape_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AngleRange_Record : game::data::SenseShape_Record
{
    static constexpr const char* NAME = "gamedataAngleRange_Record";
    static constexpr const char* ALIAS = "AngleRange_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AngleRange_Record, 0x60);
} // namespace game::data
using AngleRange_Record = game::data::AngleRange_Record;
} // namespace RED4ext
