#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn
{
struct NotablePoint
{
    static constexpr const char* NAME = "scnNotablePoint";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    scn::NodeId nodeId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(NotablePoint, 0x10);
} // namespace scn
using scnNotablePoint = scn::NotablePoint;
} // namespace RED4ext

// clang-format on
