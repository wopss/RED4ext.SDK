#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct ISceneManagerNodeType; }

namespace quest
{
struct SceneManagerNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questSceneManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::ISceneManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(SceneManagerNodeDefinition, 0x58);
} // namespace quest
using questSceneManagerNodeDefinition = quest::SceneManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
