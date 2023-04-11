#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IScriptable;

namespace script
{
struct OptimizationsHandleWithValue
{
    static constexpr const char* NAME = "scriptOptimizationsHandleWithValue";
    static constexpr const char* ALIAS = "HandleWithValue";

    float value; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<IScriptable> handle; // 08
};
RED4EXT_ASSERT_SIZE(OptimizationsHandleWithValue, 0x18);
} // namespace script
using scriptOptimizationsHandleWithValue = script::OptimizationsHandleWithValue;
using HandleWithValue = script::OptimizationsHandleWithValue;
} // namespace RED4ext

// clang-format on
