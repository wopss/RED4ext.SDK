#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITriggerManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SetTriggerState_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTriggerState_NodeType : quest::ITriggerManagerNodeType
{
    static constexpr const char* NAME = "questSetTriggerState_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::SetTriggerState_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(SetTriggerState_NodeType, 0x40);
} // namespace quest
using questSetTriggerState_NodeType = quest::SetTriggerState_NodeType;
} // namespace RED4ext

// clang-format on
