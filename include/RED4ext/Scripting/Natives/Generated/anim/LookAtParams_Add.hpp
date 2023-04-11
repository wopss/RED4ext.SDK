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
struct LookAtParams_Add : ISerializable
{
    static constexpr const char* NAME = "animLookAtParams_Add";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0xB0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LookAtParams_Add, 0xB0);
} // namespace anim
using animLookAtParams_Add = anim::LookAtParams_Add;
} // namespace RED4ext

// clang-format on
