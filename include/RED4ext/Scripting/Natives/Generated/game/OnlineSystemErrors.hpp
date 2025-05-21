#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class OnlineSystemErrors : int32_t
{
    None = 0,
    RequestFailed = 1,
    TemporaryFailure = 2,
    NoInternetConnection = 3,
    NotSignedInGalaxy = 4,
    NotSignedInLauncher = 5,
    NotSignedInGame = 6,
};
} // namespace game
using gameOnlineSystemErrors = game::OnlineSystemErrors;
using GOGRewardsSystemErrors = game::OnlineSystemErrors;
} // namespace RED4ext

// clang-format on
