#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

namespace effect
{
struct EffectParameterEvaluatorFloat
{
    static constexpr const char* NAME = "effectEffectParameterEvaluatorFloat";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> evaluator; // 00
    CName inputParameterOverride; // 10
    bool inputParameterIsPostMultiplier; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(EffectParameterEvaluatorFloat, 0x20);
} // namespace effect
using effectEffectParameterEvaluatorFloat = effect::EffectParameterEvaluatorFloat;
} // namespace RED4ext

// clang-format on
