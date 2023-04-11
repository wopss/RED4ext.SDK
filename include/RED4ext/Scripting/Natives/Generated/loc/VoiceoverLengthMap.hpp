#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoLengthEntry.hpp>

namespace RED4ext
{
namespace loc
{
struct VoiceoverLengthMap : ISerializable
{
    static constexpr const char* NAME = "locVoiceoverLengthMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::VoLengthEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(VoiceoverLengthMap, 0x40);
} // namespace loc
using locVoiceoverLengthMap = loc::VoiceoverLengthMap;
} // namespace RED4ext

// clang-format on
