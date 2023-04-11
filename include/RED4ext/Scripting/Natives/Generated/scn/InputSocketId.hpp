#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InputSocketStamp.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn
{
struct InputSocketId
{
    static constexpr const char* NAME = "scnInputSocketId";
    static constexpr const char* ALIAS = NAME;

    scn::NodeId nodeId; // 00
    scn::InputSocketStamp isockStamp; // 04
};
RED4EXT_ASSERT_SIZE(InputSocketId, 0x8);
} // namespace scn
using scnInputSocketId = scn::InputSocketId;
} // namespace RED4ext

// clang-format on
