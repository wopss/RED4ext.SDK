#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidAnimationContainerSRRefAnimContainer.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationContainerSRRef
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRef";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::RidAnimationContainerSRRefAnimContainer> animations; // 00
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRef, 0x10);
} // namespace scn
using scnRidAnimationContainerSRRef = scn::RidAnimationContainerSRRef;
} // namespace RED4ext

// clang-format on
