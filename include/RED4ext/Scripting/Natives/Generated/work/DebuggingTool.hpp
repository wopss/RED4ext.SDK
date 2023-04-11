#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace work
{
struct DebuggingTool
{
    static constexpr const char* NAME = "workDebuggingTool";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DebuggingTool, 0x18);
} // namespace work
using workDebuggingTool = work::DebuggingTool;
} // namespace RED4ext

// clang-format on
