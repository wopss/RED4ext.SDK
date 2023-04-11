#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeRigMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeRigMapItem";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> matchingRigs; // 38
};
RED4EXT_ASSERT_SIZE(MeleeRigMapItem, 0x48);
} // namespace audio
using audioMeleeRigMapItem = audio::MeleeRigMapItem;
} // namespace RED4ext

// clang-format on
