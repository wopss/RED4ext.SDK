#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI::behavior
{
struct SuspiciousObjectEvent : red::Event
{
    static constexpr const char* NAME = "AIbehaviorSuspiciousObjectEvent";
    static constexpr const char* ALIAS = "SuspiciousObjectEvent";

    WeakHandle<game::Object> target; // 40
    CName description; // 50
};
RED4EXT_ASSERT_SIZE(SuspiciousObjectEvent, 0x58);
} // namespace AI::behavior
using AIbehaviorSuspiciousObjectEvent = AI::behavior::SuspiciousObjectEvent;
using SuspiciousObjectEvent = AI::behavior::SuspiciousObjectEvent;
} // namespace RED4ext

// clang-format on
