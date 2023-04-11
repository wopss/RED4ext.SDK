#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DelaySystemDelayStruct.hpp>

namespace RED4ext
{
namespace game
{
struct DelaySystemEventStruct : game::DelaySystemDelayStruct
{
    static constexpr const char* NAME = "gameDelaySystemEventStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DelaySystemEventStruct, 0x60);
} // namespace game
using gameDelaySystemEventStruct = game::DelaySystemEventStruct;
} // namespace RED4ext

// clang-format on
