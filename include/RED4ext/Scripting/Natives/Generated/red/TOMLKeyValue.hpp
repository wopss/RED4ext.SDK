#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TOMLBaseValue.hpp>

namespace RED4ext
{
namespace red
{
struct __declspec(align(0x10)) TOMLKeyValue : red::TOMLBaseValue
{
    static constexpr const char* NAME = "redTOMLKeyValue";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TOMLKeyValue, 0x80);
} // namespace red
using redTOMLKeyValue = red::TOMLKeyValue;
} // namespace RED4ext

// clang-format on
