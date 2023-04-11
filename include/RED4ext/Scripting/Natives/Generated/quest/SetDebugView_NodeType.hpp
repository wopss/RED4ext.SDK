#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EDebugViewMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetDebugView_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questSetDebugView_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::EDebugViewMode mode; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetDebugView_NodeType, 0x40);
} // namespace quest
using questSetDebugView_NodeType = quest::SetDebugView_NodeType;
} // namespace RED4ext

// clang-format on
