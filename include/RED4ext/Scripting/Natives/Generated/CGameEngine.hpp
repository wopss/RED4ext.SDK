#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/BaseGameEngine.hpp>

namespace RED4ext
{
struct CGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "CGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x340 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(CGameEngine, 0x340);
} // namespace RED4ext

// clang-format on
