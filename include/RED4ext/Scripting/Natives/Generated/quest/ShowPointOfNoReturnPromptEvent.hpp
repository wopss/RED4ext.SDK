#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowPointOfNoReturnPromptEvent : red::Event
{
    static constexpr const char* NAME = "questShowPointOfNoReturnPromptEvent";
    static constexpr const char* ALIAS = "ShowPointOfNoReturnPromptEvent";

};
RED4EXT_ASSERT_SIZE(ShowPointOfNoReturnPromptEvent, 0x40);
} // namespace quest
using questShowPointOfNoReturnPromptEvent = quest::ShowPointOfNoReturnPromptEvent;
using ShowPointOfNoReturnPromptEvent = quest::ShowPointOfNoReturnPromptEvent;
} // namespace RED4ext

// clang-format on
