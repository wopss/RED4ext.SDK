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
struct ISyncMethod : ISerializable
{
    static constexpr const char* NAME = "animISyncMethod";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ISyncMethod, 0x30);
} // namespace anim
using animISyncMethod = anim::ISyncMethod;
} // namespace RED4ext

// clang-format on
