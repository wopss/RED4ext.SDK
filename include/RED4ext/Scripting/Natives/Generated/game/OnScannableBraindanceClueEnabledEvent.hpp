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
struct OnScannableBraindanceClueEnabledEvent : red::Event
{
    static constexpr const char* NAME = "gameOnScannableBraindanceClueEnabledEvent";
    static constexpr const char* ALIAS = "OnScannableBraindanceClueEnabledEvent";

};
RED4EXT_ASSERT_SIZE(OnScannableBraindanceClueEnabledEvent, 0x40);
} // namespace game
using gameOnScannableBraindanceClueEnabledEvent = game::OnScannableBraindanceClueEnabledEvent;
using OnScannableBraindanceClueEnabledEvent = game::OnScannableBraindanceClueEnabledEvent;
} // namespace RED4ext

// clang-format on
