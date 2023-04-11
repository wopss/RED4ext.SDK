#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Inspect_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questInspect_ConditionType";
    static constexpr const char* ALIAS = NAME;

    CString objectID; // 38
    bool inverted; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(Inspect_ConditionType, 0x60);
} // namespace quest
using questInspect_ConditionType = quest::Inspect_ConditionType;
} // namespace RED4ext

// clang-format on
