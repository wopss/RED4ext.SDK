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
struct TOMLArrayInt64 : red::TOMLBaseValue
{
    static constexpr const char* NAME = "redTOMLArrayInt64";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TOMLArrayInt64, 0x60);
} // namespace red
using redTOMLArrayInt64 = red::TOMLArrayInt64;
} // namespace RED4ext

// clang-format on
