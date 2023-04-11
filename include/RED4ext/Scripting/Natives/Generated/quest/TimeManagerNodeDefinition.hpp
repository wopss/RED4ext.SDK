#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct ITimeManagerNodeType; }

namespace quest
{
struct TimeManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questTimeManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ITimeManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(TimeManagerNodeDefinition, 0x58);
} // namespace quest
using questTimeManagerNodeDefinition = quest::TimeManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
