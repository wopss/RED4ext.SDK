#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentInstancePS.hpp>

namespace RED4ext
{
namespace AI
{
struct FloatArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AIFloatArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    float value; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(FloatArgumentInstancePS, 0x40);
} // namespace AI
using AIFloatArgumentInstancePS = AI::FloatArgumentInstancePS;
} // namespace RED4ext

// clang-format on
