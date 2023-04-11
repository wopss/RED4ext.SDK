#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IEvaluator;

namespace effect
{
struct EffectParameterEvaluator
{
    static constexpr const char* NAME = "effectEffectParameterEvaluator";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluator> evaluator; // 00
    CName inputParameterOverride; // 10
};
RED4EXT_ASSERT_SIZE(EffectParameterEvaluator, 0x18);
} // namespace effect
using effectEffectParameterEvaluator = effect::EffectParameterEvaluator;
} // namespace RED4ext

// clang-format on
