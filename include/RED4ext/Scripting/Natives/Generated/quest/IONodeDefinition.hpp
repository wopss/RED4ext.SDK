#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct IONodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questIONodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName socketName; // 48
};
RED4EXT_ASSERT_SIZE(IONodeDefinition, 0x50);
} // namespace quest
} // namespace RED4ext
