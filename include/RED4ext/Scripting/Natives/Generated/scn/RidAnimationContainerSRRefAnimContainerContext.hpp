#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/GenderMask.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationContainerSRRefAnimContainerContext
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRefAnimContainerContext";
    static constexpr const char* ALIAS = NAME;

    scn::GenderMask genderMask; // 00
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRefAnimContainerContext, 0x1);
} // namespace scn
using scnRidAnimationContainerSRRefAnimContainerContext = scn::RidAnimationContainerSRRefAnimContainerContext;
} // namespace RED4ext

// clang-format on
