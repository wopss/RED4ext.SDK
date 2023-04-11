#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IMotionTableProvider.hpp>

namespace RED4ext
{
namespace anim
{
struct MotionTableProvider_Default : anim::IMotionTableProvider
{
    static constexpr const char* NAME = "animMotionTableProvider_Default";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MotionTableProvider_Default, 0x50);
} // namespace anim
using animMotionTableProvider_Default = anim::MotionTableProvider_Default;
} // namespace RED4ext

// clang-format on
