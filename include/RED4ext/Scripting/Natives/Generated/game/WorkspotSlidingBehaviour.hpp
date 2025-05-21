#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class WorkspotSlidingBehaviour : int32_t
{
    DontPlayAtResourcePosition = 0,
    PlayAtResourcePosition = 1,
    SlideActorAndRotateDevice = 2,
};
} // namespace game
using gameWorkspotSlidingBehaviour = game::WorkspotSlidingBehaviour;
using WorkspotSlidingBehaviour = game::WorkspotSlidingBehaviour;
} // namespace RED4ext

// clang-format on
