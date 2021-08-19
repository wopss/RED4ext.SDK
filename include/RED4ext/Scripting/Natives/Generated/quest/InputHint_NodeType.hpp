#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct InputHint_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questInputHint_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName action; // 38
    CName groupId; // 40
    CString localizedLabel; // 48
    bool show; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    int32_t queuePriority; // 6C
};
RED4EXT_ASSERT_SIZE(InputHint_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
