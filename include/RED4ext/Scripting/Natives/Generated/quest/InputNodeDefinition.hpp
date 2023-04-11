#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IONodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct InputNodeDefinition : quest::IONodeDefinition
{
    static constexpr const char* NAME = "questInputNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InputNodeDefinition, 0x50);
} // namespace quest
using questInputNodeDefinition = quest::InputNodeDefinition;
} // namespace RED4ext

// clang-format on
