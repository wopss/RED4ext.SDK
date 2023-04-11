#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct BaseObjectNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questBaseObjectNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    NodeRef reference; // 48
};
RED4EXT_ASSERT_SIZE(BaseObjectNodeDefinition, 0x50);
} // namespace quest
using questBaseObjectNodeDefinition = quest::BaseObjectNodeDefinition;
} // namespace RED4ext

// clang-format on
