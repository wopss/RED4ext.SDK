#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DelaySystemDelayStruct.hpp>

namespace RED4ext
{
namespace game { 
struct DelaySystemScriptableSysRequestStruct : game::DelaySystemDelayStruct
{
    static constexpr const char* NAME = "gameDelaySystemScriptableSysRequestStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(DelaySystemScriptableSysRequestStruct, 0x58);
} // namespace game
} // namespace RED4ext
