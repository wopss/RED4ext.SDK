#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace interop
{
struct RTTIClassDumpEntry
{
    static constexpr const char* NAME = "interopRTTIClassDumpEntry";
    static constexpr const char* ALIAS = NAME;

    int32_t i; // 00
    int32_t b; // 04
    int32_t r; // 08
    int32_t a; // 0C
};
RED4EXT_ASSERT_SIZE(RTTIClassDumpEntry, 0x10);
} // namespace interop
using interopRTTIClassDumpEntry = interop::RTTIClassDumpEntry;
} // namespace RED4ext

// clang-format on
