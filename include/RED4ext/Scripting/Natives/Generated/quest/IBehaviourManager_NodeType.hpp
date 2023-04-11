#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRetNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IBehaviourManager_NodeType : quest::IRetNodeType
{
    static constexpr const char* NAME = "questIBehaviourManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    game::EntityReference puppetRef; // 38
};
RED4EXT_ASSERT_SIZE(IBehaviourManager_NodeType, 0x70);
} // namespace quest
using questIBehaviourManager_NodeType = quest::IBehaviourManager_NodeType;
} // namespace RED4ext

// clang-format on
