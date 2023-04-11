#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn
{
struct NodeSymbol
{
    static constexpr const char* NAME = "scnNodeSymbol";
    static constexpr const char* ALIAS = NAME;

    scn::NodeId nodeId; // 00
    scn::NodeId editorNodeId; // 04
    uint64_t editorEventId; // 08
};
RED4EXT_ASSERT_SIZE(NodeSymbol, 0x10);
} // namespace scn
using scnNodeSymbol = scn::NodeSymbol;
} // namespace RED4ext

// clang-format on
