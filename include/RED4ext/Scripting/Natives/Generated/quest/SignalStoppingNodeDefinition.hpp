#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct SignalStoppingNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questSignalStoppingNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SignalStoppingNodeDefinition, 0x48);
} // namespace quest
} // namespace RED4ext
