#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTime_NodeType : quest::ITimeManagerNodeType
{
    static constexpr const char* NAME = "questSetTime_NodeType";
    static constexpr const char* ALIAS = NAME;

    int32_t hours; // 38
    int32_t minutes; // 3C
    int32_t seconds; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SetTime_NodeType, 0x48);
} // namespace quest
using questSetTime_NodeType = quest::SetTime_NodeType;
} // namespace RED4ext

// clang-format on
