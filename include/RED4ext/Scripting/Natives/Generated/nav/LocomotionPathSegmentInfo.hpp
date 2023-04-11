#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/LocomotionPathSegmentTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/SerializableSplineProgression.hpp>

namespace RED4ext
{
namespace nav
{
struct LocomotionPathSegmentInfo
{
    static constexpr const char* NAME = "navLocomotionPathSegmentInfo";
    static constexpr const char* ALIAS = NAME;

    nav::LocomotionPathSegmentTypes type; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    nav::SerializableSplineProgression segmentEnd; // 04
    uint8_t unk0C[0x10 - 0xC]; // C
    uint64_t offMeshLink; // 10
};
RED4EXT_ASSERT_SIZE(LocomotionPathSegmentInfo, 0x18);
} // namespace nav
using navLocomotionPathSegmentInfo = nav::LocomotionPathSegmentInfo;
} // namespace RED4ext

// clang-format on
