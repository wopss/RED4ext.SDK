#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct UnlockableProgram
{
    static constexpr const char* NAME = "gameuiUnlockableProgram";
    static constexpr const char* ALIAS = "UnlockableProgram";

    CName name; // 00
    CName note; // 08
    bool isFulfilled; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
    TweakDBID programTweakID; // 14
    TweakDBID iconTweakID; // 1C
    bool hidden; // 24
    uint8_t unk25[0x28 - 0x25]; // 25
};
RED4EXT_ASSERT_SIZE(UnlockableProgram, 0x28);
} // namespace game::ui
using gameuiUnlockableProgram = game::ui::UnlockableProgram;
using UnlockableProgram = game::ui::UnlockableProgram;
} // namespace RED4ext

// clang-format on
