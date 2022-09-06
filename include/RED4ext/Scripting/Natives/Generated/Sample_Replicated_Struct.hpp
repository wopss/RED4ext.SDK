#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Sample_Replicated_Struct
{
    static constexpr const char* NAME = "Sample_Replicated_Struct";
    static constexpr const char* ALIAS = NAME;

    bool a; // 00
    bool b; // 01
    bool c; // 02
    bool d_not_replicated_still_OK; // 03
};
RED4EXT_ASSERT_SIZE(Sample_Replicated_Struct, 0x4);
} // namespace RED4ext

// clang-format on
