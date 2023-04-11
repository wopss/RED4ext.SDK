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
struct DisplayMessageBox_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questDisplayMessageBox_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString title; // 38
    LocalizationString localizedTitle; // 58
    CString message; // 80
    LocalizationString localizedMessage; // A0
};
RED4EXT_ASSERT_SIZE(DisplayMessageBox_NodeType, 0xC8);
} // namespace quest
using questDisplayMessageBox_NodeType = quest::DisplayMessageBox_NodeType;
} // namespace RED4ext

// clang-format on
