#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
struct Sample_Class_2_8
{
    static constexpr const char* NAME = "Sample_Class_2_8";
    static constexpr const char* ALIAS = NAME;

    DynArray<int32_t> array; // 00
};
RED4EXT_ASSERT_SIZE(Sample_Class_2_8, 0x10);
} // namespace RED4ext
