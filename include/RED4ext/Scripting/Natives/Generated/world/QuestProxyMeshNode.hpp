#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct QuestProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldQuestProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(QuestProxyMeshNode, 0x60);
} // namespace world
using worldQuestProxyMeshNode = world::QuestProxyMeshNode;
} // namespace RED4ext

// clang-format on
