#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Event.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct ChangeTexturePartEvent : ink::anim::Event
{
    static constexpr const char* NAME = "inkanimChangeTexturePartEvent";
    static constexpr const char* ALIAS = NAME;

    CName imageTexturePartName; // 48
};
RED4EXT_ASSERT_SIZE(ChangeTexturePartEvent, 0x50);
} // namespace ink::anim
using inkanimChangeTexturePartEvent = ink::anim::ChangeTexturePartEvent;
} // namespace RED4ext

// clang-format on
