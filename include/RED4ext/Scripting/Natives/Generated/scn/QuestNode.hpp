#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace quest { struct NodeDefinition; }

namespace scn
{
struct QuestNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnQuestNode";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::NodeDefinition> questNode; // 48
    DynArray<CName> isockMappings; // 58
    DynArray<CName> osockMappings; // 68
};
RED4EXT_ASSERT_SIZE(QuestNode, 0x78);
} // namespace scn
using scnQuestNode = scn::QuestNode;
} // namespace RED4ext

// clang-format on
