#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct RotateToParams; }

namespace quest
{
struct RotateToNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questRotateToNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    Handle<quest::RotateToParams> params; // 80
};
RED4EXT_ASSERT_SIZE(RotateToNodeDefinition, 0x90);
} // namespace quest
using questRotateToNodeDefinition = quest::RotateToNodeDefinition;
} // namespace RED4ext

// clang-format on
