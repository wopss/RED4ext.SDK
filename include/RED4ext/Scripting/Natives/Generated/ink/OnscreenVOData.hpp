#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct OnscreenVOData
{
    static constexpr const char* NAME = "inkOnscreenVOData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x48 - 0x0]; // 0
    CRUID text; // 48
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(OnscreenVOData, 0x58);
} // namespace ink
using inkOnscreenVOData = ink::OnscreenVOData;
} // namespace RED4ext

// clang-format on
