#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluator.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemMaterialParameter : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemMaterialParameter";
    static constexpr const char* ALIAS = NAME;

    float scale0; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    effect::EffectParameterEvaluator customParameter0; // 50
    float scale1; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    effect::EffectParameterEvaluator customParameter1; // 70
    float scale2; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    effect::EffectParameterEvaluator customParameter2; // 90
    float scale3; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    effect::EffectParameterEvaluator customParameter3; // B0
};
RED4EXT_ASSERT_SIZE(TrackItemMaterialParameter, 0xC8);
} // namespace effect
using effectTrackItemMaterialParameter = effect::TrackItemMaterialParameter;
} // namespace RED4ext

// clang-format on
