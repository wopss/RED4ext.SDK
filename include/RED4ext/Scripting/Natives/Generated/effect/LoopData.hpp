#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace effect
{
struct LoopData
{
    static constexpr const char* NAME = "effectLoopData";
    static constexpr const char* ALIAS = NAME;

    float startTime; // 00
    float endTime; // 04
};
RED4EXT_ASSERT_SIZE(LoopData, 0x8);
} // namespace effect
using effectLoopData = effect::LoopData;
} // namespace RED4ext

// clang-format on
