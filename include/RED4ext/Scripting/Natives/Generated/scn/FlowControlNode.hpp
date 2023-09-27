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
struct FlowControlNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnFlowControlNode";
    static constexpr const char* ALIAS = NAME;

    bool isOpen; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    uint32_t opensAt; // 4C
    uint32_t closesAt; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(FlowControlNode, 0x58);
} // namespace scn
using scnFlowControlNode = scn::FlowControlNode;
} // namespace RED4ext

// clang-format on
