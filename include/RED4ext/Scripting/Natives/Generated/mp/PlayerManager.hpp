#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPlayerManager.hpp>

namespace RED4ext
{
namespace mp
{
struct PlayerManager : game::IPlayerManager
{
    static constexpr const char* NAME = "mpPlayerManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x128 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PlayerManager, 0x128);
} // namespace mp
using mpPlayerManager = mp::PlayerManager;
} // namespace RED4ext

// clang-format on
