#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct PuppetsEffector; }

namespace quest
{
struct PuppeteerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questPuppeteerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::PuppetsEffector> effector; // 48
    game::EntityReference reference; // 58
};
RED4EXT_ASSERT_SIZE(PuppeteerNodeDefinition, 0x90);
} // namespace quest
using questPuppeteerNodeDefinition = quest::PuppeteerNodeDefinition;
} // namespace RED4ext

// clang-format on
