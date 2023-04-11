#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoLineEntry.hpp>

namespace RED4ext
{
namespace loc
{
struct VoiceoverMap : ISerializable
{
    static constexpr const char* NAME = "locVoiceoverMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::VoLineEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(VoiceoverMap, 0x40);
} // namespace loc
using locVoiceoverMap = loc::VoiceoverMap;
} // namespace RED4ext

// clang-format on
