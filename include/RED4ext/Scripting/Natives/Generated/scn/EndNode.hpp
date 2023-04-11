#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EndNodeNsType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn
{
struct EndNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnEndNode";
    static constexpr const char* ALIAS = NAME;

    scn::EndNodeNsType type; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(EndNode, 0x50);
} // namespace scn
using scnEndNode = scn::EndNode;
} // namespace RED4ext

// clang-format on
