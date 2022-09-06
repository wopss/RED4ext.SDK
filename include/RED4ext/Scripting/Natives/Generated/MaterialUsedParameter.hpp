#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct MaterialUsedParameter
{
    static constexpr const char* NAME = "MaterialUsedParameter";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint8_t register_; // 08 -- register
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(MaterialUsedParameter, 0x10);
} // namespace RED4ext

// clang-format on
