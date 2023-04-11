#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct VOWithDelay
{
    static constexpr const char* NAME = "gameuiVOWithDelay";
    static constexpr const char* ALIAS = NAME;

    float playDelay; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString voHexID; // 08
};
RED4EXT_ASSERT_SIZE(VOWithDelay, 0x28);
} // namespace game::ui
using gameuiVOWithDelay = game::ui::VOWithDelay;
} // namespace RED4ext

// clang-format on
