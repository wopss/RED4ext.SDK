#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace sense
{
struct VisibilityEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibilityEvent";
    static constexpr const char* ALIAS = "SenseVisibilityEvent";

    WeakHandle<game::Object> target; // 40
    bool isVisible; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName description; // 58
    TweakDBID shapeId; // 60
};
RED4EXT_ASSERT_SIZE(VisibilityEvent, 0x68);
} // namespace sense
using senseVisibilityEvent = sense::VisibilityEvent;
using SenseVisibilityEvent = sense::VisibilityEvent;
} // namespace RED4ext

// clang-format on
