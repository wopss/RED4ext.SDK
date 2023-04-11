#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimVariable : ISerializable
{
    static constexpr const char* NAME = "animAnimVariable";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
};
RED4EXT_ASSERT_SIZE(AnimVariable, 0x38);
} // namespace anim
using animAnimVariable = anim::AnimVariable;
} // namespace RED4ext

// clang-format on
