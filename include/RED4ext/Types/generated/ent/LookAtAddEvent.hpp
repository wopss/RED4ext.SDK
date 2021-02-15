#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/LookAtRef.hpp>
#include <RED4ext/Types/generated/anim/LookAtRequest.hpp>
#include <RED4ext/Types/generated/ent/AnimTargetAddEvent.hpp>

namespace RED4ext
{
namespace ent { 
struct LookAtAddEvent : ent::AnimTargetAddEvent
{
    static constexpr const char* NAME = "entLookAtAddEvent";
    static constexpr const char* ALIAS = "LookAtAddEvent";

    anim::LookAtRef outLookAtRef; // 58
    anim::LookAtRequest request; // 68
};
RED4EXT_ASSERT_SIZE(LookAtAddEvent, 0xD8);
} // namespace ent
using LookAtAddEvent = ent::LookAtAddEvent;
} // namespace RED4ext
