#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct UtilsCachedBoolValue
{
    static constexpr const char* NAME = "AIUtilsCachedBoolValue";
    static constexpr const char* ALIAS = "CachedBoolValue";

    uint8_t unk00[0x3 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(UtilsCachedBoolValue, 0x3);
} // namespace AI
using AIUtilsCachedBoolValue = AI::UtilsCachedBoolValue;
using CachedBoolValue = AI::UtilsCachedBoolValue;
} // namespace RED4ext

// clang-format on
