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
struct DelaySystemPSEventStruct : game::DelaySystemDelayStruct
{
    static constexpr const char* NAME = "gameDelaySystemPSEventStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DelaySystemPSEventStruct, 0x68);
} // namespace game
using gameDelaySystemPSEventStruct = game::DelaySystemPSEventStruct;
} // namespace RED4ext

// clang-format on
