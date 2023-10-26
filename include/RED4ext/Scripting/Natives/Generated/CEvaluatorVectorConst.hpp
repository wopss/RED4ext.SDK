#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CEvaluatorVectorConst : IEvaluatorVector
{
    static constexpr const char* NAME = "CEvaluatorVectorConst";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    Vector4 value; // 40
};
RED4EXT_ASSERT_SIZE(CEvaluatorVectorConst, 0x50);
} // namespace RED4ext

// clang-format on
