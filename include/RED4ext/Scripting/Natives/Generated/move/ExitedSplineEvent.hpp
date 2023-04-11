#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace move
{
struct ExitedSplineEvent : red::Event
{
    static constexpr const char* NAME = "moveExitedSplineEvent";
    static constexpr const char* ALIAS = "ExitedSplineEvent";

};
RED4EXT_ASSERT_SIZE(ExitedSplineEvent, 0x40);
} // namespace move
using moveExitedSplineEvent = move::ExitedSplineEvent;
using ExitedSplineEvent = move::ExitedSplineEvent;
} // namespace RED4ext

// clang-format on
