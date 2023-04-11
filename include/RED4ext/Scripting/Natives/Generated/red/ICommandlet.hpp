#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace red
{
struct ICommandlet
{
    static constexpr const char* NAME = "redICommandlet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ICommandlet, 0x10);
} // namespace red
using redICommandlet = red::ICommandlet;
} // namespace RED4ext

// clang-format on
