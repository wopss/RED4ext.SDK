#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseShape_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AngleRange_Record : game::data::SenseShape_Record
{
    static constexpr const char* NAME = "gamedataAngleRange_Record";
    static constexpr const char* ALIAS = "AngleRange_Record";

    uint8_t unk60[0x90 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AngleRange_Record, 0x90);
} // namespace game::data
using gamedataAngleRange_Record = game::data::AngleRange_Record;
using AngleRange_Record = game::data::AngleRange_Record;
} // namespace RED4ext

// clang-format on
