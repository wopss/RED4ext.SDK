#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class OnlineSystemErrors : uint32_t
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
using GOGRewardsSystemErrors = game::OnlineSystemErrors;
} // namespace RED4ext
