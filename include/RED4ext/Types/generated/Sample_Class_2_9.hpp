#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Sample_Enum_As_Bitfield_2_9.hpp>

namespace RED4ext
{
struct Sample_Class_2_9
{
    static constexpr const char* NAME = "Sample_Class_2_9";
    static constexpr const char* ALIAS = NAME;

    Sample_Enum_As_Bitfield_2_9 bitField; // 00
};
RED4EXT_ASSERT_SIZE(Sample_Class_2_9, 0x4);
} // namespace RED4ext
