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
struct PrepareTPPRepresentationEvent : red::Event
{
    static constexpr const char* NAME = "gamePrepareTPPRepresentationEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PrepareTPPRepresentationEvent, 0x40);
} // namespace game
using gamePrepareTPPRepresentationEvent = game::PrepareTPPRepresentationEvent;
} // namespace RED4ext

// clang-format on
