#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IAchievementManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetProgress_NodeType : quest::IAchievementManagerNodeType
{
    static constexpr const char* NAME = "questSetProgress_NodeType";
    static constexpr const char* ALIAS = NAME;

    TweakDBID achievement; // 30
    CString factName; // 38
    uint32_t maxValue; // 58
    uint32_t currentValue; // 5C
};
RED4EXT_ASSERT_SIZE(SetProgress_NodeType, 0x60);
} // namespace quest
using questSetProgress_NodeType = quest::SetProgress_NodeType;
} // namespace RED4ext

// clang-format on
