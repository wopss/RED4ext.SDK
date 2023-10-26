#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectData_MeleeWaterFx
{
    static constexpr const char* NAME = "gameEffectData_MeleeWaterFx";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EffectData_MeleeWaterFx, 0x30);
} // namespace game
using gameEffectData_MeleeWaterFx = game::EffectData_MeleeWaterFx;
} // namespace RED4ext

// clang-format on
