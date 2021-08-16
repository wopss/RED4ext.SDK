#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct SRRefId
{
    static constexpr const char* NAME = "scnSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint32_t id; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(SRRefId, 0x10);
} // namespace scn
} // namespace RED4ext
