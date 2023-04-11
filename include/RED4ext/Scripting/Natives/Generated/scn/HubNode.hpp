#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn
{
struct HubNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnHubNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(HubNode, 0x48);
} // namespace scn
using scnHubNode = scn::HubNode;
} // namespace RED4ext

// clang-format on
