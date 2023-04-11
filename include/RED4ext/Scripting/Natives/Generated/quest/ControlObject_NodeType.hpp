#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNonSignalStoppingNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ControlObject_NodeType : quest::IGameManagerNonSignalStoppingNodeType
{
    static constexpr const char* NAME = "questControlObject_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
};
RED4EXT_ASSERT_SIZE(ControlObject_NodeType, 0x70);
} // namespace quest
using questControlObject_NodeType = quest::ControlObject_NodeType;
} // namespace RED4ext

// clang-format on
