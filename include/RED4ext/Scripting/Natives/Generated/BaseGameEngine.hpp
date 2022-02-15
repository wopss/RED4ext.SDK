#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CBaseEngine.hpp>

namespace RED4ext
{
struct BaseGameEngine : CBaseEngine
{
    static constexpr const char* NAME = "BaseGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C8[0x2D0 - 0x2C8]; // 2C8
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x2D0);
} // namespace RED4ext
