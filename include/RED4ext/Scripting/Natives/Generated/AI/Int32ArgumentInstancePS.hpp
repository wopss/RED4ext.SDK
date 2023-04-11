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
struct Int32ArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AIInt32ArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(Int32ArgumentInstancePS, 0x40);
} // namespace AI
using AIInt32ArgumentInstancePS = AI::Int32ArgumentInstancePS;
} // namespace RED4ext

// clang-format on
