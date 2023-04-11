#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct MultiplayerJunctionDialogNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerJunctionDialogNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MultiplayerJunctionDialogNodeDefinition, 0x48);
} // namespace quest
using questMultiplayerJunctionDialogNodeDefinition = quest::MultiplayerJunctionDialogNodeDefinition;
} // namespace RED4ext

// clang-format on
