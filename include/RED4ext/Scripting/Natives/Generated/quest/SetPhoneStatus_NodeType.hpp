#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhoneStatus.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPhoneStatus_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetPhoneStatus_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::PhoneStatus status; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName customStatus; // 40
};
RED4EXT_ASSERT_SIZE(SetPhoneStatus_NodeType, 0x48);
} // namespace quest
using questSetPhoneStatus_NodeType = quest::SetPhoneStatus_NodeType;
} // namespace RED4ext

// clang-format on
