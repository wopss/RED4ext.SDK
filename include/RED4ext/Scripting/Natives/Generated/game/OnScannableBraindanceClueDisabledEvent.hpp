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
struct OnScannableBraindanceClueDisabledEvent : red::Event
{
    static constexpr const char* NAME = "gameOnScannableBraindanceClueDisabledEvent";
    static constexpr const char* ALIAS = "OnScannableBraindanceClueDisabledEvent";

};
RED4EXT_ASSERT_SIZE(OnScannableBraindanceClueDisabledEvent, 0x40);
} // namespace game
using gameOnScannableBraindanceClueDisabledEvent = game::OnScannableBraindanceClueDisabledEvent;
using OnScannableBraindanceClueDisabledEvent = game::OnScannableBraindanceClueDisabledEvent;
} // namespace RED4ext

// clang-format on
