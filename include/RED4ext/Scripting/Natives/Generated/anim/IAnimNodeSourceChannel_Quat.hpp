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
struct IAnimNodeSourceChannel_Quat : ISerializable
{
    static constexpr const char* NAME = "animIAnimNodeSourceChannel_Quat";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IAnimNodeSourceChannel_Quat, 0x30);
} // namespace anim
using animIAnimNodeSourceChannel_Quat = anim::IAnimNodeSourceChannel_Quat;
} // namespace RED4ext

// clang-format on
