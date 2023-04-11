#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BaseGameSession.hpp>

namespace RED4ext
{
namespace mp
{
struct GameSession : game::BaseGameSession
{
    static constexpr const char* NAME = "mpGameSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x68 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(GameSession, 0x68);
} // namespace mp
using mpGameSession = mp::GameSession;
} // namespace RED4ext

// clang-format on
