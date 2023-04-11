#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct LookAtRemoveEvent : red::Event
{
    static constexpr const char* NAME = "entLookAtRemoveEvent";
    static constexpr const char* ALIAS = "LookAtRemoveEvent";

    anim::LookAtRef lookAtRef; // 40
    bool hasOutTransition; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float outTransitionSpeed; // 54
};
RED4EXT_ASSERT_SIZE(LookAtRemoveEvent, 0x58);
} // namespace ent
using entLookAtRemoveEvent = ent::LookAtRemoveEvent;
using LookAtRemoveEvent = ent::LookAtRemoveEvent;
} // namespace RED4ext

// clang-format on
