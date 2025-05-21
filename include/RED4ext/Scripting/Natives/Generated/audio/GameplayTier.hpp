#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class GameplayTier : int32_t
{
    Undefined = 0,
    Tier1_FullGameplay = 1,
    Tier2_StagedGameplay = 2,
    Tier3_LimitedGameplay = 3,
    Tier4_FPPCinematic = 4,
    Tier5_Cinematic = 5,
};
} // namespace audio
using audioGameplayTier = audio::GameplayTier;
} // namespace RED4ext

// clang-format on
