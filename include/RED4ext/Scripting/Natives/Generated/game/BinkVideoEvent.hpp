#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BinkVideoAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct BinkVideoEvent : red::Event
{
    static constexpr const char* NAME = "gameBinkVideoEvent";
    static constexpr const char* ALIAS = NAME;

    CString videoPath; // 40
    game::BinkVideoAction action; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(BinkVideoEvent, 0x68);
} // namespace game
using gameBinkVideoEvent = game::BinkVideoEvent;
} // namespace RED4ext

// clang-format on
