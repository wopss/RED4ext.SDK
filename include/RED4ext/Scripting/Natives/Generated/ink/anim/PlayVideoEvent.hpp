#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
struct Bink;

namespace ink::anim
{
struct PlayVideoEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimPlayVideoEvent";
    static constexpr const char* ALIAS = NAME;

    RaRef<Bink> videoResource; // 48
};
RED4EXT_ASSERT_SIZE(PlayVideoEvent, 0x50);
} // namespace ink::anim
using inkanimPlayVideoEvent = ink::anim::PlayVideoEvent;
} // namespace RED4ext

// clang-format on
