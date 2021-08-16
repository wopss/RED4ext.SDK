#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IMultiplayerHeistNodeType; }

namespace quest { 
struct MultiplayerHeistNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questMultiplayerHeistNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IMultiplayerHeistNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(MultiplayerHeistNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
