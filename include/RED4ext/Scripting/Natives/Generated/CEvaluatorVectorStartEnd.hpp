#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CEvaluatorVectorStartEnd : IEvaluatorVector
{
    static constexpr const char* NAME = "CEvaluatorVectorStartEnd";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    Vector4 start; // 40
    Vector4 end; // 50
};
RED4EXT_ASSERT_SIZE(CEvaluatorVectorStartEnd, 0x60);
} // namespace RED4ext

// clang-format on
