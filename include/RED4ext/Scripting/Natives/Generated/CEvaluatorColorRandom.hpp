#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorColor.hpp>

namespace RED4ext
{
struct CEvaluatorColorRandom : IEvaluatorColor
{
    static constexpr const char* NAME = "CEvaluatorColorRandom";
    static constexpr const char* ALIAS = NAME;

    Color min; // 30
    Color max; // 34
    bool randomPerChannel; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CEvaluatorColorRandom, 0x40);
} // namespace RED4ext

// clang-format on
