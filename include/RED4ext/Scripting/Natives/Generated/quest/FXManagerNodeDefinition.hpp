#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IFXManagerNodeType; }

namespace quest
{
struct FXManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questFXManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IFXManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(FXManagerNodeDefinition, 0x58);
} // namespace quest
using questFXManagerNodeDefinition = quest::FXManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
