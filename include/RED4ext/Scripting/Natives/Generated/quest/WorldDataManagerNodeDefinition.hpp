#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IWorldDataManagerNodeType; }

namespace quest
{
struct WorldDataManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questWorldDataManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IWorldDataManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(WorldDataManagerNodeDefinition, 0x58);
} // namespace quest
using questWorldDataManagerNodeDefinition = quest::WorldDataManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
