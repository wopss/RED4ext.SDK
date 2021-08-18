#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>

namespace RED4ext
{
namespace scn { 
struct EntryPoint
{
    static constexpr const char* NAME = "scnEntryPoint";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    scn::NodeId nodeId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(EntryPoint, 0x10);
} // namespace scn
} // namespace RED4ext
