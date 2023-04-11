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
struct IStaticCondition : ISerializable
{
    static constexpr const char* NAME = "animIStaticCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IStaticCondition, 0x30);
} // namespace anim
using animIStaticCondition = anim::IStaticCondition;
} // namespace RED4ext

// clang-format on
