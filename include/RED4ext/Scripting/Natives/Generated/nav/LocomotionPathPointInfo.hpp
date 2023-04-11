#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/SerializableSplineProgression.hpp>

namespace RED4ext
{
namespace nav
{
struct LocomotionPathPointInfo
{
    static constexpr const char* NAME = "navLocomotionPathPointInfo";
    static constexpr const char* ALIAS = NAME;

    nav::SerializableSplineProgression point; // 00
    uint32_t userDataIndex; // 08
};
RED4EXT_ASSERT_SIZE(LocomotionPathPointInfo, 0xC);
} // namespace nav
using navLocomotionPathPointInfo = nav::LocomotionPathPointInfo;
} // namespace RED4ext

// clang-format on
