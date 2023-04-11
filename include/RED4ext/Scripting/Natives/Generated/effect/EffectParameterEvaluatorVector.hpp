#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

namespace effect
{
struct EffectParameterEvaluatorVector
{
    static constexpr const char* NAME = "effectEffectParameterEvaluatorVector";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> evaluator; // 00
    CName inputParameterOverride; // 10
};
RED4EXT_ASSERT_SIZE(EffectParameterEvaluatorVector, 0x18);
} // namespace effect
using effectEffectParameterEvaluatorVector = effect::EffectParameterEvaluatorVector;
} // namespace RED4ext

// clang-format on
