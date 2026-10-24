#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/EInputKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CallbackSystemEvent.hpp>

namespace RED4ext
{
namespace game
{
struct KeyInputEvent : game::CallbackSystemEvent
{
    static constexpr const char* NAME = "gameKeyInputEvent";
    static constexpr const char* ALIAS = "KeyInputEvent";

    uint8_t unk48[0x4C - 0x48]; // 48
    EInputAction action; // 4C
    EInputKey key; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(KeyInputEvent, 0x58);
} // namespace game
using gameKeyInputEvent = game::KeyInputEvent;
using KeyInputEvent = game::KeyInputEvent;
} // namespace RED4ext

// clang-format on
