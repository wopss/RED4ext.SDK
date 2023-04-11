#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/gameSaveLock.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(game::SaveLock, 0x28);
using gameSaveLock = game::SaveLock;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SaveLockReason.hpp>

namespace RED4ext
{
namespace game
{
struct SaveLock
{
    static constexpr const char* NAME = "gameSaveLock";
    static constexpr const char* ALIAS = NAME;

    game::SaveLockReason reason; // 00
    uint8_t unk04[0x28 - 0x4]; // 4
};
RED4EXT_ASSERT_SIZE(SaveLock, 0x28);
} // namespace game
using gameSaveLock = game::SaveLock;
} // namespace RED4ext
*/

// clang-format on
