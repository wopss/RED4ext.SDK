#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorFloat.hpp>

namespace RED4ext
{
struct CEvaluatorFloatRandomUniform : IEvaluatorFloat
{
    static constexpr const char* NAME = "CEvaluatorFloatRandomUniform";
    static constexpr const char* ALIAS = NAME;

    float min; // 30
    float max; // 34
};
RED4EXT_ASSERT_SIZE(CEvaluatorFloatRandomUniform, 0x38);
} // namespace RED4ext

// clang-format on
