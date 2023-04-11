#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationContainerSRRefAnimContainerContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationSRRefId.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationContainerSRRefAnimContainer
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRefAnimContainer";
    static constexpr const char* ALIAS = NAME;

    scn::RidAnimationSRRefId animation; // 00
    scn::RidAnimationContainerSRRefAnimContainerContext context; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRefAnimContainer, 0x8);
} // namespace scn
using scnRidAnimationContainerSRRefAnimContainer = scn::RidAnimationContainerSRRefAnimContainer;
} // namespace RED4ext

// clang-format on
