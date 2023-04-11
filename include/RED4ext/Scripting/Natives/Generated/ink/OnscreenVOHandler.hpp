#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct OnscreenVOHandler
{
    static constexpr const char* NAME = "inkOnscreenVOHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x68 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(OnscreenVOHandler, 0x68);
} // namespace ink
using inkOnscreenVOHandler = ink::OnscreenVOHandler;
} // namespace RED4ext

// clang-format on
