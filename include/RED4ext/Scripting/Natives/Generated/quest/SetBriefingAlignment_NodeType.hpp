#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/JournalAlignmentEventType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetBriefingAlignment_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetBriefingAlignment_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::JournalAlignmentEventType briefingAlignment; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetBriefingAlignment_NodeType, 0x40);
} // namespace quest
using questSetBriefingAlignment_NodeType = quest::SetBriefingAlignment_NodeType;
} // namespace RED4ext

// clang-format on
