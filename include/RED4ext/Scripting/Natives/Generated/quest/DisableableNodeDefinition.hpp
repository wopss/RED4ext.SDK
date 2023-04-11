#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/NodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct DisableableNodeDefinition : quest::NodeDefinition
{
    static constexpr const char* NAME = "questDisableableNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DisableableNodeDefinition, 0x48);
} // namespace quest
using questDisableableNodeDefinition = quest::DisableableNodeDefinition;
} // namespace RED4ext

// clang-format on
