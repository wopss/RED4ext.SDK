#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Device_ConditionFunctionParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Device_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questDevice_ConditionType";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 38
    CName deviceControllerClass; // 40
    CName deviceConditionFunction; // 48
    DynArray<quest::Device_ConditionFunctionParameter> functionParameters; // 50
};
RED4EXT_ASSERT_SIZE(Device_ConditionType, 0x60);
} // namespace quest
using questDevice_ConditionType = quest::Device_ConditionType;
} // namespace RED4ext

// clang-format on
