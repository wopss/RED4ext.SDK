#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct EffectData_Pierce
{
    static constexpr const char* NAME = "gameEffectData_Pierce";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectData_Pierce, 0x10);
} // namespace game
using gameEffectData_Pierce = game::EffectData_Pierce;
} // namespace RED4ext

// clang-format on
