#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBaseCondition.hpp>

namespace RED4ext
{
namespace quest
{
struct TypedCondition : quest::IBaseCondition
{
    static constexpr const char* NAME = "questTypedCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TypedCondition, 0x30);
} // namespace quest
using questTypedCondition = quest::TypedCondition;
} // namespace RED4ext

// clang-format on
