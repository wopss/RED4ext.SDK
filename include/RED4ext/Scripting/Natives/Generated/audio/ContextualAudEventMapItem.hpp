#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct ContextualAudEventMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioContextualAudEventMapItem";
    static constexpr const char* ALIAS = NAME;

    CName context; // 38
    CName event; // 40
};
RED4EXT_ASSERT_SIZE(ContextualAudEventMapItem, 0x48);
} // namespace audio
using audioContextualAudEventMapItem = audio::ContextualAudEventMapItem;
} // namespace RED4ext

// clang-format on
