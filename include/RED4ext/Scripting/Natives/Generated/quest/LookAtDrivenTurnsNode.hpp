#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LookAtDrivenTurnsMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct LookAtDrivenTurnsNode : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questLookAtDrivenTurnsNode";
    static constexpr const char* ALIAS = NAME;

    quest::LookAtDrivenTurnsMode mode; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    game::EntityReference puppetRef; // 50
    bool canLookAtDrivenTurnsInterruptGesture; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(LookAtDrivenTurnsNode, 0x90);
} // namespace quest
} // namespace RED4ext
