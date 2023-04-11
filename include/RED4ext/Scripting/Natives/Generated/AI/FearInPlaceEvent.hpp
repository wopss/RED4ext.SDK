#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct FearInPlaceEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIFearInPlaceEvent";
    static constexpr const char* ALIAS = "FearInPlaceEvent";

};
RED4EXT_ASSERT_SIZE(FearInPlaceEvent, 0x50);
} // namespace AI
using AIFearInPlaceEvent = AI::FearInPlaceEvent;
using FearInPlaceEvent = AI::FearInPlaceEvent;
} // namespace RED4ext

// clang-format on
