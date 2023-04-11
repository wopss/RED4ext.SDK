#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTimer_NodeType : quest::IGameManagerNodeType
{
    static constexpr const char* NAME = "questSetTimer_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float duration; // 3C
};
RED4EXT_ASSERT_SIZE(SetTimer_NodeType, 0x40);
} // namespace quest
using questSetTimer_NodeType = quest::SetTimer_NodeType;
} // namespace RED4ext

// clang-format on
