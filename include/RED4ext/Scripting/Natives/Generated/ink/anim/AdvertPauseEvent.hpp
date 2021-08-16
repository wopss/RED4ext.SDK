#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct AdvertPauseEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimAdvertPauseEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AdvertPauseEvent, 0x48);
} // namespace ink::anim
} // namespace RED4ext
