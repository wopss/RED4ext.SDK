#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Types/generated/quest/LocationAction.hpp>

namespace RED4ext
{
namespace quest { 
struct SetLocationName_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetLocationName_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString locationName; // 38
    quest::LocationAction action; // 58
    TweakDBID districtID; // 5C
    bool isNewLocation; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(SetLocationName_NodeType, 0x68);
} // namespace quest
} // namespace RED4ext
