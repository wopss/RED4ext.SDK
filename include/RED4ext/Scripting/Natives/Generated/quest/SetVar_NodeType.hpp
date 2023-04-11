#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IFactsDBManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetVar_NodeType : quest::IFactsDBManagerNodeType
{
    static constexpr const char* NAME = "questSetVar_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString factName; // 30
    int32_t value; // 50
    bool setExactValue; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(SetVar_NodeType, 0x58);
} // namespace quest
using questSetVar_NodeType = quest::SetVar_NodeType;
} // namespace RED4ext

// clang-format on
