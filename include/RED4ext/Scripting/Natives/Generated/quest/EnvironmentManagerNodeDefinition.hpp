#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IEnvironmentManagerNodeType; }

namespace quest { 
struct EnvironmentManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questEnvironmentManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IEnvironmentManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(EnvironmentManagerNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
