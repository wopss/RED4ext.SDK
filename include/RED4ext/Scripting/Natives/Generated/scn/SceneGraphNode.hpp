#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/FastForwardStrategy.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OutputSocket.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneGraphNode : ISerializable
{
    static constexpr const char* NAME = "scnSceneGraphNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::OutputSocket> outputSockets; // 30
    scn::NodeId nodeId; // 40
    scn::FastForwardStrategy ffStrategy; // 44
};
RED4EXT_ASSERT_SIZE(SceneGraphNode, 0x48);
} // namespace scn
using scnSceneGraphNode = scn::SceneGraphNode;
} // namespace RED4ext

// clang-format on
