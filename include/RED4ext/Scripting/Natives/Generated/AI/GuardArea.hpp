#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) GuardArea
{
    static constexpr const char* NAME = "AIGuardArea";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xA0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GuardArea, 0xA0);
} // namespace AI
using AIGuardArea = AI::GuardArea;
} // namespace RED4ext

// clang-format on
