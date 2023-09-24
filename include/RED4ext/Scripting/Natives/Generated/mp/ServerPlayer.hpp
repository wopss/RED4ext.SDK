#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/Player.hpp>

namespace RED4ext
{
namespace mp
{
struct ServerPlayer : mp::Player
{
    static constexpr const char* NAME = "mpServerPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ServerPlayer, 0x90);
} // namespace mp
using mpServerPlayer = mp::ServerPlayer;
} // namespace RED4ext

// clang-format on
