#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/GameEngine.hpp>

namespace RED4ext
{
struct HeadlessGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "HeadlessGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2E0[0x2E8 - 0x2E0]; // 2E0
};
RED4EXT_ASSERT_SIZE(HeadlessGameEngine, 0x2E8);
} // namespace RED4ext

// clang-format on
