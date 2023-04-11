#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink { struct StyleResource; }

namespace ink::anim
{
struct SetStyleEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimSetStyleEvent";
    static constexpr const char* ALIAS = NAME;

    RaRef<ink::StyleResource> style; // 48
};
RED4EXT_ASSERT_SIZE(SetStyleEvent, 0x50);
} // namespace ink::anim
using inkanimSetStyleEvent = ink::anim::SetStyleEvent;
} // namespace RED4ext

// clang-format on
