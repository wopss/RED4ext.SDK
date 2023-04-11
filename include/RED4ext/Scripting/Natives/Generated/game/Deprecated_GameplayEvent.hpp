#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct Deprecated_GameplayEvent : red::Event
{
    static constexpr const char* NAME = "gameDeprecated_GameplayEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Deprecated_GameplayEvent, 0x60);
} // namespace game
using gameDeprecated_GameplayEvent = game::Deprecated_GameplayEvent;
} // namespace RED4ext

// clang-format on
