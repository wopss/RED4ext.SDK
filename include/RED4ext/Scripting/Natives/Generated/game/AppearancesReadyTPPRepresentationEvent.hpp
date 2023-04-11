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
struct AppearancesReadyTPPRepresentationEvent : red::Event
{
    static constexpr const char* NAME = "gameAppearancesReadyTPPRepresentationEvent";
    static constexpr const char* ALIAS = "AppearancesReadyTPPRepresentationEvent";

};
RED4EXT_ASSERT_SIZE(AppearancesReadyTPPRepresentationEvent, 0x40);
} // namespace game
using gameAppearancesReadyTPPRepresentationEvent = game::AppearancesReadyTPPRepresentationEvent;
using AppearancesReadyTPPRepresentationEvent = game::AppearancesReadyTPPRepresentationEvent;
} // namespace RED4ext

// clang-format on
