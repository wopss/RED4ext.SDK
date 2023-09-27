#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemFilmGrain : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemFilmGrain";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    DynArray<ERenderObjectType> mask; // 50
    uint8_t unk60[0x68 - 0x60]; // 60
    effect::EffectParameterEvaluatorFloat luminanceBias; // 68
    effect::EffectParameterEvaluatorVector strength; // 88
    bool override; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(TrackItemFilmGrain, 0xA8);
} // namespace effect
using effectTrackItemFilmGrain = effect::TrackItemFilmGrain;
} // namespace RED4ext

// clang-format on
