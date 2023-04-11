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
struct IAnimNodeSourceChannel_Float : ISerializable
{
    static constexpr const char* NAME = "animIAnimNodeSourceChannel_Float";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IAnimNodeSourceChannel_Float, 0x30);
} // namespace anim
using animIAnimNodeSourceChannel_Float = anim::IAnimNodeSourceChannel_Float;
} // namespace RED4ext

// clang-format on
