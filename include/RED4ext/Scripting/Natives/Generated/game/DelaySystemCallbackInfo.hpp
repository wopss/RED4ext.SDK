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
struct DelaySystemCallbackInfo : game::DelaySystemDelayStruct
{
    static constexpr const char* NAME = "gameDelaySystemCallbackInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DelaySystemCallbackInfo, 0x80);
} // namespace game
using gameDelaySystemCallbackInfo = game::DelaySystemCallbackInfo;
} // namespace RED4ext

// clang-format on
