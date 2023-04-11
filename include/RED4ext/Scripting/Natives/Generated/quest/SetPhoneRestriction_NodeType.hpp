#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPhoneRestriction_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetPhoneRestriction_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool applyPhoneRestriction; // 38
    bool forcedApply; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
    CName forcedApplySource; // 40
};
RED4EXT_ASSERT_SIZE(SetPhoneRestriction_NodeType, 0x48);
} // namespace quest
using questSetPhoneRestriction_NodeType = quest::SetPhoneRestriction_NodeType;
} // namespace RED4ext

// clang-format on
