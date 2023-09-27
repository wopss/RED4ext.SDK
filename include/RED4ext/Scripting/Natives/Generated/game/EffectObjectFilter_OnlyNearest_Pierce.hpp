#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_OnlyNearest.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_OnlyNearest_Pierce : game::EffectObjectFilter_OnlyNearest
{
    static constexpr const char* NAME = "gameEffectObjectFilter_OnlyNearest_Pierce";
    static constexpr const char* ALIAS = NAME;

    bool alwaysApplyFullWeaponCharge; // 48
    bool includePierced; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_OnlyNearest_Pierce, 0x50);
} // namespace game
using gameEffectObjectFilter_OnlyNearest_Pierce = game::EffectObjectFilter_OnlyNearest_Pierce;
} // namespace RED4ext

// clang-format on
