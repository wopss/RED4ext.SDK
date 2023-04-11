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
struct Uint64ArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AIUint64ArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    uint64_t value; // 38
};
RED4EXT_ASSERT_SIZE(Uint64ArgumentInstancePS, 0x40);
} // namespace AI
using AIUint64ArgumentInstancePS = AI::Uint64ArgumentInstancePS;
} // namespace RED4ext

// clang-format on
