#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/GameEngine.hpp>

namespace RED4ext
{
struct DebugGameEngine : CGameEngine
{
    static constexpr const char* NAME = "DebugGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk350[0x400 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(DebugGameEngine, 0x400);
} // namespace RED4ext

// clang-format on
