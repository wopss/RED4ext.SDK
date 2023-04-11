#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace red
{
struct TOMLBaseValue : ISerializable
{
    static constexpr const char* NAME = "redTOMLBaseValue";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TOMLBaseValue, 0x50);
} // namespace red
using redTOMLBaseValue = red::TOMLBaseValue;
} // namespace RED4ext

// clang-format on
