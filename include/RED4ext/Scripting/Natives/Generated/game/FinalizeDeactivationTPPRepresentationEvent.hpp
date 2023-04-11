#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct FinalizeDeactivationTPPRepresentationEvent : red::Event
{
    static constexpr const char* NAME = "gameFinalizeDeactivationTPPRepresentationEvent";
    static constexpr const char* ALIAS = "FinalizeDeactivationTPPRepresentationEvent";

};
RED4EXT_ASSERT_SIZE(FinalizeDeactivationTPPRepresentationEvent, 0x40);
} // namespace game
using gameFinalizeDeactivationTPPRepresentationEvent = game::FinalizeDeactivationTPPRepresentationEvent;
using FinalizeDeactivationTPPRepresentationEvent = game::FinalizeDeactivationTPPRepresentationEvent;
} // namespace RED4ext

// clang-format on
