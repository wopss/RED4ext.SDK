#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace loc { struct VoResource; }

namespace loc
{
struct VoLineEntry
{
    static constexpr const char* NAME = "locVoLineEntry";
    static constexpr const char* ALIAS = NAME;

    CRUID stringId; // 00
    RaRef<loc::VoResource> femaleResPath; // 08
    RaRef<loc::VoResource> maleResPath; // 10
};
RED4EXT_ASSERT_SIZE(VoLineEntry, 0x18);
} // namespace loc
using locVoLineEntry = loc::VoLineEntry;
} // namespace RED4ext

// clang-format on
