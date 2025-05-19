#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class EventActionType : int32_t
{
    Play = 0,
    PlayAnimation = 1,
    SetParameter = 2,
    StopSound = 3,
    SetSwitch = 4,
    StopTagged = 5,
    PlayExternal = 6,
    Tag = 7,
    Untag = 8,
    SetAppearanceName = 9,
    SetEntityName = 10,
    AddContainerStreamingPrefetch = 11,
    RemoveContainerStreamingPrefetch = 12,
};
} // namespace audio
using audioEventActionType = audio::EventActionType;
} // namespace RED4ext

// clang-format on
