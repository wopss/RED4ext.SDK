#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputHintHoldIndicationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowCustomTooltip_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowCustomTooltip_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool setTooltip; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    LocalizationString text; // 40
    CString inputAction; // 68
    ink::InputHintHoldIndicationType holdIndicationType; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    int32_t queuePriority; // 8C
};
RED4EXT_ASSERT_SIZE(ShowCustomTooltip_NodeType, 0x90);
} // namespace quest
using questShowCustomTooltip_NodeType = quest::ShowCustomTooltip_NodeType;
} // namespace RED4ext

// clang-format on
