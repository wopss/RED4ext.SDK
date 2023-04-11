#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace loc
{
struct VoLengthEntry
{
    static constexpr const char* NAME = "locVoLengthEntry";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 00
    float femaleLength; // 08
    float maleLength; // 0C
};
RED4EXT_ASSERT_SIZE(VoLengthEntry, 0x10);
} // namespace loc
using locVoLengthEntry = loc::VoLengthEntry;
} // namespace RED4ext

// clang-format on
