#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemWeaponPlaneBlur : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemWeaponPlaneBlur";
    static constexpr const char* ALIAS = NAME;

    effect::EffectParameterEvaluatorFloat farPlaneMultiplier; // 48
    bool override; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(TrackItemWeaponPlaneBlur, 0x70);
} // namespace effect
using effectTrackItemWeaponPlaneBlur = effect::TrackItemWeaponPlaneBlur;
} // namespace RED4ext

// clang-format on
