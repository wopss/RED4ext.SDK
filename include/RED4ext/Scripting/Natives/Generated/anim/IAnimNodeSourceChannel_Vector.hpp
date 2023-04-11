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
struct IAnimNodeSourceChannel_Vector : ISerializable
{
    static constexpr const char* NAME = "animIAnimNodeSourceChannel_Vector";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IAnimNodeSourceChannel_Vector, 0x30);
} // namespace anim
using animIAnimNodeSourceChannel_Vector = anim::IAnimNodeSourceChannel_Vector;
} // namespace RED4ext

// clang-format on
