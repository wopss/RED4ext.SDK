#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct TypedSignalStoppingNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questTypedSignalStoppingNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TypedSignalStoppingNodeDefinition, 0x48);
} // namespace quest
using questTypedSignalStoppingNodeDefinition = quest::TypedSignalStoppingNodeDefinition;
} // namespace RED4ext

// clang-format on
