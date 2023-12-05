#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct InputHint_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questInputHint_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName action; // 38
    CName groupId; // 40
    CName source; // 48
    CString localizedLabel; // 50
    bool show; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    int32_t queuePriority; // 74
};
RED4EXT_ASSERT_SIZE(InputHint_NodeType, 0x78);
} // namespace quest
using questInputHint_NodeType = quest::InputHint_NodeType;
} // namespace RED4ext

// clang-format on
