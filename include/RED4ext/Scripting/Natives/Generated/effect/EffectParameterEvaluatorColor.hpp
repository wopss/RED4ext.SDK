#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IEvaluatorColor;

namespace effect { 
struct EffectParameterEvaluatorColor
{
    static constexpr const char* NAME = "effectEffectParameterEvaluatorColor";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorColor> evaluator; // 00
    CName inputParameterOverride; // 10
};
RED4EXT_ASSERT_SIZE(EffectParameterEvaluatorColor, 0x18);
} // namespace effect
} // namespace RED4ext
