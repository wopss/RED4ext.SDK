#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink::anim {
enum class EventType : int8_t
{
    OnLoaded = 0,
    OnStart = 1,
    OnFinish = 2,
    OnPause = 3,
    OnResume = 4,
    OnStartLoop = 5,
    OnEndLoop = 6,
};
} // namespace ink::anim
using inkanimEventType = ink::anim::EventType;
} // namespace RED4ext

// clang-format on
