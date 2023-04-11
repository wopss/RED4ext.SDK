#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct ITarget
{
    static constexpr const char* NAME = "AIITarget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ITarget, 0x8);
} // namespace AI
using AIITarget = AI::ITarget;
} // namespace RED4ext

// clang-format on
