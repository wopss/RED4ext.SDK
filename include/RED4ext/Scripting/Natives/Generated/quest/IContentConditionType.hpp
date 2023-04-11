#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct IContentConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questIContentConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IContentConditionType, 0x38);
} // namespace quest
using questIContentConditionType = quest::IContentConditionType;
} // namespace RED4ext

// clang-format on
