#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ColorGradingLutParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/EffectParameterEvaluatorFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
namespace effect
{
struct TrackItemColorGrade : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemColorGrade";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    DynArray<ERenderObjectType> mask; // 50
    uint8_t unk60[0x68 - 0x60]; // 60
    effect::EffectParameterEvaluatorFloat contrast; // 68
    effect::EffectParameterEvaluatorFloat saturate; // 88
    effect::EffectParameterEvaluatorFloat brightness; // A8
    effect::EffectParameterEvaluatorFloat lutWeight; // C8
    ColorGradingLutParams lutParams; // E8
    ColorGradingLutParams lutParamsHdr; // 108
    bool blendWithBaseLut; // 128
    uint8_t unk129[0x130 - 0x129]; // 129
};
RED4EXT_ASSERT_SIZE(TrackItemColorGrade, 0x130);
} // namespace effect
using effectTrackItemColorGrade = effect::TrackItemColorGrade;
} // namespace RED4ext

// clang-format on
