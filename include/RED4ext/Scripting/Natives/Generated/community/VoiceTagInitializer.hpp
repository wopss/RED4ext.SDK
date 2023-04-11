#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/SpawnInitializer.hpp>

namespace RED4ext
{
namespace community
{
struct VoiceTagInitializer : community::SpawnInitializer
{
    static constexpr const char* NAME = "communityVoiceTagInitializer";
    static constexpr const char* ALIAS = NAME;

    CName voiceTagName; // 30
};
RED4EXT_ASSERT_SIZE(VoiceTagInitializer, 0x38);
} // namespace community
using communityVoiceTagInitializer = community::VoiceTagInitializer;
} // namespace RED4ext

// clang-format on
