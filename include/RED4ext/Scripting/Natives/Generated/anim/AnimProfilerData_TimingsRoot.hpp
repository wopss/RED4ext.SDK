#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimProfilerData_Timings.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimProfilerData_TimingsRoot : ISerializable
{
    static constexpr const char* NAME = "animAnimProfilerData_TimingsRoot";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimProfilerData_Timings> timings; // 30
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_TimingsRoot, 0x40);
} // namespace anim
using animAnimProfilerData_TimingsRoot = anim::AnimProfilerData_TimingsRoot;
} // namespace RED4ext

// clang-format on
