#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct EmbeddedGraphNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questEmbeddedGraphNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EmbeddedGraphNodeDefinition, 0x48);
} // namespace quest
} // namespace RED4ext
