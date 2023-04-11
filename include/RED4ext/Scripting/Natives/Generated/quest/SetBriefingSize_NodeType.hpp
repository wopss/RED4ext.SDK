#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/JournalSizeEventType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetBriefingSize_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetBriefingSize_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::JournalSizeEventType briefingSize; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetBriefingSize_NodeType, 0x40);
} // namespace quest
using questSetBriefingSize_NodeType = quest::SetBriefingSize_NodeType;
} // namespace RED4ext

// clang-format on
