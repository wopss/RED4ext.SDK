#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LookAtDrivenTurnsMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct LookAtDrivenTurnsNode : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questLookAtDrivenTurnsNode";
    static constexpr const char* ALIAS = NAME;

    quest::LookAtDrivenTurnsMode mode; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    game::EntityReference puppetRef; // 50
    game::EntityReference targetRef; // 88
    bool canLookAtDrivenTurnsInterruptGesture; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
};
RED4EXT_ASSERT_SIZE(LookAtDrivenTurnsNode, 0xC8);
} // namespace quest
using questLookAtDrivenTurnsNode = quest::LookAtDrivenTurnsNode;
} // namespace RED4ext

// clang-format on
