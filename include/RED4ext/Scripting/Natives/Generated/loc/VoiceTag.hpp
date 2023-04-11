#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace loc
{
struct VoiceTag
{
    static constexpr const char* NAME = "locVoiceTag";
    static constexpr const char* ALIAS = NAME;

    CName voiceTag; // 00
    bool isApuc; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    CString voicesetScenePath; // 10
    CRUID id; // 30
    uint8_t unk38[0x40 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(VoiceTag, 0x40);
} // namespace loc
using locVoiceTag = loc::VoiceTag;
} // namespace RED4ext

// clang-format on
