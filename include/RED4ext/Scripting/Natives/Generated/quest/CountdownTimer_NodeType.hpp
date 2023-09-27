#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct CountdownTimer_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questCountdownTimer_NodeType";
    static constexpr const char* ALIAS = NAME;

    float duration; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(CountdownTimer_NodeType, 0x40);
} // namespace quest
using questCountdownTimer_NodeType = quest::CountdownTimer_NodeType;
} // namespace RED4ext

// clang-format on
