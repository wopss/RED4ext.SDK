#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ConditionItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ESwitchBehaviourType.hpp>

namespace RED4ext
{
namespace quest
{
struct SwitchNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questSwitchNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::ESwitchBehaviourType behaviour; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    DynArray<quest::ConditionItem> conditions; // 50
};
RED4EXT_ASSERT_SIZE(SwitchNodeDefinition, 0x60);
} // namespace quest
using questSwitchNodeDefinition = quest::SwitchNodeDefinition;
} // namespace RED4ext

// clang-format on
