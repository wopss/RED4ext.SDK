#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/GameEngine.hpp>

namespace RED4ext
{
struct InternalFunctionalTestsGameEngine : CGameEngine
{
    static constexpr const char* NAME = "InternalFunctionalTestsGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk350[0x35F8 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(InternalFunctionalTestsGameEngine, 0x35F8);
} // namespace RED4ext

// clang-format on
