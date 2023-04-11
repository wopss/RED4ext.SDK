#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct Scene_NodeType : quest::SpawnManagerNodeType
{
    static constexpr const char* NAME = "questScene_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 38
};
RED4EXT_ASSERT_SIZE(Scene_NodeType, 0x70);
} // namespace quest
using questScene_NodeType = quest::Scene_NodeType;
} // namespace RED4ext

// clang-format on
