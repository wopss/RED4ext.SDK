#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace scn { 
struct RidAnimationContainerSRRefId
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRefId, 0x10);
} // namespace scn
} // namespace RED4ext
