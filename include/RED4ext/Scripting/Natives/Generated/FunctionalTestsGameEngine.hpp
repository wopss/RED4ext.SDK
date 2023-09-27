#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/GameEngine.hpp>

namespace RED4ext
{
struct FunctionalTestsGameEngine : CGameEngine
{
    static constexpr const char* NAME = "FunctionalTestsGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk350[0x3580 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(FunctionalTestsGameEngine, 0x3580);
} // namespace RED4ext

// clang-format on
