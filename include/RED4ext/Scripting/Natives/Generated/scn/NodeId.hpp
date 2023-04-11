#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct NodeId
{
    static constexpr const char* NAME = "scnNodeId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(NodeId, 0x4);
} // namespace scn
using scnNodeId = scn::NodeId;
} // namespace RED4ext

// clang-format on
