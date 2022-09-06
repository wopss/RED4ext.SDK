#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct CMaterialParameter : ISerializable
{
    static constexpr const char* NAME = "CMaterialParameter";
    static constexpr const char* ALIAS = NAME;

    CName parameterName; // 30
    uint32_t register_; // 38 -- register
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(CMaterialParameter, 0x40);
} // namespace RED4ext

// clang-format on
