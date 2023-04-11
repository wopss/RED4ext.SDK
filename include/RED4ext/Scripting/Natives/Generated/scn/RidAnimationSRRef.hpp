#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidResourceId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidSerialNumber.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationSRRef
{
    static constexpr const char* NAME = "scnRidAnimationSRRef";
    static constexpr const char* ALIAS = NAME;

    scn::RidResourceId resourceId; // 00
    scn::RidSerialNumber animationSN; // 04
};
RED4EXT_ASSERT_SIZE(RidAnimationSRRef, 0x8);
} // namespace scn
using scnRidAnimationSRRef = scn::RidAnimationSRRef;
} // namespace RED4ext

// clang-format on
