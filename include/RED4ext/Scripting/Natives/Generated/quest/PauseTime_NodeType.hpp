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
struct PauseTime_NodeType : quest::ITimeManagerNodeType
{
    static constexpr const char* NAME = "questPauseTime_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool pause; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(PauseTime_NodeType, 0x40);
} // namespace quest
using questPauseTime_NodeType = quest::PauseTime_NodeType;
} // namespace RED4ext

// clang-format on
