#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/StartEndNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct StartNodeDefinition : quest::StartEndNodeDefinition
{
    static constexpr const char* NAME = "questStartNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StartNodeDefinition, 0x48);
} // namespace quest
using questStartNodeDefinition = quest::StartNodeDefinition;
} // namespace RED4ext

// clang-format on
