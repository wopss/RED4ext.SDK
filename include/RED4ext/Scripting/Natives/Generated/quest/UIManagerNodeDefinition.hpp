#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IUIManagerNodeType; }

namespace quest
{
struct UIManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questUIManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IUIManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(UIManagerNodeDefinition, 0x58);
} // namespace quest
using questUIManagerNodeDefinition = quest::UIManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
