#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimTargetAddEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct LookAtAddEvent : ent::AnimTargetAddEvent
{
    static constexpr const char* NAME = "entLookAtAddEvent";
    static constexpr const char* ALIAS = "LookAtAddEvent";

    anim::LookAtRef outLookAtRef; // 58
    anim::LookAtRequest request; // 68
};
RED4EXT_ASSERT_SIZE(LookAtAddEvent, 0xD8);
} // namespace ent
using entLookAtAddEvent = ent::LookAtAddEvent;
using LookAtAddEvent = ent::LookAtAddEvent;
} // namespace RED4ext

// clang-format on
