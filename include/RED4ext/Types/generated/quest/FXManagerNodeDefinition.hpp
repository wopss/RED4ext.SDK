#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IFXManagerNodeType; }

namespace quest { 
struct FXManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questFXManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IFXManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(FXManagerNodeDefinition, 0x58);
} // namespace quest
} // namespace RED4ext
