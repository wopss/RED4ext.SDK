#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct StopAutoDriveOnDestinationReachedRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameStopAutoDriveOnDestinationReachedRequest";
    static constexpr const char* ALIAS = "StopAutoDriveOnDestinationReachedRequest";

};
RED4EXT_ASSERT_SIZE(StopAutoDriveOnDestinationReachedRequest, 0x48);
} // namespace game
using gameStopAutoDriveOnDestinationReachedRequest = game::StopAutoDriveOnDestinationReachedRequest;
using StopAutoDriveOnDestinationReachedRequest = game::StopAutoDriveOnDestinationReachedRequest;
} // namespace RED4ext

// clang-format on
