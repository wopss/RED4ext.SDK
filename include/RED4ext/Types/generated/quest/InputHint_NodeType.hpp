#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

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
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(InputHint_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
