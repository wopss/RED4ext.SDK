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

    uint8_t unk00[0x28 - 0x0]; // 0
    CRUID text; // 28
    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(OnscreenVOData, 0x38);
} // namespace ink
using inkOnscreenVOData = ink::OnscreenVOData;
} // namespace RED4ext

// clang-format on
