#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::targeting
{
struct SystemLookAtObjectChangedEvent : red::Event
{
    static constexpr const char* NAME = "gametargetingSystemLookAtObjectChangedEvent";
    static constexpr const char* ALIAS = "LookAtObjectChangedEvent";

    WeakHandle<game::Object> lookatObject; // 40
};
RED4EXT_ASSERT_SIZE(SystemLookAtObjectChangedEvent, 0x50);
} // namespace game::targeting
using gametargetingSystemLookAtObjectChangedEvent = game::targeting::SystemLookAtObjectChangedEvent;
using LookAtObjectChangedEvent = game::targeting::SystemLookAtObjectChangedEvent;
} // namespace RED4ext

// clang-format on
