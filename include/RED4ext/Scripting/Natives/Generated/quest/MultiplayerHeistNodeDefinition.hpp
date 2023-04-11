#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IMultiplayerHeistNodeType; }

namespace quest
{
struct MultiplayerHeistNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerHeistNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IMultiplayerHeistNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(MultiplayerHeistNodeDefinition, 0x58);
} // namespace quest
using questMultiplayerHeistNodeDefinition = quest::MultiplayerHeistNodeDefinition;
} // namespace RED4ext

// clang-format on
