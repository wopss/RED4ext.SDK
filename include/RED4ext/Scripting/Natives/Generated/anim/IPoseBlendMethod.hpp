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
struct IPoseBlendMethod : ISerializable
{
    static constexpr const char* NAME = "animIPoseBlendMethod";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IPoseBlendMethod, 0x30);
} // namespace anim
using animIPoseBlendMethod = anim::IPoseBlendMethod;
} // namespace RED4ext

// clang-format on
