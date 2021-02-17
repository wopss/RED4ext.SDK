#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetPhoneRestriction_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetPhoneRestriction_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool applyPhoneRestriction; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(SetPhoneRestriction_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
