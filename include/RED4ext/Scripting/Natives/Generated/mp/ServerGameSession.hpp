#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/GameSession.hpp>

namespace RED4ext
{
namespace mp
{
struct ServerGameSession : mp::GameSession
{
    static constexpr const char* NAME = "mpServerGameSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ServerGameSession, 0x90);
} // namespace mp
using mpServerGameSession = mp::ServerGameSession;
} // namespace RED4ext

// clang-format on
