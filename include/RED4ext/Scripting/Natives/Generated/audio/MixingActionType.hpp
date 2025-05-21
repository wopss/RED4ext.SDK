#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class MixingActionType : int8_t
{
    VoContext = 0,
    EmitterTag = 1,
    SoundTag = 2,
    ActorName = 3,
    DisableCombatVo = 4,
    GlobalParameter = 5,
};
} // namespace audio
using audioMixingActionType = audio::MixingActionType;
} // namespace RED4ext

// clang-format on
