#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct Rumble_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questRumble_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName rumbleEvent; // 38
    game::EntityReference objectRef; // 40
    bool isPlayer; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(Rumble_NodeType, 0x80);
} // namespace quest
using questRumble_NodeType = quest::Rumble_NodeType;
} // namespace RED4ext

// clang-format on
