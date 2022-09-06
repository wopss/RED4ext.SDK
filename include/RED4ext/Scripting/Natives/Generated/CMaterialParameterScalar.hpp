#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMaterialParameter.hpp>

namespace RED4ext
{
struct CMaterialParameterScalar : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterScalar";
    static constexpr const char* ALIAS = NAME;

    float scalar; // 40
    float min; // 44
    float max; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CMaterialParameterScalar, 0x50);
} // namespace RED4ext

// clang-format on
