#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowOnscreen_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questShowOnscreen_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString message; // 38
    LocalizationString localizedMessage; // 58
    float duration; // 80
    bool show; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
};
RED4EXT_ASSERT_SIZE(ShowOnscreen_NodeType, 0x88);
} // namespace quest
using questShowOnscreen_NodeType = quest::ShowOnscreen_NodeType;
} // namespace RED4ext

// clang-format on
