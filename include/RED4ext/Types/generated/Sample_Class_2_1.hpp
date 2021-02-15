#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
struct Sample_Class_2_1
{
    static constexpr const char* NAME = "Sample_Class_2_1";
    static constexpr const char* ALIAS = NAME;

    int32_t var0; // 00
    float var1; // 04
    CString var2; // 08
    CName var3; // 28
};
RED4EXT_ASSERT_SIZE(Sample_Class_2_1, 0x30);
} // namespace RED4ext
