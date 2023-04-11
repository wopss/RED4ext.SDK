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
struct RidCameraAnimationSRRef
{
    static constexpr const char* NAME = "scnRidCameraAnimationSRRef";
    static constexpr const char* ALIAS = NAME;

    scn::RidResourceId resourceId; // 00
    scn::RidSerialNumber animationSN; // 04
};
RED4EXT_ASSERT_SIZE(RidCameraAnimationSRRef, 0x8);
} // namespace scn
using scnRidCameraAnimationSRRef = scn::RidCameraAnimationSRRef;
} // namespace RED4ext

// clang-format on
