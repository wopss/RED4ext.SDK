#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DelaySystemTickStruct.hpp>

namespace RED4ext
{
namespace game
{
struct DelaySystemTickOnEventStruct : game::DelaySystemTickStruct
{
    static constexpr const char* NAME = "gameDelaySystemTickOnEventStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DelaySystemTickOnEventStruct, 0x60);
} // namespace game
using gameDelaySystemTickOnEventStruct = game::DelaySystemTickOnEventStruct;
} // namespace RED4ext

// clang-format on
