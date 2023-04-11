#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct LocomotionCustomActionEventDictionary; }
namespace audio { struct LocomotionStateEventDictionary; }

namespace audio
{
struct FootwearVsMaterialMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootwearVsMaterialMetadata";
    static constexpr const char* ALIAS = NAME;

    CName footwearType; // 38
    CName defaultFootstep; // 40
    CName skidEvent; // 48
    Handle<audio::LocomotionStateEventDictionary> locomotionStates; // 50
    Handle<audio::LocomotionCustomActionEventDictionary> customActionEvents; // 60
};
RED4EXT_ASSERT_SIZE(FootwearVsMaterialMetadata, 0x70);
} // namespace audio
using audioFootwearVsMaterialMetadata = audio::FootwearVsMaterialMetadata;
} // namespace RED4ext

// clang-format on
