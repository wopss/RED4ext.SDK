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
struct LookAtParams_UpdatePositions : ISerializable
{
    static constexpr const char* NAME = "animLookAtParams_UpdatePositions";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LookAtParams_UpdatePositions, 0x40);
} // namespace anim
using animLookAtParams_UpdatePositions = anim::LookAtParams_UpdatePositions;
} // namespace RED4ext

// clang-format on
