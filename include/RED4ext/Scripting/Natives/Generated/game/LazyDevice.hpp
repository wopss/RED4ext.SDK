#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct LazyDevice : IScriptable
{
    static constexpr const char* NAME = "gameLazyDevice";
    static constexpr const char* ALIAS = "LazyDevice";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(LazyDevice, 0x58);
} // namespace game
using gameLazyDevice = game::LazyDevice;
using LazyDevice = game::LazyDevice;
} // namespace RED4ext

// clang-format on
