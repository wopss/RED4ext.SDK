#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ETimeShiftType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShiftTime_NodeType : quest::ITimeManagerNodeType
{
    static constexpr const char* NAME = "questShiftTime_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::ETimeShiftType timeShiftType; // 38
    bool preventVisualGlitch; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    uint32_t hours; // 40
    uint32_t minutes; // 44
    uint32_t seconds; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(ShiftTime_NodeType, 0x50);
} // namespace quest
using questShiftTime_NodeType = quest::ShiftTime_NodeType;
} // namespace RED4ext

// clang-format on
