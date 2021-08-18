#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CGameEngine.hpp>

namespace RED4ext
{
struct DebugGameEngine : CGameEngine
{
    static constexpr const char* NAME = "DebugGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x380 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(DebugGameEngine, 0x380);
} // namespace RED4ext
