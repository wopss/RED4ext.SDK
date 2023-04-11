#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct StatModifierHandle
{
    static constexpr const char* NAME = "gameStatModifierHandle";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x4 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(StatModifierHandle, 0x4);
} // namespace game
using gameStatModifierHandle = game::StatModifierHandle;
} // namespace RED4ext

// clang-format on
