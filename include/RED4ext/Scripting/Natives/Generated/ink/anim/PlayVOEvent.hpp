#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct PlayVOEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimPlayVOEvent";
    static constexpr const char* ALIAS = NAME;

    CString VOLine; // 48
    CString speakerName; // 68
};
RED4EXT_ASSERT_SIZE(PlayVOEvent, 0x88);
} // namespace ink::anim
using inkanimPlayVOEvent = ink::anim::PlayVOEvent;
} // namespace RED4ext

// clang-format on
