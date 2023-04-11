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
struct BoolArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AIBoolArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    bool value; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(BoolArgumentInstancePS, 0x40);
} // namespace AI
using AIBoolArgumentInstancePS = AI::BoolArgumentInstancePS;
} // namespace RED4ext

// clang-format on
