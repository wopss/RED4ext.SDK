#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct WarningMessage_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questWarningMessage_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString message; // 38
    LocalizationString localizedMessage; // 58
    float duration; // 80
    bool show; // 84
    bool instant; // 85
    uint8_t unk86[0x88 - 0x86]; // 86
};
RED4EXT_ASSERT_SIZE(WarningMessage_NodeType, 0x88);
} // namespace quest
} // namespace RED4ext
