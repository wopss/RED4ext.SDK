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
struct RigMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRigMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> positionBones; // 38
    CName defaultBone; // 48
};
RED4EXT_ASSERT_SIZE(RigMetadata, 0x50);
} // namespace audio
using audioRigMetadata = audio::RigMetadata;
} // namespace RED4ext

// clang-format on
