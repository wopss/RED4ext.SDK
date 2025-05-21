#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class OnlineSystemStatus : int32_t
{
    Uninitialized = 0,
    GeneratingCPID = 1,
    CheckingRegistrationStatus = 2,
    RegistrationPending = 3,
    Registered = 4,
    Error = 5,
};
} // namespace game
using gameOnlineSystemStatus = game::OnlineSystemStatus;
using GOGRewardsSystemStatus = game::OnlineSystemStatus;
} // namespace RED4ext

// clang-format on
