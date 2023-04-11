#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct CParticleSystem;

namespace effect
{
struct TrackItemParticles : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemParticles";
    static constexpr const char* ALIAS = NAME;

    Vector3 soundPositionOffset; // 48
    uint8_t unk54[0x58 - 0x54]; // 54
    Ref<CParticleSystem> particleSystem; // 58
    effect::EffectParameterEvaluatorFloat emissionScale; // 70
    effect::EffectParameterEvaluatorFloat alpha; // 90
    effect::EffectParameterEvaluatorFloat size; // B0
    effect::EffectParameterEvaluatorFloat velocity; // D0
    RenderSceneLayerMask renderLayerMask; // F0
    uint8_t unkF1[0xF8 - 0xF1]; // F1
    CName soundPositionName; // F8
};
RED4EXT_ASSERT_SIZE(TrackItemParticles, 0x100);
} // namespace effect
using effectTrackItemParticles = effect::TrackItemParticles;
} // namespace RED4ext

// clang-format on
