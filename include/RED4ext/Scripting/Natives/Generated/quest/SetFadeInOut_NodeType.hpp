#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetFadeInOut_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questSetFadeInOut_NodeType";
    static constexpr const char* ALIAS = NAME;

    Color fadeColor; // 38
    float duration; // 3C
    bool fadeIn; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SetFadeInOut_NodeType, 0x48);
} // namespace quest
using questSetFadeInOut_NodeType = quest::SetFadeInOut_NodeType;
} // namespace RED4ext

// clang-format on
