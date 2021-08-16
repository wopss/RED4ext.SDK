#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/CMaterialParameter.hpp>
#include <RED4ext/Types/generated/Color.hpp>

namespace RED4ext
{
struct CMaterialParameterColor : CMaterialParameter
{
    static constexpr const char* NAME = "CMaterialParameterColor";
    static constexpr const char* ALIAS = NAME;

    Color color; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CMaterialParameterColor, 0x48);
} // namespace RED4ext
