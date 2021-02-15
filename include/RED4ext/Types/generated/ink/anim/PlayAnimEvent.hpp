#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/anim/Event.hpp>
#include <RED4ext/Types/generated/ink/anim/PlaybackOptions.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct PlayAnimEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimPlayAnimEvent";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 48
    ink::anim::PlaybackOptions playbackOptions; // 50
};
RED4EXT_ASSERT_SIZE(PlayAnimEvent, 0x80);
} // namespace ink::anim
} // namespace RED4ext
