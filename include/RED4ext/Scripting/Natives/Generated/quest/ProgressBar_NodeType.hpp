#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ProgressBar_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questProgressBar_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool show; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float duration; // 3C
    LocalizationString text; // 40
};
RED4EXT_ASSERT_SIZE(ProgressBar_NodeType, 0x68);
} // namespace quest
} // namespace RED4ext
