#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { 
struct StartEndNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questStartEndNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StartEndNodeDefinition, 0x48);
} // namespace quest
} // namespace RED4ext
