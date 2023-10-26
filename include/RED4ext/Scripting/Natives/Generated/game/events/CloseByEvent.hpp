#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::damage { struct AttackData; }

namespace game::events
{
struct __declspec(align(0x10)) CloseByEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsCloseByEvent";
    static constexpr const char* ALIAS = "gameCloseByEvent";

    Vector4 position; // 40
    Vector4 forward; // 50
    WeakHandle<game::Object> instigator; // 60
    Handle<game::damage::AttackData> attackData; // 70
};
RED4EXT_ASSERT_SIZE(CloseByEvent, 0x80);
} // namespace game::events
using gameeventsCloseByEvent = game::events::CloseByEvent;
using gameCloseByEvent = game::events::CloseByEvent;
} // namespace RED4ext

// clang-format on
