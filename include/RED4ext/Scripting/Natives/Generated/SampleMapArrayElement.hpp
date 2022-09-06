#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct SampleMapArrayElement
{
    static constexpr const char* NAME = "SampleMapArrayElement";
    static constexpr const char* ALIAS = NAME;

    uint32_t myKey; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString someStringProperty; // 08
    DynArray<CString> someArrayProperty; // 28
};
RED4EXT_ASSERT_SIZE(SampleMapArrayElement, 0x38);
} // namespace RED4ext

// clang-format on
