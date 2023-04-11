#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct IAnimStateTransitionInterpolator : ISerializable
{
    static constexpr const char* NAME = "animIAnimStateTransitionInterpolator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IAnimStateTransitionInterpolator, 0x30);
} // namespace anim
using animIAnimStateTransitionInterpolator = anim::IAnimStateTransitionInterpolator;
} // namespace RED4ext

// clang-format on
