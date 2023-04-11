#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/OutputSocketStamp.hpp>

namespace RED4ext
{
namespace scn
{
struct OutputSocketId
{
    static constexpr const char* NAME = "scnOutputSocketId";
    static constexpr const char* ALIAS = NAME;

    scn::NodeId nodeId; // 00
    scn::OutputSocketStamp osockStamp; // 04
};
RED4EXT_ASSERT_SIZE(OutputSocketId, 0x8);
} // namespace scn
using scnOutputSocketId = scn::OutputSocketId;
} // namespace RED4ext

// clang-format on
