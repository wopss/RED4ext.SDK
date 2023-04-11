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

namespace game
{
struct VisionModuleEvent : red::Event
{
    static constexpr const char* NAME = "gameVisionModuleEvent";
    static constexpr const char* ALIAS = NAME;

    CName changedModule; // 40
    bool activated; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    WeakHandle<game::Object> activator; // 50
};
RED4EXT_ASSERT_SIZE(VisionModuleEvent, 0x60);
} // namespace game
using gameVisionModuleEvent = game::VisionModuleEvent;
} // namespace RED4ext

// clang-format on
