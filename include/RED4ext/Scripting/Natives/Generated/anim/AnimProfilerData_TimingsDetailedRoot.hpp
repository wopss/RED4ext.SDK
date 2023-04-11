#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimProfilerData_SectionTimings.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimProfilerData_TimingsDetailed.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimProfilerData_TimingsDetailedRoot : ISerializable
{
    static constexpr const char* NAME = "animAnimProfilerData_TimingsDetailedRoot";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimProfilerData_SectionTimings> sections; // 30
    DynArray<anim::AnimProfilerData_TimingsDetailed> timings; // 40
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_TimingsDetailedRoot, 0x50);
} // namespace anim
using animAnimProfilerData_TimingsDetailedRoot = anim::AnimProfilerData_TimingsDetailedRoot;
} // namespace RED4ext

// clang-format on
