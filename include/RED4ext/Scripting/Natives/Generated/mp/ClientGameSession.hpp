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
struct ClientGameSession : mp::GameSession
{
    static constexpr const char* NAME = "mpClientGameSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ClientGameSession, 0x78);
} // namespace mp
using mpClientGameSession = mp::ClientGameSession;
} // namespace RED4ext

// clang-format on
