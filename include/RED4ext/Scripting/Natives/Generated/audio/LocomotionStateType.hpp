#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct LocomotionStateType : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioLocomotionStateType";
    static constexpr const char* ALIAS = NAME;

    bool void; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(LocomotionStateType, 0x40);
} // namespace audio
using audioLocomotionStateType = audio::LocomotionStateType;
} // namespace RED4ext

// clang-format on
