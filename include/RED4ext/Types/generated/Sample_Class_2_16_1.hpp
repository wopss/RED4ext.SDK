#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct Sample_Class_2_16_0;

struct Sample_Class_2_16_1
{
    static constexpr const char* NAME = "Sample_Class_2_16_1";
    static constexpr const char* ALIAS = NAME;

    Handle<Sample_Class_2_16_0> MyNameForVariable; // 00
    DynArray<int32_t> ArrayOfInts; // 10
};
RED4EXT_ASSERT_SIZE(Sample_Class_2_16_1, 0x20);
} // namespace RED4ext
