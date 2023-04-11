#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
struct CResource;
namespace audio { struct LocomotionCustomActionVfxDictionary; }
namespace audio { struct LocomotionStateVfxDictionary; }

namespace audio
{
struct FootwearVsMaterialVfxMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootwearVsMaterialVfxMetadata";
    static constexpr const char* ALIAS = NAME;

    CName footwearType; // 38
    RaRef<CResource> defaultVfx; // 40
    Handle<audio::LocomotionStateVfxDictionary> locomotionStates; // 48
    Handle<audio::LocomotionCustomActionVfxDictionary> customActionVfx; // 58
};
RED4EXT_ASSERT_SIZE(FootwearVsMaterialVfxMetadata, 0x68);
} // namespace audio
using audioFootwearVsMaterialVfxMetadata = audio::FootwearVsMaterialVfxMetadata;
} // namespace RED4ext

// clang-format on
