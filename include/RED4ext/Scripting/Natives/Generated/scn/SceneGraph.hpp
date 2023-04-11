#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn { struct SceneGraphNode; }

namespace scn
{
struct SceneGraph : ISerializable
{
    static constexpr const char* NAME = "scnSceneGraph";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::SceneGraphNode>> graph; // 30
    DynArray<scn::NodeId> startNodes; // 40
    DynArray<scn::NodeId> endNodes; // 50
};
RED4EXT_ASSERT_SIZE(SceneGraph, 0x60);
} // namespace scn
using scnSceneGraph = scn::SceneGraph;
} // namespace RED4ext

// clang-format on
