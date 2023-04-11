#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct DebugPath
{
    static constexpr const char* NAME = "gameDebugPath";
    static constexpr const char* ALIAS = NAME;

    CString str; // 00
    uint8_t unk20[0x28 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(DebugPath, 0x28);
} // namespace game
using gameDebugPath = game::DebugPath;
} // namespace RED4ext

// clang-format on
