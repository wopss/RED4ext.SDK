#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeRigMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeRigMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeRigMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::MeleeRigMapItem> mapItems; // 38
};
RED4EXT_ASSERT_SIZE(MeleeRigMap, 0x48);
} // namespace audio
using audioMeleeRigMap = audio::MeleeRigMap;
} // namespace RED4ext

// clang-format on
