#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct SMeshTopology
{
    static constexpr const char* NAME = "SMeshTopology";
    static constexpr const char* ALIAS = NAME;

    DataBuffer data; // 00
    DataBuffer metadata; // 28
};
RED4EXT_ASSERT_SIZE(SMeshTopology, 0x50);
} // namespace RED4ext

// clang-format on
