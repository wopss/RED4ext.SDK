#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CEvaluatorVectorRandomUniform : IEvaluatorVector
{
    static constexpr const char* NAME = "CEvaluatorVectorRandomUniform";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    Vector4 min; // 40
    Vector4 max; // 50
    bool lockX; // 60
    bool lockY; // 61
    bool lockZ; // 62
    bool lockW; // 63
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(CEvaluatorVectorRandomUniform, 0x70);
} // namespace RED4ext

// clang-format on
