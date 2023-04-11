#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTriggerState_NodeTypeParams
{
    static constexpr const char* NAME = "questSetTriggerState_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    bool enable; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(SetTriggerState_NodeTypeParams, 0x10);
} // namespace quest
using questSetTriggerState_NodeTypeParams = quest::SetTriggerState_NodeTypeParams;
} // namespace RED4ext

// clang-format on
