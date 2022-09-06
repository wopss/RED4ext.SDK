#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct Sample_Replicated_String_Property
{
    static constexpr const char* NAME = "Sample_Replicated_String_Property";
    static constexpr const char* ALIAS = NAME;

    CString property; // 00
};
RED4EXT_ASSERT_SIZE(Sample_Replicated_String_Property, 0x20);
} // namespace RED4ext

// clang-format on
