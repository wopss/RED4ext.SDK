#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct UpdateEntityHealthListeners_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questUpdateEntityHealthListeners_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityRef; // 38
};
RED4EXT_ASSERT_SIZE(UpdateEntityHealthListeners_NodeType, 0x70);
} // namespace quest
using questUpdateEntityHealthListeners_NodeType = quest::UpdateEntityHealthListeners_NodeType;
} // namespace RED4ext

// clang-format on
