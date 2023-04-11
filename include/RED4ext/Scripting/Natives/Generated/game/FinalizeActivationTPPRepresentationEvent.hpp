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
struct FinalizeActivationTPPRepresentationEvent : red::Event
{
    static constexpr const char* NAME = "gameFinalizeActivationTPPRepresentationEvent";
    static constexpr const char* ALIAS = "FinalizeActivationTPPRepresentationEvent";

};
RED4EXT_ASSERT_SIZE(FinalizeActivationTPPRepresentationEvent, 0x40);
} // namespace game
using gameFinalizeActivationTPPRepresentationEvent = game::FinalizeActivationTPPRepresentationEvent;
using FinalizeActivationTPPRepresentationEvent = game::FinalizeActivationTPPRepresentationEvent;
} // namespace RED4ext

// clang-format on
