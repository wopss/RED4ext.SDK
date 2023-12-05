#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct __declspec(align(0x10)) StealthMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsStealthMappin";
    static constexpr const char* ALIAS = "StealthMappin";

    uint8_t unk108[0x3B0 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(StealthMappin, 0x3B0);
} // namespace game::mappins
using gamemappinsStealthMappin = game::mappins::StealthMappin;
using StealthMappin = game::mappins::StealthMappin;
} // namespace RED4ext

// clang-format on
