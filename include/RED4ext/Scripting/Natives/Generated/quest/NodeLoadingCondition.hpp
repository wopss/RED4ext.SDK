#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Condition.hpp>

namespace RED4ext
{
namespace quest
{
struct NodeLoadingCondition : quest::Condition
{
    static constexpr const char* NAME = "questNodeLoadingCondition";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 38
    bool inverted; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(NodeLoadingCondition, 0x48);
} // namespace quest
using questNodeLoadingCondition = quest::NodeLoadingCondition;
} // namespace RED4ext

// clang-format on
