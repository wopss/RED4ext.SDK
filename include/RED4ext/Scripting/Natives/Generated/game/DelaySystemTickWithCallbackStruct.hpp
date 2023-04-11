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
struct DelaySystemTickWithCallbackStruct : game::DelaySystemTickStruct
{
    static constexpr const char* NAME = "gameDelaySystemTickWithCallbackStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x80 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(DelaySystemTickWithCallbackStruct, 0x80);
} // namespace game
using gameDelaySystemTickWithCallbackStruct = game::DelaySystemTickWithCallbackStruct;
} // namespace RED4ext

// clang-format on
