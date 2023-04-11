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
struct IAnimNodeSourceChannel_QsTransform : ISerializable
{
    static constexpr const char* NAME = "animIAnimNodeSourceChannel_QsTransform";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IAnimNodeSourceChannel_QsTransform, 0x30);
} // namespace anim
using animIAnimNodeSourceChannel_QsTransform = anim::IAnimNodeSourceChannel_QsTransform;
} // namespace RED4ext

// clang-format on
