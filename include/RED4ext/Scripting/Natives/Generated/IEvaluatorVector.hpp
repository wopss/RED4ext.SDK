#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EFreeVectorAxes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluator.hpp>

namespace RED4ext
{
struct IEvaluatorVector : IEvaluator
{
    static constexpr const char* NAME = "IEvaluatorVector";
    static constexpr const char* ALIAS = NAME;

    EFreeVectorAxes freeAxes; // 30
    bool spill; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
};
RED4EXT_ASSERT_SIZE(IEvaluatorVector, 0x38);
} // namespace RED4ext

// clang-format on
