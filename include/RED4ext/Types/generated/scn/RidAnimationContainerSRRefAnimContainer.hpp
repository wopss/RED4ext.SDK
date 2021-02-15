#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/scn/RidAnimationContainerSRRefAnimContainerContext.hpp>
#include <RED4ext/Types/generated/scn/RidAnimationSRRefId.hpp>

namespace RED4ext
{
namespace scn { 
struct RidAnimationContainerSRRefAnimContainer
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRefAnimContainer";
    static constexpr const char* ALIAS = NAME;

    scn::RidAnimationSRRefId animation; // 00
    scn::RidAnimationContainerSRRefAnimContainerContext context; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRefAnimContainer, 0x18);
} // namespace scn
} // namespace RED4ext
